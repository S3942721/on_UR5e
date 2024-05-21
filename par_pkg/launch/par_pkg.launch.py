from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('gripperId', default_value="0"),
        DeclareLaunchArgument('gripperIp', default_value='192.168.0.99'),
        DeclareLaunchArgument('gripperPort', default_value="41414"),
        
        DeclareLaunchArgument('gripperCheckDuration', default_value='0.1'),
        
        Node(
            package='par_pkg',
            executable='gripper_action_server',
            name='gripper_action_server',
            output='screen',
            parameters=[
                {'gripperId': LaunchConfiguration('gripperId')},
                {'gripperIp': LaunchConfiguration('gripperIp')},
                {'gripperPort': LaunchConfiguration('gripperPort')},
                {'gripperCheckDuration': LaunchConfiguration('gripperCheckDuration')}
            ]
        ),
    ])