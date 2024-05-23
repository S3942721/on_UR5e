from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        
        ### GRIPPER ACTION SERVER ARGUMENTS
        #### GRIPPER SETUP
        DeclareLaunchArgument('gripperType', default_value="rg2"),
        DeclareLaunchArgument('gripperIp', default_value='192.168.1.1'),
        DeclareLaunchArgument('gripperPort', default_value="502"),
        
        #### GRIPPER BEHAVIOUR CONFIG
        DeclareLaunchArgument('gripperPrecisionEpsilon', default_value='0.1'),
        DeclareLaunchArgument('gripperCheckRate', default_value='0.1'),
        DeclareLaunchArgument('gripperInfoPublishRate', default_value="5"),
        
        #### GRIPPER TOPICS
        DeclareLaunchArgument("gripperInfoTopic", default_value="/par/gripper/info"),
        
        Node(
            package='par_pkg',
            executable='gripper_control_node',
            name='gripper_control_node',
            output='screen',
            parameters=[
                {'gripperType': LaunchConfiguration('gripperType')},
                {'gripperIp': LaunchConfiguration('gripperIp')},
                {'gripperPort': LaunchConfiguration('gripperPort')},
                {'gripperCheckRate': LaunchConfiguration('gripperCheckRate')},
                {'gripperPrecisionEpisilon': LaunchConfiguration('gripperPrecisionEpsilon')},
                {'gripperInfoPublishRate': LaunchConfiguration("gripperInfoPublishRate")},
                {'gripperInfoTopic': LaunchConfiguration("gripperInfoTopic")}
            ]
        ),
    ])