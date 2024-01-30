#!/usr/bin/env python3
#src: https://github.com/fmauch/Universal_Robots_ROS2_Driver/blob/test_move_script/ur_robot_driver/scripts/test_move.py

import time

import rclpy
from rclpy.action import ActionClient

from builtin_interfaces.msg import Duration
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from control_msgs.action import FollowJointTrajectory
from sensor_msgs.msg import JointState

TRAJECTORIES = {
    "traj0": [
        {
            "positions": [1.2626, -1.7517, 1.84105, -3.2127, -1.23530, 0.00921],
            "velocities": [0, 0, 0, 0, 0, 0],
            "time_from_start": Duration(sec=1, nanosec=0),
        },
        {
            "positions": [1.9626, -1.7517, 1.84105, -3.2127, -1.23530, 0.00921],
            "velocities": [0, 0, 0, 0, 0, 0],
            "time_from_start": Duration(sec=1, nanosec=10),
        },
    ],
    "traj1": [
        {
            "positions": [1.2626, -1.7517, 1.84105, -3.2127, -1.23530, 0.00921],
            "velocities": [0, 0, 0, 0, 0, 0],
            "time_from_start": Duration(sec=5, nanosec=0),
        },
        {
            "positions": [1.4626, -1.7517, 1.84105, -3.2127, -1.23530, 0.00921],
            "velocities": [0, 0, 0, 0, 0, 0],
            "time_from_start": Duration(sec=7, nanosec=0),
        },
    ],
}


class JTCClient(rclpy.node.Node):
    """Small test client for the jtc"""

    def __init__(self):
        super().__init__("jtc_client")
        self.declare_parameter("controller_name", "scaled_joint_trajectory_controller")
        self.declare_parameter(
            "joints",
            [
                "shoulder_pan_joint",
                "shoulder_lift_joint",
                "elbow_joint",
                "wrist_1_joint",
                "wrist_2_joint",
                "wrist_3_joint",
            ],
        )
        self.declare_parameter("print_joint_states", False)
        controller_name = self.get_parameter("controller_name").value + "/follow_joint_trajectory"
        self.joints = self.get_parameter("joints").value
        self.print_joint_states = self.get_parameter("print_joint_states").value

        if self.joints is None or len(self.joints) == 0:
            raise Exception('"joints" parameter is required')

        self._action_client = ActionClient(self, FollowJointTrajectory, controller_name)
        self.get_logger().info(f"Waiting for action server on {controller_name}")
        self._action_client.wait_for_server()

        if self.print_joint_states:  # Only create the subscription if print_joint_states is True
            # Create a subscription to the /joint_states topic
            self.subscription = self.create_subscription(
                JointState,
                '/joint_states',
                self.joint_states_callback,
                10
            )
            self.subscription  # prevent unused variable warning

        self.parse_trajectories()
        self.i = 0
        self._send_goal_future = None
        self._get_result_future = None
        self.execute_next_trajectory()

    # Callback function to handle incoming JointState messages
    def joint_states_callback(self, msg):
        self.get_logger().info('Joint States:')
        for name, pos in zip(msg.name, msg.position):
            self.get_logger().info(f'{name}: {pos}')


    def parse_trajectories(self):
        self.goals = {}

        for traj_name in TRAJECTORIES:
            goal = JointTrajectory()
            goal.joint_names = self.joints
            for pt in TRAJECTORIES[traj_name]:
                point = JointTrajectoryPoint()
                point.positions = pt["positions"]
                point.velocities = [float(v) for v in pt["velocities"]]
                point.time_from_start = pt["time_from_start"]
                goal.points.append(point)

            self.goals[traj_name] = goal

    def execute_next_trajectory(self):
        if self.i >= len(self.goals):
            self.get_logger().info("Done with all trajectories")
            return
        traj_name = list(self.goals)[self.i]
        self.i = self.i + 1
        if traj_name:
            self.execute_trajectory(traj_name)

    def execute_trajectory(self, traj_name):
        self.get_logger().info(f"Executing trajectory {traj_name}")
        goal = FollowJointTrajectory.Goal()
        goal.trajectory = self.goals[traj_name]
        self._send_goal_future = self._action_client.send_goal_async(goal)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            self.get_logger().info(f'Goal ID: {goal_handle.goal_id}')
            self.get_logger().info(f'Goal status: {goal_handle.status}')
        else:
            self.get_logger().info('Goal accepted :)')


    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f"Done with result: {self.error_code_to_str(result.error_code)}")
        if result.error_code == FollowJointTrajectory.Result.SUCCESSFUL:
            time.sleep(5)
            self.execute_next_trajectory()

    @staticmethod
    def error_code_to_str(error_code):
        if error_code == FollowJointTrajectory.Result.SUCCESSFUL:
            return "SUCCESSFUL"
        if error_code == FollowJointTrajectory.Result.INVALID_GOAL:
            return "INVALID_GOAL"
        if error_code == FollowJointTrajectory.Result.INVALID_JOINTS:
            return "INVALID_JOINTS"
        if error_code == FollowJointTrajectory.Result.OLD_HEADER_TIMESTAMP:
            return "OLD_HEADER_TIMESTAMP"
        if error_code == FollowJointTrajectory.Result.PATH_TOLERANCE_VIOLATED:
            return "PATH_TOLERANCE_VIOLATED"
        if error_code == FollowJointTrajectory.Result.GOAL_TOLERANCE_VIOLATED:
            return "GOAL_TOLERANCE_VIOLATED"


def main(args=None):
    rclpy.init(args=args)

    jtc_client = JTCClient()
    rclpy.spin(jtc_client)

    rclpy.shutdown()


if __name__ == "__main__":
    main()