#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "pcl/point_cloud.h"
#include <pcl/io/pcd_io.h>
#include "pcl_conversions/pcl_conversions.h"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("read_pointcloud");
    auto publisher = node->create_publisher<sensor_msgs::msg::PointCloud2>("pointcloud", 10);
    rclcpp::WallRate loop_rate(10);

    pcl::PointCloud<pcl::PointXYZ> cloud;
    sensor_msgs::msg::PointCloud2 msg;
    pcl::io::loadPCDFile ("/home/yuehu/Desktop/segway_ros2_benchmark/data_factory/pcl_data/test_pcd.pcd", cloud);
    pcl::toROSMsg(cloud, msg);
    msg.header.frame_id = "odom";//this has been done in order to be able to visualize our PointCloud2 message on the RViz visualizer
    //sensor_msgs::PointCloud2Ptr msgPtr = boost::make_shared<sensor_msgs::PointCloud2>(msg);

    while(rclcpp::ok()){
        //RCLCPP_INFO(node->get_logger(), "Publishing: "); //'%s'", message.data.c_str());
        publisher->publish(std::move(msg));
        rclcpp::spin_some(node);
        loop_rate.sleep();
    }
    return 0;
}