#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("read_image");
    auto publisher = node->create_publisher<sensor_msgs::msg::Image>("topic", 10);
    rclcpp::WallRate loop_rate(10);
    cv::Mat image = cv::imread(argv[1], CV_LOAD_IMAGE_COLOR);
    sensor_msgs::msg::Image msg;
    cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image).toImageMsg(msg);

    while(rclcpp::ok()){
//        RCLCPP_INFO(node->get_logger(), "Publishing: "); //'%s'", message.data.c_str());
        publisher->publish(msg);
        rclcpp::spin_some(node);
        loop_rate.sleep();
    }
    return 0;
}
