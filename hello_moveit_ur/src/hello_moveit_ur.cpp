#include <memory>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_visual_tools/moveit_visual_tools.h>

int main(int argc, char * argv[])
{
  // Initialize ROS and create the Node
  rclcpp::init(argc, argv);
  auto const node = std::make_shared<rclcpp::Node>(
    "hello_moveit",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
  );

  // Create a ROS logger
  auto const logger = rclcpp::get_logger("hello_moveit");

  // Create the MoveIt MoveGroup Interface
  using moveit::planning_interface::MoveGroupInterface;
  auto move_group_interface = MoveGroupInterface(node, "ur_manipulator");  //CHANGE

  // Create MoveItVisualTools
  auto visual_tools = std::make_shared<moveit_visual_tools::MoveItVisualTools>(node, "base_link", "/visualization_marker_array");
  visual_tools->deleteAllMarkers();
  visual_tools->loadRemoteControl();

  // Set a target Pose
  auto const target_pose = []{
    geometry_msgs::msg::Pose msg;
    msg.orientation.w = 1.0;
    msg.position.x = -0.25;
    msg.position.y = 0.17;
    msg.position.z = 0.7;
    return msg;
  }();
  move_group_interface.setPoseTarget(target_pose);

  // Create a plan to that target pose
  auto const [success, plan] = [&move_group_interface]{
    moveit::planning_interface::MoveGroupInterface::Plan msg;
    auto const ok = static_cast<bool>(move_group_interface.plan(msg));
    return std::make_pair(ok, msg);
  }();

  // Visualize the plan in Rviz
  visual_tools->publishTrajectoryLine(plan.trajectory_, move_group_interface.getRobotModel()->getJointModelGroup(move_group_interface.getName()));
  visual_tools->trigger();

  // Execute the plan
  if(success) {
    //if (move_group_interface.execute(plan))
    //{
      RCLCPP_ERROR(logger, "Execution Succeeded!!!");
    //} else {
    //  RCLCPP_ERROR(logger, "Execution Failed!!!");
    }
  } else {
    RCLCPP_ERROR(logger, "Planing failed!");
  }

  // Shutdown ROS
  rclcpp::shutdown();
  return 0;
}
