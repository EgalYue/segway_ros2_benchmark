#include<iostream>
#include<rclcpp/rclcpp.hpp>
#include "std_msgs/msg/string.hpp"
#include <fstream>
#include <string>

std::string read_datafile(std::string message_filename){  
  std::ifstream ifs(message_filename.c_str());
  if(ifs.fail()) {
	std::cerr << "data_*byte.txt do not exist.\n";
	exit(0);
  }

  std::string bytedata;
  getline(ifs, bytedata);

  return bytedata;
}

int main(int argc, char **argv){
    rclcpp::init(argc,argv);
    auto node = rclcpp::Node::make_shared("talker");
    auto publisher = node->create_publisher<std_msgs::msg::String>("topic", 10);
    rclcpp::WallRate loop_rate(10);

    std::string bytedata = read_datafile("/home/yuehu/Desktop/segway_ros2_benchmark/data_factory/byte_data/data_256Kbyte.txt");    

    while(rclcpp::ok()){
        std_msgs::msg::String message;
        message.data = bytedata;
        //RCLCPP_INFO(node->get_logger(), "Publishing: '%s'", message.data.c_str());
        RCLCPP_INFO(node->get_logger(), "Publishing: ");
        publisher->publish(message);
        rclcpp::spin_some(node);
        loop_rate.sleep();    
}
    return 0;
}
