// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from fixed_size_msgs:msg/ImageVGA.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "fixed_size_msgs/msg/image_vga__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace fixed_size_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _ImageVGA_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ImageVGA_type_support_ids_t;

static const _ImageVGA_type_support_ids_t _ImageVGA_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _ImageVGA_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ImageVGA_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImageVGA_type_support_symbol_names_t _ImageVGA_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fixed_size_msgs, msg, ImageVGA)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fixed_size_msgs, msg, ImageVGA)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, fixed_size_msgs, msg, ImageVGA)),
  }
};

typedef struct _ImageVGA_type_support_data_t
{
  void * data[3];
} _ImageVGA_type_support_data_t;

static _ImageVGA_type_support_data_t _ImageVGA_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImageVGA_message_typesupport_map = {
  3,
  "fixed_size_msgs",
  &_ImageVGA_message_typesupport_ids.typesupport_identifier[0],
  &_ImageVGA_message_typesupport_symbol_names.symbol_name[0],
  &_ImageVGA_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImageVGA_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImageVGA_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace fixed_size_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fixed_size_msgs::msg::ImageVGA>()
{
  return &::fixed_size_msgs::msg::rosidl_typesupport_cpp::ImageVGA_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, fixed_size_msgs, msg, ImageVGA)() {
  return get_message_type_support_handle<fixed_size_msgs::msg::ImageVGA>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
