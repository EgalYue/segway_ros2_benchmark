// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fixed_size_msgs:msg/Image4k.idl
// generated code does not contain a copyright notice
#include "fixed_size_msgs/msg/image4k__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fixed_size_msgs/msg/image4k__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fixed_size_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fixed_size_msgs
cdr_serialize(
  const fixed_size_msgs::msg::Image4k & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: is_bigendian
  cdr << ros_message.is_bigendian;
  // Member: step
  cdr << ros_message.step;
  // Member: data
  {
    cdr << ros_message.data;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fixed_size_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fixed_size_msgs::msg::Image4k & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: is_bigendian
  cdr >> ros_message.is_bigendian;

  // Member: step
  cdr >> ros_message.step;

  // Member: data
  {
    cdr >> ros_message.data;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fixed_size_msgs
get_serialized_size(
  const fixed_size_msgs::msg::Image4k & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_bigendian
  {
    size_t item_size = sizeof(ros_message.is_bigendian);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step
  {
    size_t item_size = sizeof(ros_message.step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data
  {
    size_t array_size = 24883200;
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fixed_size_msgs
max_serialized_size_Image4k(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_bigendian
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: step
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: data
  {
    size_t array_size = 24883200;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Image4k__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fixed_size_msgs::msg::Image4k *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Image4k__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fixed_size_msgs::msg::Image4k *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Image4k__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fixed_size_msgs::msg::Image4k *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Image4k__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Image4k(full_bounded, 0);
}

static message_type_support_callbacks_t _Image4k__callbacks = {
  "fixed_size_msgs::msg",
  "Image4k",
  _Image4k__cdr_serialize,
  _Image4k__cdr_deserialize,
  _Image4k__get_serialized_size,
  _Image4k__max_serialized_size
};

static rosidl_message_type_support_t _Image4k__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Image4k__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fixed_size_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fixed_size_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fixed_size_msgs::msg::Image4k>()
{
  return &fixed_size_msgs::msg::typesupport_fastrtps_cpp::_Image4k__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fixed_size_msgs, msg, Image4k)() {
  return &fixed_size_msgs::msg::typesupport_fastrtps_cpp::_Image4k__handle;
}

#ifdef __cplusplus
}
#endif
