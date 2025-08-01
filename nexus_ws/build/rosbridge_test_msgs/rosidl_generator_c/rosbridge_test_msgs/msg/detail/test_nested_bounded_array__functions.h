// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbridge_test_msgs:msg/TestNestedBoundedArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_NESTED_BOUNDED_ARRAY__FUNCTIONS_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_NESTED_BOUNDED_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbridge_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_test_msgs/msg/detail/test_nested_bounded_array__struct.h"

/// Initialize msg/TestNestedBoundedArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__msg__TestNestedBoundedArray
 * )) before or use
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestNestedBoundedArray__init(rosbridge_test_msgs__msg__TestNestedBoundedArray * msg);

/// Finalize msg/TestNestedBoundedArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestNestedBoundedArray__fini(rosbridge_test_msgs__msg__TestNestedBoundedArray * msg);

/// Create msg/TestNestedBoundedArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__msg__TestNestedBoundedArray *
rosbridge_test_msgs__msg__TestNestedBoundedArray__create();

/// Destroy msg/TestNestedBoundedArray message.
/**
 * It calls
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestNestedBoundedArray__destroy(rosbridge_test_msgs__msg__TestNestedBoundedArray * msg);

/// Check for msg/TestNestedBoundedArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestNestedBoundedArray__are_equal(const rosbridge_test_msgs__msg__TestNestedBoundedArray * lhs, const rosbridge_test_msgs__msg__TestNestedBoundedArray * rhs);

/// Copy a msg/TestNestedBoundedArray message.
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
rosbridge_test_msgs__msg__TestNestedBoundedArray__copy(
  const rosbridge_test_msgs__msg__TestNestedBoundedArray * input,
  rosbridge_test_msgs__msg__TestNestedBoundedArray * output);

/// Initialize array of msg/TestNestedBoundedArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__init(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array, size_t size);

/// Finalize array of msg/TestNestedBoundedArray messages.
/**
 * It calls
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__fini(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array);

/// Create array of msg/TestNestedBoundedArray messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence *
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__create(size_t size);

/// Destroy array of msg/TestNestedBoundedArray messages.
/**
 * It calls
 * rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__destroy(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array);

/// Check for msg/TestNestedBoundedArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__are_equal(const rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * lhs, const rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * rhs);

/// Copy an array of msg/TestNestedBoundedArray messages.
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
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__copy(
  const rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * input,
  rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_NESTED_BOUNDED_ARRAY__FUNCTIONS_H_
