// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGES__TRAITS_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graph_msgs/msg/detail/edges__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace graph_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Edges & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_ids
  {
    if (msg.node_ids.size() == 0) {
      out << "node_ids: []";
    } else {
      out << "node_ids: [";
      size_t pending_items = msg.node_ids.size();
      for (auto item : msg.node_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: weights
  {
    if (msg.weights.size() == 0) {
      out << "weights: []";
    } else {
      out << "weights: [";
      size_t pending_items = msg.weights.size();
      for (auto item : msg.weights) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Edges & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_ids.size() == 0) {
      out << "node_ids: []\n";
    } else {
      out << "node_ids:\n";
      for (auto item : msg.node_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: weights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weights.size() == 0) {
      out << "weights: []\n";
    } else {
      out << "weights:\n";
      for (auto item : msg.weights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Edges & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace graph_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graph_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graph_msgs::msg::Edges & msg,
  std::ostream & out, size_t indentation = 0)
{
  graph_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graph_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graph_msgs::msg::Edges & msg)
{
  return graph_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graph_msgs::msg::Edges>()
{
  return "graph_msgs::msg::Edges";
}

template<>
inline const char * name<graph_msgs::msg::Edges>()
{
  return "graph_msgs/msg/Edges";
}

template<>
struct has_fixed_size<graph_msgs::msg::Edges>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::msg::Edges>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::msg::Edges>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGES__TRAITS_HPP_
