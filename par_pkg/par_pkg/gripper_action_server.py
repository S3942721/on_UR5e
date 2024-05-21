import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from par_utils.action import GripperGrip


class GripperActionServer(Node):

    def __init__(self):
        super().__init__('fibonacci_action_server')
        
        
        
        self._action_server = ActionServer(
            self,
            GripperGrip,
            'gripper_grip',
            self.execute_callback)

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