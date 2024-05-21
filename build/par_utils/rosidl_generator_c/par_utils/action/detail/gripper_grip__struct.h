// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from par_utils:action/GripperGrip.idl
// generated code does not contain a copyright notice

#ifndef PAR_UTILS__ACTION__DETAIL__GRIPPER_GRIP__STRUCT_H_
#define PAR_UTILS__ACTION__DETAIL__GRIPPER_GRIP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_Goal
{
  float target_width;
  float target_force;
} par_utils__action__GripperGrip_Goal;

// Struct for a sequence of par_utils__action__GripperGrip_Goal.
typedef struct par_utils__action__GripperGrip_Goal__Sequence
{
  par_utils__action__GripperGrip_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_Result
{
  float final_width;
} par_utils__action__GripperGrip_Result;

// Struct for a sequence of par_utils__action__GripperGrip_Result.
typedef struct par_utils__action__GripperGrip_Result__Sequence
{
  par_utils__action__GripperGrip_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_Feedback
{
  float current_width;
} par_utils__action__GripperGrip_Feedback;

// Struct for a sequence of par_utils__action__GripperGrip_Feedback.
typedef struct par_utils__action__GripperGrip_Feedback__Sequence
{
  par_utils__action__GripperGrip_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "par_utils/action/detail/gripper_grip__struct.h"

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  par_utils__action__GripperGrip_Goal goal;
} par_utils__action__GripperGrip_SendGoal_Request;

// Struct for a sequence of par_utils__action__GripperGrip_SendGoal_Request.
typedef struct par_utils__action__GripperGrip_SendGoal_Request__Sequence
{
  par_utils__action__GripperGrip_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} par_utils__action__GripperGrip_SendGoal_Response;

// Struct for a sequence of par_utils__action__GripperGrip_SendGoal_Response.
typedef struct par_utils__action__GripperGrip_SendGoal_Response__Sequence
{
  par_utils__action__GripperGrip_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} par_utils__action__GripperGrip_GetResult_Request;

// Struct for a sequence of par_utils__action__GripperGrip_GetResult_Request.
typedef struct par_utils__action__GripperGrip_GetResult_Request__Sequence
{
  par_utils__action__GripperGrip_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "par_utils/action/detail/gripper_grip__struct.h"

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_GetResult_Response
{
  int8_t status;
  par_utils__action__GripperGrip_Result result;
} par_utils__action__GripperGrip_GetResult_Response;

// Struct for a sequence of par_utils__action__GripperGrip_GetResult_Response.
typedef struct par_utils__action__GripperGrip_GetResult_Response__Sequence
{
  par_utils__action__GripperGrip_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "par_utils/action/detail/gripper_grip__struct.h"

/// Struct defined in action/GripperGrip in the package par_utils.
typedef struct par_utils__action__GripperGrip_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  par_utils__action__GripperGrip_Feedback feedback;
} par_utils__action__GripperGrip_FeedbackMessage;

// Struct for a sequence of par_utils__action__GripperGrip_FeedbackMessage.
typedef struct par_utils__action__GripperGrip_FeedbackMessage__Sequence
{
  par_utils__action__GripperGrip_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} par_utils__action__GripperGrip_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAR_UTILS__ACTION__DETAIL__GRIPPER_GRIP__STRUCT_H_
