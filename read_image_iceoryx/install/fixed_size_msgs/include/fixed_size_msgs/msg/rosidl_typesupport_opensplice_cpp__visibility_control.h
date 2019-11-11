// generated from rosidl_typesupport_opensplice_cpp/resource/visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef FIXED_SIZE_MSGS__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__VISIBILITY_CONTROL_H_
#define FIXED_SIZE_MSGS__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_fixed_size_msgs __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_fixed_size_msgs __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_fixed_size_msgs __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_fixed_size_msgs __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_BUILDING_DLL_fixed_size_msgs
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_fixed_size_msgs
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_fixed_size_msgs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_fixed_size_msgs
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_fixed_size_msgs
#endif

#ifdef __cplusplus
}
#endif

#endif  // FIXED_SIZE_MSGS__MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP__VISIBILITY_CONTROL_H_
