#include <chrono>
#include <cinttypes>
#include <cstdio>
#include <memory>
#include <string>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

#include "std_msgs/msg/string.hpp"
#include <ctime>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <memory>
#include "sensor_msgs/msg/image.hpp"

using namespace std::chrono_literals;

// Node that produces messages.
class Producer : public rclcpp::Node
{
public:
    Producer(const std::string & name, const std::string & output, const cv::Mat &image)//const std::string & bytedata
            : Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
    {
        image_ = image;
        // Create a publisher on the output topic.
        pub_ = this->create_publisher<sensor_msgs::msg::Image>(output, 10);
        // Create a timer which publishes on the output topic at ~1Hz.
        timer_ = this->create_wall_timer(0.1s, std::bind(&Producer::callback, this));


//        rclcpp::WallRate loop_rate(100ms);
//        printf(" loop \n ");
//        std::weak_ptr<std::remove_pointer<decltype(pub_.get())>::type> captured_pub = pub_; // TODO shared_ptr
//        while (rclcpp::ok()) {
//            auto pub_ptr = captured_pub.lock();
//            if (!pub_ptr) {
//                return;
//            }
//
//            sensor_msgs::msg::Image msg;
//            cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image_).toImageMsg(msg);
//            pub_ptr->publish(std::move(msg));
//
//            loop_rate.sleep();
//        }
    }

    ~Producer(){}

    void callback()
    {
//        std::weak_ptr<std::remove_pointer<decltype(pub_.get())>::type> captured_pub = pub_; // TODO shared_ptr
//        auto pub_ptr = captured_pub.lock();
//        if (!pub_ptr) {
//            return;
//        }

        sensor_msgs::msg::Image msg;
        cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", image_).toImageMsg(msg);
//        pub_ptr->publish(std::move(msg));
        pub_->publish(std::move(msg));
    }

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    cv::Mat image_;
};

// Node that consumes messages.
class Consumer : public rclcpp::Node
{
public:
    Consumer(const std::string & name, const std::string & input)
            : Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
    {
        // Create a subscription on the input topic which prints on receipt of new messages.
        sub_ = this->create_subscription<sensor_msgs::msg::Image>(
                input,
                10,
                std::bind(&Consumer::cb, this, std::placeholders::_1));
    }

    ~Consumer(){}
    void cb(sensor_msgs::msg::Image::UniquePtr msg){
//        printf(" Received message with value:, and address: 0x%" PRIXPTR "\n",
//                reinterpret_cast<std::uintptr_t>(msg.get()));
        return;
    }
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr sub_;
};


int main(int argc, char * argv[])
{
    setvbuf(stdout, NULL, _IONBF, BUFSIZ);
    rclcpp::init(argc, argv);
    rclcpp::executors::SingleThreadedExecutor executor;

    cv::Mat image = cv::imread(argv[1], CV_LOAD_IMAGE_COLOR);

    auto producer = std::make_shared<Producer>("producer", "image", image);
    auto consumer = std::make_shared<Consumer>("consumer", "image");
//
    executor.add_node(producer);
    executor.add_node(consumer);
    executor.spin();

    rclcpp::shutdown();

    return 0;
}
