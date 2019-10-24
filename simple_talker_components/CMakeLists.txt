cmake_minimum_required(VERSION 3.5)
project(simple_talker_components)

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
find_package(std_msgs REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rcutils REQUIRED)

include_directories(include)

set(node_plugins "")

add_library(simple_talker SHARED
  src/simple_talker.cpp)
target_compile_definitions(simple_talker
  PRIVATE "COMPOSITION_BUILDING_DLL")
ament_target_dependencies(simple_talker
  "rclcpp"
  "rclcpp_components"
  "std_msgs")
rclcpp_components_register_nodes(simple_talker "simple_talker::SIMPLE_TALKER")
set(node_plugins "${node_plugins}simple_talker::SIMPLE_TALKER;$<TARGET_FILE:simple_talker>\n")


if(NOT WIN32)
  ament_environment_hooks(
    "${ament_cmake_package_templates_ENVIRONMENT_HOOK_LIBRARY_PATH}")
endif()

install(TARGETS
  simple_talker
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)


ament_package()
