// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGES__STRUCT_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_msgs__msg__Edges __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__msg__Edges __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Edges_
{
  using Type = Edges_<ContainerAllocator>;

  explicit Edges_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Edges_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _node_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _node_ids_type node_ids;
  using _weights_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _weights_type weights;

  // setters for named parameter idiom
  Type & set__node_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->node_ids = _arg;
    return *this;
  }
  Type & set__weights(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->weights = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msgs::msg::Edges_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::msg::Edges_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::msg::Edges_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::msg::Edges_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Edges_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Edges_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Edges_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Edges_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::msg::Edges_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::msg::Edges_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__msg__Edges
    std::shared_ptr<graph_msgs::msg::Edges_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__msg__Edges
    std::shared_ptr<graph_msgs::msg::Edges_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Edges_ & other) const
  {
    if (this->node_ids != other.node_ids) {
      return false;
    }
    if (this->weights != other.weights) {
      return false;
    }
    return true;
  }
  bool operator!=(const Edges_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Edges_

// alias to use template instance with default allocator
using Edges =
  graph_msgs::msg::Edges_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGES__STRUCT_HPP_
