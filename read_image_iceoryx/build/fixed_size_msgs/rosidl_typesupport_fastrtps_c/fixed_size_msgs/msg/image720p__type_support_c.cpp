// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fixed_size_msgs:msg/Image720p.idl
// generated code does not contain a copyright notice
#include "fixed_size_msgs/msg/image720p__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fixed_size_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fixed_size_msgs/msg/image720p__struct.h"
#include "fixed_size_msgs/msg/image720p__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Image720p__ros_msg_type = fixed_size_msgs__msg__Image720p;

static bool _Image720p__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Image720p__ros_msg_type * ros_message = static_cast<const _Image720p__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: is_bigendian
  {
    cdr << ros_message->is_bigendian;
  }

  // Field name: step
  {
    cdr << ros_message->step;
  }

  // Field name: data
  {
    size_t size = 2764800;
    auto array_ptr = ros_message->data;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Image720p__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Image720p__ros_msg_type * ros_message = static_cast<_Image720p__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: is_bigendian
  {
    cdr >> ros_message->is_bigendian;
  }

  // Field name: step
  {
    cdr >> ros_message->step;
  }

  // Field name: data
  {
    size_t size = 2764800;
    auto array_ptr = ros_message->data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fixed_size_msgs
size_t get_serialized_size_fixed_size_msgs__msg__Image720p(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Image720p__ros_msg_type * ros_message = static_cast<const _Image720p__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_bigendian
  {
    size_t item_size = sizeof(ros_message->is_bigendian);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step
  {
    size_t item_size = sizeof(ros_message->step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t array_size = 2764800;
    auto array_ptr = ros_message->data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Image720p__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fixed_size_msgs__msg__Image720p(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fixed_size_msgs
size_t max_serialized_size_fixed_size_msgs__msg__Image720p(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_bigendian
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: step
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: data
  {
    size_t array_size = 2764800;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Image720p__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fixed_size_msgs__msg__Image720p(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Image720p = {
  "fixed_size_msgs::msg",
  "Image720p",
  _Image720p__cdr_serialize,
  _Image720p__cdr_deserialize,
  _Image720p__get_serialized_size,
  _Image720p__max_serialized_size
};

static rosidl_message_type_support_t _Image720p__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Image720p,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fixed_size_msgs, msg, Image720p)() {
  return &_Image720p__type_support;
}

#if defined(__cplusplus)
}
#endif
