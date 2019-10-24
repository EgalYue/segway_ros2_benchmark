#include "ros2_simple_talker/simple_talker.hpp"


#include <chrono>
#include <memory>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include<iostream>
#include <fstream>
#include <string>

std::string read_datafile(std::string message_filename){

  // data_*byte.txt??std::string bytedata????????? 
  
  std::ifstream ifs(message_filename.c_str());
  if(ifs.fail()) {
	std::cerr << "data_*byte.txt do not exist.\n";
	exit(0);
  }

  std::string bytedata;
  getline(ifs, bytedata);

  return bytedata;
}


using namespace std::chrono_literals;

namespace simple_talker
{

SIMPLE_TALKER::SIMPLE_TALKER(const rclcpp::NodeOptions & options)
: Node("simple_talker", options), count_(0)
{
  // Create a publisher of "std_mgs/String" messages on the "chatter" topic.
  pub_ = create_publisher<std_msgs::msg::String>("chatter", 10);

  // Use a timer to schedule periodic message publishing.
  timer_ = create_wall_timer(0.1s, std::bind(&SIMPLE_TALKER::on_timer, this));
}

void SIMPLE_TALKER::on_timer()
{
  auto msg = std::make_unique<std_msgs::msg::String>();
//  msg->data = ">>>Hello World: " + std::to_string(++count_);


  std::string bytedata = read_datafile("/home/yuehu/Desktop/my_ros2/ros2_simple_talker/src/byte_data/data_1Mbyte.txt");
  msg->data = bytedata;
  RCLCPP_INFO(this->get_logger(), "Publishing:");
  std::flush(std::cout);

  // Put the message into a queue to be processed by the middleware.
  // This call is non-blocking.
  pub_->publish(std::move(msg));
}

}  // namespace composition

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(simple_talker::SIMPLE_TALKER)
