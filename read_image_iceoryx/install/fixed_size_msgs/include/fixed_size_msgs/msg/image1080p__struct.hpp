// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fixed_size_msgs:msg/Image1080p.idl
// generated code does not contain a copyright notice

#ifndef FIXED_SIZE_MSGS__MSG__IMAGE1080P__STRUCT_HPP_
#define FIXED_SIZE_MSGS__MSG__IMAGE1080P__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fixed_size_msgs__msg__Image1080p __attribute__((deprecated))
#else
# define DEPRECATED__fixed_size_msgs__msg__Image1080p __declspec(deprecated)
#endif

namespace fixed_size_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image1080p_
{
  using Type = Image1080p_<ContainerAllocator>;

  explicit Image1080p_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->is_bigendian = 0;
      this->step = 0ul;
      std::fill<typename std::array<uint8_t, 6220800>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit Image1080p_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->is_bigendian = 0;
      this->step = 0ul;
      std::fill<typename std::array<uint8_t, 6220800>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _is_bigendian_type =
    uint8_t;
  _is_bigendian_type is_bigendian;
  using _step_type =
    uint32_t;
  _step_type step;
  using _data_type =
    std::array<uint8_t, 6220800>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__is_bigendian(
    const uint8_t & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }
  Type & set__step(
    const uint32_t & _arg)
  {
    this->step = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 6220800> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t HEIGHT =
    1080u;
  static constexpr uint32_t WIDTH =
    1920u;
  static constexpr uint32_t CHANNELS =
    3u;

  // pointer types
  using RawPtr =
    fixed_size_msgs::msg::Image1080p_<ContainerAllocator> *;
  using ConstRawPtr =
    const fixed_size_msgs::msg::Image1080p_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fixed_size_msgs::msg::Image1080p_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fixed_size_msgs::msg::Image1080p_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fixed_size_msgs__msg__Image1080p
    std::shared_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fixed_size_msgs__msg__Image1080p
    std::shared_ptr<fixed_size_msgs::msg::Image1080p_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image1080p_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image1080p_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image1080p_

// alias to use template instance with default allocator
using Image1080p =
  fixed_size_msgs::msg::Image1080p_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t Image1080p_<ContainerAllocator>::HEIGHT;
template<typename ContainerAllocator>
constexpr uint32_t Image1080p_<ContainerAllocator>::WIDTH;
template<typename ContainerAllocator>
constexpr uint32_t Image1080p_<ContainerAllocator>::CHANNELS;

}  // namespace msg

}  // namespace fixed_size_msgs

#endif  // FIXED_SIZE_MSGS__MSG__IMAGE1080P__STRUCT_HPP_
