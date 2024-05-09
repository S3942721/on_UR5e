// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msgs/msg/detail/edges__rosidl_typesupport_introspection_c.h"
#include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msgs/msg/detail/edges__functions.h"
#include "graph_msgs/msg/detail/edges__struct.h"


// Include directives for member types
// Member `node_ids`
// Member `weights`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__msg__Edges__init(message_memory);
}

void graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_fini_function(void * message_memory)
{
  graph_msgs__msg__Edges__fini(message_memory);
}

size_t graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__size_function__Edges__node_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_const_function__Edges__node_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_function__Edges__node_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__fetch_function__Edges__node_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_const_function__Edges__node_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__assign_function__Edges__node_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_function__Edges__node_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__resize_function__Edges__node_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__size_function__Edges__weights(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_const_function__Edges__weights(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_function__Edges__weights(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__fetch_function__Edges__weights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_const_function__Edges__weights(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__assign_function__Edges__weights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_function__Edges__weights(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__resize_function__Edges__weights(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_member_array[2] = {
  {
    "node_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edges, node_ids),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__size_function__Edges__node_ids,  // size() function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_const_function__Edges__node_ids,  // get_const(index) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_function__Edges__node_ids,  // get(index) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__fetch_function__Edges__node_ids,  // fetch(index, &value) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__assign_function__Edges__node_ids,  // assign(index, value) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__resize_function__Edges__node_ids  // resize(index) function pointer
  },
  {
    "weights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edges, weights),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__size_function__Edges__weights,  // size() function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_const_function__Edges__weights,  // get_const(index) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__get_function__Edges__weights,  // get(index) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__fetch_function__Edges__weights,  // fetch(index, &value) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__assign_function__Edges__weights,  // assign(index, value) function pointer
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__resize_function__Edges__weights  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_members = {
  "graph_msgs__msg",  // message namespace
  "Edges",  // message name
  2,  // number of fields
  sizeof(graph_msgs__msg__Edges),
  graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_member_array,  // message members
  graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle = {
  0,
  &graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Edges)() {
  if (!graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle.typesupport_identifier) {
    graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_msgs__msg__Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
