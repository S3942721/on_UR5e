import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from onRobot import gripper
from par_utils.action import GripperGrip
import requests
import xmlrpc.client


CHECK_BUSY_METHOD = "rg_get_busy"
CHECK_WIDTH_METHOD = "rg_get_width"
GRIP_METHOD = "rg_grip"
MAX_WIDTH = 100.0
MIN_WIDTH = 0.0
MAX_FORCE = 10.0
MIN_FORCE = 0.0


### This is the node that will handle opening and closing the gripper

class GripperActionServer(Node):

    def __init__(self):
        super().__init__('gripper_action_server')
        
        
        # Declare out parameters
        self.declare_parameters(
            namespace='',
            parameters=[
                {'gripperId', 0}
                ('gripperIp', "192.168.0.99"),
                ('gripperPort', "41414"),
                ("gripperCheckDuration", 0.1)
            ]
        )
        
        # Look-up parameters values
        self._gripper_id = self.get_parameter('gripperId').value
        self._gripper_ip = self.get_parameter('gripperIp').value
        self._gripper_port = self.get_parameter('gripperPort').value
        self._gripper_check_duration = self.get_parameter('gripperCheckDuration').value
        
        self._gripper_host = f"http://{self._gripper_ip}:{self._gripper_port}"
        
        self._current_gripper_width = self.check_gripper_width()
        self._target_gripper_width = self._current_gripper_width
        
        self._check_width_timer = self.create_timer(self._gripper_check_duration, self.gripper_timer_callback)
        
        self._action_server = ActionServer(
            self,
            GripperGrip,
            'gripper_grip',
            self.execute_callback
        )
        
        self.get_logger().info(f"Gripper Action Node starting on host: {self._gripper_host}. ID = {self._gripper_id}")
        

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        result = GripperGrip.Result()
        return result
    
    def gripper_timer_callback(self):
        self._current_gripper_width = self.check_gripper_width()

    
    def check_gripper_width(self):
        return float(self.send_xml_request(CHECK_WIDTH_METHOD)[0][0])
    
    def set_gripper_width(self, target_width = 100.0, target_force = 0.5):
        target_width = min(max(MIN_WIDTH, target_width), MAX_WIDTH)
        target_force = min(max(MIN_FORCE, target_force), MAX_FORCE)
        
        response = self.send_xml_request(GRIP_METHOD, [target_width, target_width])
        
        return response != None
    
    def send_xml_request(self, method_name, params = []):
        
        params_string = ""
        
        for param in params:
            params = f"<param><value><double>{param}</double></value></param>"
        
        request = f"""<?xml version="1.0"?>
            <methodCall>
            <methodName>{method_name}</methodName>
                <params>
                    <param>
                        <value><int>{self._gripper_id}</int></value>
                    </param>
                    {params_string}
                    </param>
                </params>
            </methodCall>
        """
        
        headers = {
            'Content-Type': 'application/x-www-form-urlencoded',
        }
        
        request = request.replace('\r\n','').encode()
        
        try:
            response = requests.post(self._gripper_host, headers=headers, data=request)

            if (response.status_code >= 200 and response.status_code < 300):
                return xmlrpc.client.loads(response.text)
        except requests.HTTPError as e:
            self.get_logger().error(f"XMLRPC-HTTP Error: {e}")
        return None




def main(args=None):
    rclpy.init(args=args)

    gripper_action_server = GripperActionServer()

    rclpy.spin(gripper_action_server)


if __name__ == '__main__':
    main()