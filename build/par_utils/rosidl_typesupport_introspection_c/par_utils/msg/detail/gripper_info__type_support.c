// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from par_utils:msg/GripperInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "par_utils/msg/detail/gripper_info__rosidl_typesupport_introspection_c.h"
#include "par_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "par_utils/msg/detail/gripper_info__functions.h"
#include "par_utils/msg/detail/gripper_info__struct.h"


// Include directives for member types
// Member `gripper_type`
// Member `ip`
// Member `port`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  par_utils__msg__GripperInfo__init(message_memory);
}

void par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_fini_function(void * message_memory)
{
  par_utils__msg__GripperInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_member_array[5] = {
  {
    "gripper_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(par_utils__msg__GripperInfo, gripper_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(par_utils__msg__GripperInfo, ip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(par_utils__msg__GripperInfo, port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(par_utils__msg__GripperInfo, max_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(par_utils__msg__GripperInfo, max_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_members = {
  "par_utils__msg",  // message namespace
  "GripperInfo",  // message name
  5,  // number of fields
  sizeof(par_utils__msg__GripperInfo),
  par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_member_array,  // message members
  par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_type_support_handle = {
  0,
  &par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_par_utils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, par_utils, msg, GripperInfo)() {
  if (!par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_type_support_handle.typesupport_identifier) {
    par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &par_utils__msg__GripperInfo__rosidl_typesupport_introspection_c__GripperInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
