// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from fixed_size_msgs:msg/Image1m.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "fixed_size_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "fixed_size_msgs/msg/image1m__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace fixed_size_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Image1m_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Image1m_type_support_ids_t;

static const _Image1m_type_support_ids_t _Image1m_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _Image1m_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Image1m_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Image1m_type_support_symbol_names_t _Image1m_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fixed_size_msgs, msg, Image1m)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fixed_size_msgs, msg, Image1m)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, fixed_size_msgs, msg, Image1m)),
  }
};

typedef struct _Image1m_type_support_data_t
{
  void * data[3];
} _Image1m_type_support_data_t;

static _Image1m_type_support_data_t _Image1m_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Image1m_message_typesupport_map = {
  3,
  "fixed_size_msgs",
  &_Image1m_message_typesupport_ids.typesupport_identifier[0],
  &_Image1m_message_typesupport_symbol_names.symbol_name[0],
  &_Image1m_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Image1m_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Image1m_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace fixed_size_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_fixed_size_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, fixed_size_msgs, msg, Image1m)() {
  return &::fixed_size_msgs::msg::rosidl_typesupport_c::Image1m_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
