// Copyright (c) 2019 by Robert Bosch GmbH. All rights reserved.
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

#ifndef IMAGE_PUBLISHER_HPP_
#define IMAGE_PUBLISHER_HPP_

#include <inttypes.h>
#include <memory>
#include <string>
#include <utility>

#include "rclcpp/rclcpp.hpp"

template<class MsgT, size_t width = MsgT::WIDTH, size_t height = MsgT::HEIGHT>
class ImagePublisher
{
public:
  ImagePublisher(std::shared_ptr<rclcpp::Node> node, std::string topic)
  : pub_(node->create_publisher<MsgT>(topic, rclcpp::SensorDataQoS())),
    logger_(node->get_logger())
  {}

  void run(double frequency)
  {
    static size_t count = 0;

    rclcpp::WallRate loop_rate(frequency);

    // read image from local
    cv::Mat frame = cv::imread("/home/yuehu/Desktop/segway_ros2_benchmark/data_factory/image_data/SampleJPGImage_1mbmb.jpg", CV_LOAD_IMAGE_COLOR);

    while (rclcpp::ok()) {
//      auto frame = burger_cap_.render_burger(width, height); // TODO
      auto frame_size = static_cast<size_t>(frame.step[0] * frame.rows);

      auto image_msg = pub_->borrow_loaned_message();
      auto msg_size = image_msg.get().data.size();
      if (frame_size != msg_size) {
        RCLCPP_ERROR(
          logger_, "incompatible image sizes. frame %zu, msg %zu", frame_size, msg_size);
        return;
      }
      image_msg.get().is_bigendian = false;
      image_msg.get().step = ++count;
      memcpy(image_msg.get().data.data(), frame.data, frame_size);
      image_msg.get().timestamp = std::chrono::duration_cast<std::chrono::nanoseconds>(
        std::chrono::high_resolution_clock::now().time_since_epoch()).count();
      RCLCPP_INFO(logger_, "[%" PRId64 "]Publishing message %zu on address %p",
        image_msg.get().timestamp, count, &image_msg.get());
      pub_->publish(std::move(image_msg));
      loop_rate.sleep();
    }
  }

private:
  std::shared_ptr<rclcpp::Publisher<MsgT>> pub_;
  rclcpp::Logger logger_;
};

#endif  // IMAGE_PUBLISHER_HPP_
