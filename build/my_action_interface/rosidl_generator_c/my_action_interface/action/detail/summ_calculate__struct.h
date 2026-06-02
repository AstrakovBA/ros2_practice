// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_action_interface:action/SummCalculate.idl
// generated code does not contain a copyright notice

#ifndef MY_ACTION_INTERFACE__ACTION__DETAIL__SUMM_CALCULATE__STRUCT_H_
#define MY_ACTION_INTERFACE__ACTION__DETAIL__SUMM_CALCULATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_Goal
{
  int16_t a;
  int16_t b;
} my_action_interface__action__SummCalculate_Goal;

// Struct for a sequence of my_action_interface__action__SummCalculate_Goal.
typedef struct my_action_interface__action__SummCalculate_Goal__Sequence
{
  my_action_interface__action__SummCalculate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_Result
{
  bool success;
} my_action_interface__action__SummCalculate_Result;

// Struct for a sequence of my_action_interface__action__SummCalculate_Result.
typedef struct my_action_interface__action__SummCalculate_Result__Sequence
{
  my_action_interface__action__SummCalculate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_Feedback
{
  int16_t left_to_result;
} my_action_interface__action__SummCalculate_Feedback;

// Struct for a sequence of my_action_interface__action__SummCalculate_Feedback.
typedef struct my_action_interface__action__SummCalculate_Feedback__Sequence
{
  my_action_interface__action__SummCalculate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_action_interface/action/detail/summ_calculate__struct.h"

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_action_interface__action__SummCalculate_Goal goal;
} my_action_interface__action__SummCalculate_SendGoal_Request;

// Struct for a sequence of my_action_interface__action__SummCalculate_SendGoal_Request.
typedef struct my_action_interface__action__SummCalculate_SendGoal_Request__Sequence
{
  my_action_interface__action__SummCalculate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_action_interface__action__SummCalculate_SendGoal_Response;

// Struct for a sequence of my_action_interface__action__SummCalculate_SendGoal_Response.
typedef struct my_action_interface__action__SummCalculate_SendGoal_Response__Sequence
{
  my_action_interface__action__SummCalculate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_action_interface__action__SummCalculate_GetResult_Request;

// Struct for a sequence of my_action_interface__action__SummCalculate_GetResult_Request.
typedef struct my_action_interface__action__SummCalculate_GetResult_Request__Sequence
{
  my_action_interface__action__SummCalculate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_action_interface/action/detail/summ_calculate__struct.h"

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_GetResult_Response
{
  int8_t status;
  my_action_interface__action__SummCalculate_Result result;
} my_action_interface__action__SummCalculate_GetResult_Response;

// Struct for a sequence of my_action_interface__action__SummCalculate_GetResult_Response.
typedef struct my_action_interface__action__SummCalculate_GetResult_Response__Sequence
{
  my_action_interface__action__SummCalculate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_action_interface/action/detail/summ_calculate__struct.h"

/// Struct defined in action/SummCalculate in the package my_action_interface.
typedef struct my_action_interface__action__SummCalculate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_action_interface__action__SummCalculate_Feedback feedback;
} my_action_interface__action__SummCalculate_FeedbackMessage;

// Struct for a sequence of my_action_interface__action__SummCalculate_FeedbackMessage.
typedef struct my_action_interface__action__SummCalculate_FeedbackMessage__Sequence
{
  my_action_interface__action__SummCalculate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interface__action__SummCalculate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ACTION_INTERFACE__ACTION__DETAIL__SUMM_CALCULATE__STRUCT_H_
