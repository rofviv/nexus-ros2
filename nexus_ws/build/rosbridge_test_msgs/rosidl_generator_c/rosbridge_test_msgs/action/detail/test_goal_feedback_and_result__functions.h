// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbridge_test_msgs:action/TestGoalFeedbackAndResult.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_GOAL_FEEDBACK_AND_RESULT__FUNCTIONS_H_
#define ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_GOAL_FEEDBACK_AND_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbridge_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_test_msgs/action/detail/test_goal_feedback_and_result__struct.h"

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * output);

/// Initialize action/TestGoalFeedbackAndResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage
 * )) before or use
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg);

/// Finalize action/TestGoalFeedbackAndResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg);

/// Create action/TestGoalFeedbackAndResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__create();

/// Destroy action/TestGoalFeedbackAndResult message.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg);

/// Check for action/TestGoalFeedbackAndResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * rhs);

/// Copy a action/TestGoalFeedbackAndResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * output);

/// Initialize array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array);

/// Create array of action/TestGoalFeedbackAndResult messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TestGoalFeedbackAndResult messages.
/**
 * It calls
 * rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array);

/// Check for action/TestGoalFeedbackAndResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__are_equal(const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * lhs, const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TestGoalFeedbackAndResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__copy(
  const rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * input,
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_GOAL_FEEDBACK_AND_RESULT__FUNCTIONS_H_
