// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from par_utils:msg/GripperInfo.idl
// generated code does not contain a copyright notice

#ifndef PAR_UTILS__MSG__DETAIL__GRIPPER_INFO__STRUCT_H_
#define PAR_UTILS__MSG__DETAIL__GRIPPER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gripper_type'
// Member 'ip'
// Member 'port'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GripperInfo in the package par_utils.
/**
  * GripperInfo.msg
  * Contains data about the gripper detected by the system
 */
typedef struct par_utils__msg__GripperInfo
{
  /// The type of gripper, will probably be RG2 or RG6
  rosidl_runtime_c__String gripper_type;
  /// The ip address of the gripper
  rosidl_runtime_c__String ip;
  /// The port of the gripper
  rosidl_runtime_c__String port;
  /// The maximum width the gripper can open in metres
  float max_width;
  /// The maximum force the gripper can exert, in newtons
  float max_force;
} par_utils__msg__GripperInfo;

// Struct for a sequence of par_utils__msg__GripperInfo.
typedef struct par_utils__msg__GripperInfo__Sequence
{
  par_utils__msg__GripperInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__msg__GripperInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAR_UTILS__MSG__DETAIL__GRIPPER_INFO__STRUCT_H_
