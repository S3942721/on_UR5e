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
  auto visual_tools = std::make_shared<moveit_visual_tools::MoveItVisualTools>(node, "base", "/visualization_marker_array");
  visual_tools->deleteAllMarkers();
  visual_tools->loadRemoteControl();

  // Query the current position and orientation of the robot
  //auto current_pose = move_group_interface.getCurrentPose();

  // Define the offsets in mm
  //double offset_x = 0.0;  // 100 mm
  //double offset_y = 0.0;  // 0 mm
  //double offset_z = 0.6;  // 0 mm

  // Set a target Pose
  //auto target_pose = current_pose.pose;
  //target_pose.position.x += offset_x;
  //target_pose.position.y += offset_y;
  //target_pose.position.z = offset_z;

  // Set a target Pose
  auto const target_pose = []{
    geometry_msgs::msg::Pose msg;
    msg.orientation.x = 0.705;
    msg.orientation.y = 0.0791;
    msg.orientation.z = -0.700;
    msg.orientation.w = -0.0786;
    msg.position.x = -0.241;
    msg.position.y = -0.0079;
    msg.position.z = 0.904;
    return msg;
  }();

  // Keep the current orientation
  //target_pose.orientation = current_pose.pose.orientation;

  move_group_interface.setPoseTarget(target_pose);

  // Create a plan to that target pose
  auto const [success, plan] = [&move_group_interface]{
    moveit::planning_interface::MoveGroupInterface::Plan msg;
    auto const ok = static_cast<bool>(move_group_interface.plan(msg));
    return std::make_pair(ok, msg);
  }();

  std::string endEffectorLink = move_group_interface.getEndEffectorLink();
  RCLCPP_INFO(logger, "End Effector Link: %s", endEffectorLink.c_str());
  
  std::string endEffector = move_group_interface.getEndEffector();
  RCLCPP_INFO(logger, "End Effector: %s", endEffector.c_str());

  std::string planning_frame = move_group_interface.getPlanningFrame();
  RCLCPP_INFO(logger, "Planning frame: %s", planning_frame.c_str());
  
  // Visualize the plan in Rviz
  visual_tools->publishTrajectoryLine(plan.trajectory_, move_group_interface.getRobotModel()->getJointModelGroup(move_group_interface.getName()));
  visual_tools->trigger();

  // Execute the plan
  if(success) {
    if (move_group_interface.execute(plan))
    {
      RCLCPP_INFO(logger, "Execution Succeeded!!!");
    } else {
      RCLCPP_ERROR(logger, "Execution Failed!!!");
    }
  } else {
    RCLCPP_ERROR(logger, "Planing failed!");
  }

  // Shutdown ROS
  rclcpp::shutdown();
  return 0;
}
