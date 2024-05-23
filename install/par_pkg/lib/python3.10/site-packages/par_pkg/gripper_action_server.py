import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from onrobot.onrobot import RG
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
                {'gripperType', "rg2"},
                ('gripperIp', "192.168.1.1"),
                ('gripperPort', "502"),
                ("gripperCheckRate", 0.1)
            ]
        )
        
        # Look-up parameters values
        self._gripper_type = self.get_parameter('gripperType').value
        self._gripper_ip = self.get_parameter('gripperIp').value
        self._gripper_port = self.get_parameter('gripperPort').value
        self._gripper_check_rate = self.get_parameter('gripperCheckRate').value
        
        self._gripper: RG = RG(self._gripper_type, self._gripper_ip, self._gripper_port)
        
        self._current_gripper_width = self.check_gripper_width()
        self._target_gripper_width = self._current_gripper_width
        
        
        self.create_timer(self._gripper_check_rate, self.timer_callback)
        
        self._action_server = ActionServer(
            self,
            GripperGrip,
            'gripper_grip',
            self.execute_callback
        )
        
        self.get_logger().info(f"Gripper Action Node starting on host: {self._gripper_ip}:{self._gripper_port}. TYPE = {self._gripper_type}")
        

    def timer_callback(self):
        return

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        result = GripperGrip.Result()
        return result
    





def main(args=None):
    rclpy.init(args=args)

    gripper_action_server = GripperActionServer()

    rclpy.spin(gripper_action_server)


if __name__ == '__main__':
    main()