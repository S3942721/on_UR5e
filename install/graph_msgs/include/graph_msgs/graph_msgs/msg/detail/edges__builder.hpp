// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGES__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/edges__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_Edges_weights
{
public:
  explicit Init_Edges_weights(::graph_msgs::msg::Edges & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::Edges weights(::graph_msgs::msg::Edges::_weights_type arg)
  {
    msg_.weights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::Edges msg_;
};

class Init_Edges_node_ids
{
public:
  Init_Edges_node_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Edges_weights node_ids(::graph_msgs::msg::Edges::_node_ids_type arg)
  {
    msg_.node_ids = std::move(arg);
    return Init_Edges_weights(msg_);
  }

private:
  ::graph_msgs::msg::Edges msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::Edges>()
{
  return graph_msgs::msg::builder::Init_Edges_node_ids();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGES__BUILDER_HPP_
