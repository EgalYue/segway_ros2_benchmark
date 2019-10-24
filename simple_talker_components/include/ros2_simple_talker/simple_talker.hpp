#ifndef COMPOSITION__SIMPLE_TALKER_COMPONENT_HPP_
#define COMPOSITION__SIMPLE_TALKER_COMPONENT_HPP_

#include "ros2_simple_talker/visibility_control.h"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

namespace simple_talker
{

class SIMPLE_TALKER : public rclcpp::Node
{
public:
  COMPOSITION_PUBLIC
  explicit SIMPLE_TALKER(const rclcpp::NodeOptions & options);

protected:
  void on_timer();

private:
  size_t count_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

}  // namespace composition

#endif  // COMPOSITION__SIMPLE_TALKER_COMPONENT_HPP_

