// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fixed_size_msgs:msg/Image720p.idl
// generated code does not contain a copyright notice

#ifndef FIXED_SIZE_MSGS__MSG__IMAGE720P__TRAITS_HPP_
#define FIXED_SIZE_MSGS__MSG__IMAGE720P__TRAITS_HPP_

#include "fixed_size_msgs/msg/image720p__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fixed_size_msgs::msg::Image720p>()
{
  return "fixed_size_msgs::msg::Image720p";
}

template<>
struct has_fixed_size<fixed_size_msgs::msg::Image720p>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fixed_size_msgs::msg::Image720p>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fixed_size_msgs::msg::Image720p>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIXED_SIZE_MSGS__MSG__IMAGE720P__TRAITS_HPP_
