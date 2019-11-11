// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fixed_size_msgs:msg/Image720p.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fixed_size_msgs/msg/image720p__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fixed_size_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Image720p_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) fixed_size_msgs::msg::Image720p(_init);
}

void Image720p_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fixed_size_msgs::msg::Image720p *>(message_memory);
  typed_message->~Image720p();
}

size_t size_function__Image720p__data(const void * untyped_member)
{
  (void)untyped_member;
  return 2764800;
}

const void * get_const_function__Image720p__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2764800> *>(untyped_member);
  return &member[index];
}

void * get_function__Image720p__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2764800> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Image720p_message_member_array[4] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs::msg::Image720p, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs::msg::Image720p, is_bigendian),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs::msg::Image720p, step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2764800,  // array size
    false,  // is upper bound
    offsetof(fixed_size_msgs::msg::Image720p, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Image720p__data,  // size() function pointer
    get_const_function__Image720p__data,  // get_const(index) function pointer
    get_function__Image720p__data,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Image720p_message_members = {
  "fixed_size_msgs::msg",  // message namespace
  "Image720p",  // message name
  4,  // number of fields
  sizeof(fixed_size_msgs::msg::Image720p),
  Image720p_message_member_array,  // message members
  Image720p_init_function,  // function to initialize message memory (memory has to be allocated)
  Image720p_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Image720p_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Image720p_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fixed_size_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fixed_size_msgs::msg::Image720p>()
{
  return &::fixed_size_msgs::msg::rosidl_typesupport_introspection_cpp::Image720p_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fixed_size_msgs, msg, Image720p)() {
  return &::fixed_size_msgs::msg::rosidl_typesupport_introspection_cpp::Image720p_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
