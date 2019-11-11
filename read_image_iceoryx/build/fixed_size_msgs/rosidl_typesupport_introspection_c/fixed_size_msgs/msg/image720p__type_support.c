// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fixed_size_msgs:msg/Image720p.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fixed_size_msgs/msg/image720p__rosidl_typesupport_introspection_c.h"
#include "fixed_size_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fixed_size_msgs/msg/image720p__functions.h"
#include "fixed_size_msgs/msg/image720p__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Image720p__rosidl_typesupport_introspection_c__Image720p_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fixed_size_msgs__msg__Image720p__init(message_memory);
}

void Image720p__rosidl_typesupport_introspection_c__Image720p_fini_function(void * message_memory)
{
  fixed_size_msgs__msg__Image720p__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Image720p__rosidl_typesupport_introspection_c__Image720p_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs__msg__Image720p, timestamp),  // bytes offset in struct
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
    offsetof(fixed_size_msgs__msg__Image720p, is_bigendian),  // bytes offset in struct
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
    offsetof(fixed_size_msgs__msg__Image720p, step),  // bytes offset in struct
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
    2764800,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs__msg__Image720p, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Image720p__rosidl_typesupport_introspection_c__Image720p_message_members = {
  "fixed_size_msgs__msg",  // message namespace
  "Image720p",  // message name
  4,  // number of fields
  sizeof(fixed_size_msgs__msg__Image720p),
  Image720p__rosidl_typesupport_introspection_c__Image720p_message_member_array,  // message members
  Image720p__rosidl_typesupport_introspection_c__Image720p_init_function,  // function to initialize message memory (memory has to be allocated)
  Image720p__rosidl_typesupport_introspection_c__Image720p_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Image720p__rosidl_typesupport_introspection_c__Image720p_message_type_support_handle = {
  0,
  &Image720p__rosidl_typesupport_introspection_c__Image720p_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fixed_size_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fixed_size_msgs, msg, Image720p)() {
  if (!Image720p__rosidl_typesupport_introspection_c__Image720p_message_type_support_handle.typesupport_identifier) {
    Image720p__rosidl_typesupport_introspection_c__Image720p_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Image720p__rosidl_typesupport_introspection_c__Image720p_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
