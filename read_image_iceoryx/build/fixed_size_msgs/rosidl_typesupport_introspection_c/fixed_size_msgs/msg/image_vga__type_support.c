// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fixed_size_msgs:msg/ImageVGA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fixed_size_msgs/msg/image_vga__rosidl_typesupport_introspection_c.h"
#include "fixed_size_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fixed_size_msgs/msg/image_vga__functions.h"
#include "fixed_size_msgs/msg/image_vga__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fixed_size_msgs__msg__ImageVGA__init(message_memory);
}

void ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_fini_function(void * message_memory)
{
  fixed_size_msgs__msg__ImageVGA__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs__msg__ImageVGA, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs__msg__ImageVGA, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs__msg__ImageVGA, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    921600,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs__msg__ImageVGA, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_members = {
  "fixed_size_msgs__msg",  // message namespace
  "ImageVGA",  // message name
  4,  // number of fields
  sizeof(fixed_size_msgs__msg__ImageVGA),
  ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_member_array,  // message members
  ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_type_support_handle = {
  0,
  &ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fixed_size_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fixed_size_msgs, msg, ImageVGA)() {
  if (!ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_type_support_handle.typesupport_identifier) {
    ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageVGA__rosidl_typesupport_introspection_c__ImageVGA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
