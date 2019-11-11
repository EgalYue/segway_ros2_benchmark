// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fixed_size_msgs:msg/Image4k.idl
// generated code does not contain a copyright notice

#ifndef FIXED_SIZE_MSGS__MSG__IMAGE4K__STRUCT_H_
#define FIXED_SIZE_MSGS__MSG__IMAGE4K__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEIGHT'.
enum
{
  fixed_size_msgs__msg__Image4k__HEIGHT = 2160ul
};

/// Constant 'WIDTH'.
enum
{
  fixed_size_msgs__msg__Image4k__WIDTH = 3840ul
};

/// Constant 'CHANNELS'.
enum
{
  fixed_size_msgs__msg__Image4k__CHANNELS = 3ul
};

// Struct defined in msg/Image4k in the package fixed_size_msgs.
typedef struct fixed_size_msgs__msg__Image4k
{
  int64_t timestamp;
  uint8_t is_bigendian;
  uint32_t step;
  uint8_t data[24883200];
} fixed_size_msgs__msg__Image4k;

// Struct for a sequence of fixed_size_msgs__msg__Image4k.
typedef struct fixed_size_msgs__msg__Image4k__Sequence
{
  fixed_size_msgs__msg__Image4k * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fixed_size_msgs__msg__Image4k__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIXED_SIZE_MSGS__MSG__IMAGE4K__STRUCT_H_
