#include "rclcpp/rclcpp.hpp"

#include <moveit/move_group_interface/move_group_interface.h>
// #include "geometry_msgs/geometry_msgs/msg/pose.hpp"


class MoveToPoseNode : public rclcpp::Node
{
    public:
        MoveToPoseNode() : Node("move_to_pose_node")
        {
            //figure out the std::bind
            subscriber = this->create_subscription<geometry_msgs::msg::Pose>("/goal_pose", 10, std::bind(&MoveToPoseNode::pose_callback));
        }

        geometry_msgs::msg::Pose goal_pose;
    private:

        void pose_callback(geometry_msgs::msg::Pose pose)
        {
            goal_pose = pose;
        }

        rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr subscriber;
};

int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    auto const node = MoveToPoseNode();



    auto mgi = moveit::planning_interface::MoveGroupInterface(node, "ur_manipulator");

    mgi.setPoseTarget(node.goal_pose);

    moveit::planning_interface::MoveGroupInterface::Plan plan;

    bool success = (mgi.plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

      // Execute the plan
    if(success) {
        mgi.execute(plan);

    rclcpp::shutdown();

    return 0;
}
