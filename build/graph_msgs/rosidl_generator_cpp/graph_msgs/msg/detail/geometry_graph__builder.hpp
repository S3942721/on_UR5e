// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/geometry_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_GeometryGraph_edges
{
public:
  explicit Init_GeometryGraph_edges(::graph_msgs::msg::GeometryGraph & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::GeometryGraph edges(::graph_msgs::msg::GeometryGraph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::GeometryGraph msg_;
};

class Init_GeometryGraph_nodes
{
public:
  explicit Init_GeometryGraph_nodes(::graph_msgs::msg::GeometryGraph & msg)
  : msg_(msg)
  {}
  Init_GeometryGraph_edges nodes(::graph_msgs::msg::GeometryGraph::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_GeometryGraph_edges(msg_);
  }

private:
  ::graph_msgs::msg::GeometryGraph msg_;
};

class Init_GeometryGraph_header
{
public:
  Init_GeometryGraph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeometryGraph_nodes header(::graph_msgs::msg::GeometryGraph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeometryGraph_nodes(msg_);
  }

private:
  ::graph_msgs::msg::GeometryGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::GeometryGraph>()
{
  return graph_msgs::msg::builder::Init_GeometryGraph_header();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__BUILDER_HPP_
