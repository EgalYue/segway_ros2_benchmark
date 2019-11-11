// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef FIXED_SIZE_MSGS__MSG__IMAGE1M__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define FIXED_SIZE_MSGS__MSG__IMAGE1M__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "fixed_size_msgs/msg/image1m__struct.hpp"
#include "fixed_size_msgs/msg/dds_opensplice/ccpp_Image1m_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fixed_size_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace fixed_size_msgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
extern void register_type__Image1m(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
extern void convert_ros_message_to_dds(
  const fixed_size_msgs::msg::Image1m & ros_message,
  fixed_size_msgs::msg::dds_::Image1m_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
extern void publish__Image1m(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
extern void convert_dds_message_to_ros(
  const fixed_size_msgs::msg::dds_::Image1m_ & dds_message,
  fixed_size_msgs::msg::Image1m & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
extern bool take__Image1m(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_fixed_size_msgs
const char *
serialize__Image1m(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_fixed_size_msgs
const char *
deserialize__Image1m(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace fixed_size_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  fixed_size_msgs, msg,
  Image1m)();

#ifdef __cplusplus
}
#endif
#endif  // FIXED_SIZE_MSGS__MSG__IMAGE1M__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
