// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <cinttypes>
#include <cstdio>
#include <memory>
#include <string>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

#include <fstream>
#include "std_msgs/msg/string.hpp"
#include <ctime>
#include <iostream>

using namespace std::chrono_literals;

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


// Node that produces messages.
struct Producer : public rclcpp::Node
{
  Producer(const std::string & name, const std::string & output, const std::string & bytedata)//const std::string & bytedata
  : Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
  {
    // Create a publisher on the output topic.
    pub_ = this->create_publisher<std_msgs::msg::String>(output, 10);
    std::weak_ptr<std::remove_pointer<decltype(pub_.get())>::type> captured_pub = pub_;

    // Create a timer which publishes on the output topic at ~1Hz.
    auto callback = [captured_pub,bytedata]() -> void {
        auto pub_ptr = captured_pub.lock();
        if (!pub_ptr) {
          return;
        }

        std_msgs::msg::String::UniquePtr msg_str(new std_msgs::msg::String());
        
        //clock_t startTime,endTime;
        //startTime = clock();
        //std::string bytedata = read_datafile("/home/nv09/Desktop/ros2_simple/src/simple_test_talker/src/byte_data/data_1Mbyte.txt");
        //endTime = clock();
        //std::cout << "The run time is: " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << std::endl;

        msg_str->data = bytedata;
        printf(
          "Published message with value: , and address: 0x%" PRIXPTR "\n",
          reinterpret_cast<std::uintptr_t>(msg_str.get())); // msg_str->data.c_str()
        pub_ptr->publish(std::move(msg_str));
      };
    timer_ = this->create_wall_timer(0.1s, callback);
  }

  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

// Node that consumes messages.
struct Consumer : public rclcpp::Node
{
  Consumer(const std::string & name, const std::string & input)
  : Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
  {
    // Create a subscription on the input topic which prints on receipt of new messages.
    sub_ = this->create_subscription<std_msgs::msg::String>(
      input,
      10,
      [](std_msgs::msg::String::UniquePtr msg) {
        printf(
          " Received message with value:, and address: 0x%" PRIXPTR "\n",
          reinterpret_cast<std::uintptr_t>(msg.get()));
      });
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
};


// Node that consumes messages.
struct Consumer2 : public rclcpp::Node
{
  Consumer2(const std::string & name, const std::string & input)
  : Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
  {
    // Create a subscription on the input topic which prints on receipt of new messages.
    sub_ = this->create_subscription<std_msgs::msg::String>(
      input,
      10,
      [](std_msgs::msg::String::UniquePtr msg) {
        printf(
          " 2 Received message with value:, and address: 0x%" PRIXPTR "\n",
          reinterpret_cast<std::uintptr_t>(msg.get()));
      });
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
};

// Node that consumes messages.
struct Consumer3 : public rclcpp::Node
{
  Consumer3(const std::string & name, const std::string & input)
  : Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
  {
    // Create a subscription on the input topic which prints on receipt of new messages.
    sub_ = this->create_subscription<std_msgs::msg::String>(
      input,
      10,
      [](std_msgs::msg::String::UniquePtr msg) {
        printf(
          " 3 Received message with value:, and address: 0x%" PRIXPTR "\n",
          reinterpret_cast<std::uintptr_t>(msg.get()));
      });
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_;
};

int main(int argc, char * argv[])
{
  setvbuf(stdout, NULL, _IONBF, BUFSIZ);
  rclcpp::init(argc, argv);
  rclcpp::executors::SingleThreadedExecutor executor;


  std::string bytedata = read_datafile("/home/nv09/Desktop/ros2_intra/intra_process_demo/src/two_node_pipeline/byte_data/data_1Mbyte.txt");
    
  auto producer = std::make_shared<Producer>("producer", "test_str", bytedata);
  //auto producer = std::make_shared<Producer>("producer", "test_str");
  auto consumer = std::make_shared<Consumer>("consumer", "test_str");
  auto consumer2 = std::make_shared<Consumer2>("consumer2", "test_str");
  auto consumer3 = std::make_shared<Consumer3>("consumer3", "test_str");

  executor.add_node(producer);
  executor.add_node(consumer);
  executor.add_node(consumer2);
  executor.add_node(consumer3);
  executor.spin();

  rclcpp::shutdown();

  return 0;
}
