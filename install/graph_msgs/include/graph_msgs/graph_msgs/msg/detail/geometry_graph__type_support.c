// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msgs/msg/detail/geometry_graph__rosidl_typesupport_introspection_c.h"
#include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msgs/msg/detail/geometry_graph__functions.h"
#include "graph_msgs/msg/detail/geometry_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "geometry_msgs/msg/point.h"
// Member `nodes`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "graph_msgs/msg/edges.h"
// Member `edges`
#include "graph_msgs/msg/detail/edges__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__msg__GeometryGraph__init(message_memory);
}

void graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_fini_function(void * message_memory)
{
  graph_msgs__msg__GeometryGraph__fini(message_memory);
}

size_t graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__size_function__GeometryGraph__nodes(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__GeometryGraph__nodes(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_function__GeometryGraph__nodes(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__fetch_function__GeometryGraph__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__GeometryGraph__nodes(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__assign_function__GeometryGraph__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_function__GeometryGraph__nodes(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__resize_function__GeometryGraph__nodes(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__size_function__GeometryGraph__edges(
  const void * untyped_member)
{
  const graph_msgs__msg__Edges__Sequence * member =
    (const graph_msgs__msg__Edges__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__GeometryGraph__edges(
  const void * untyped_member, size_t index)
{
  const graph_msgs__msg__Edges__Sequence * member =
    (const graph_msgs__msg__Edges__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_function__GeometryGraph__edges(
  void * untyped_member, size_t index)
{
  graph_msgs__msg__Edges__Sequence * member =
    (graph_msgs__msg__Edges__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__fetch_function__GeometryGraph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graph_msgs__msg__Edges * item =
    ((const graph_msgs__msg__Edges *)
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__GeometryGraph__edges(untyped_member, index));
  graph_msgs__msg__Edges * value =
    (graph_msgs__msg__Edges *)(untyped_value);
  *value = *item;
}

void graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__assign_function__GeometryGraph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graph_msgs__msg__Edges * item =
    ((graph_msgs__msg__Edges *)
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_function__GeometryGraph__edges(untyped_member, index));
  const graph_msgs__msg__Edges * value =
    (const graph_msgs__msg__Edges *)(untyped_value);
  *item = *value;
}

bool graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__resize_function__GeometryGraph__edges(
  void * untyped_member, size_t size)
{
  graph_msgs__msg__Edges__Sequence * member =
    (graph_msgs__msg__Edges__Sequence *)(untyped_member);
  graph_msgs__msg__Edges__Sequence__fini(member);
  return graph_msgs__msg__Edges__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__GeometryGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__GeometryGraph, nodes),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__size_function__GeometryGraph__nodes,  // size() function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__GeometryGraph__nodes,  // get_const(index) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_function__GeometryGraph__nodes,  // get(index) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__fetch_function__GeometryGraph__nodes,  // fetch(index, &value) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__assign_function__GeometryGraph__nodes,  // assign(index, value) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__resize_function__GeometryGraph__nodes  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__GeometryGraph, edges),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__size_function__GeometryGraph__edges,  // size() function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__GeometryGraph__edges,  // get_const(index) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__get_function__GeometryGraph__edges,  // get(index) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__fetch_function__GeometryGraph__edges,  // fetch(index, &value) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__assign_function__GeometryGraph__edges,  // assign(index, value) function pointer
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__resize_function__GeometryGraph__edges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_members = {
  "graph_msgs__msg",  // message namespace
  "GeometryGraph",  // message name
  3,  // number of fields
  sizeof(graph_msgs__msg__GeometryGraph),
  graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array,  // message members
  graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle = {
  0,
  &graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, GeometryGraph)() {
  graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Edges)();
  if (!graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle.typesupport_identifier) {
    graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_msgs__msg__GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
