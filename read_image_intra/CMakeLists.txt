cmake_minimum_required(VERSION 3.5)
project(read_image_intra)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(OpenCV REQUIRED)

find_package(cv_bridge REQUIRED)

add_executable(read_image_intra src/read_image_intra.cpp)
ament_target_dependencies(read_image_intra
        "rclcpp"
        "std_msgs"
        "sensor_msgs"
        "rclcpp_components"
        "cv_bridge"
        "OpenCV")

install(TARGETS
        read_image_intra
        DESTINATION lib/${PROJECT_NAME}
        )
ament_package()
