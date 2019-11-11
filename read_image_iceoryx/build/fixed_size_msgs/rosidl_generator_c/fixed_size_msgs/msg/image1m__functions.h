// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fixed_size_msgs:msg/Image1m.idl
// generated code does not contain a copyright notice

#ifndef FIXED_SIZE_MSGS__MSG__IMAGE1M__FUNCTIONS_H_
#define FIXED_SIZE_MSGS__MSG__IMAGE1M__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "fixed_size_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fixed_size_msgs/msg/image1m__struct.h"

/// Initialize msg/Image1m message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fixed_size_msgs__msg__Image1m
 * )) before or use
 * fixed_size_msgs__msg__Image1m__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
bool
fixed_size_msgs__msg__Image1m__init(fixed_size_msgs__msg__Image1m * msg);

/// Finalize msg/Image1m message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
void
fixed_size_msgs__msg__Image1m__fini(fixed_size_msgs__msg__Image1m * msg);

/// Create msg/Image1m message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fixed_size_msgs__msg__Image1m__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
fixed_size_msgs__msg__Image1m *
fixed_size_msgs__msg__Image1m__create();

/// Destroy msg/Image1m message.
/**
 * It calls
 * fixed_size_msgs__msg__Image1m__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
void
fixed_size_msgs__msg__Image1m__destroy(fixed_size_msgs__msg__Image1m * msg);


/// Initialize array of msg/Image1m messages.
/**
 * It allocates the memory for the number of elements and calls
 * fixed_size_msgs__msg__Image1m__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
bool
fixed_size_msgs__msg__Image1m__Sequence__init(fixed_size_msgs__msg__Image1m__Sequence * array, size_t size);

/// Finalize array of msg/Image1m messages.
/**
 * It calls
 * fixed_size_msgs__msg__Image1m__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
void
fixed_size_msgs__msg__Image1m__Sequence__fini(fixed_size_msgs__msg__Image1m__Sequence * array);

/// Create array of msg/Image1m messages.
/**
 * It allocates the memory for the array and calls
 * fixed_size_msgs__msg__Image1m__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
fixed_size_msgs__msg__Image1m__Sequence *
fixed_size_msgs__msg__Image1m__Sequence__create(size_t size);

/// Destroy array of msg/Image1m messages.
/**
 * It calls
 * fixed_size_msgs__msg__Image1m__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fixed_size_msgs
void
fixed_size_msgs__msg__Image1m__Sequence__destroy(fixed_size_msgs__msg__Image1m__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FIXED_SIZE_MSGS__MSG__IMAGE1M__FUNCTIONS_H_
