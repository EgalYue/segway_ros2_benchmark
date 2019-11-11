cmake_minimum_required(VERSION 3.5)
project(read_pointcloud)

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
find_package(Boost REQUIRED)
find_package(PCL REQUIRED QUIET COMPONENTS common io)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)

include_directories(
        include
        #${PCL_COMMON_INCLUDE_DIRS}
)

add_executable(read_pointcloud src/read_pointcloud.cpp)
ament_target_dependencies(read_pointcloud
        "rclcpp"
        "sensor_msgs"
        "std_msgs"
        "pcl_conversions"
)

target_link_libraries(read_pointcloud ${Boost_LIBRARIES} ${PCL_LIBRARIES})

install(TARGETS
        read_pointcloud
        DESTINATION lib/${PROJECT_NAME}
        )
ament_package()
