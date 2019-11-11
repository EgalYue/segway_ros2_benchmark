# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_fixed_size_image_transport_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED fixed_size_image_transport_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(fixed_size_image_transport_FOUND FALSE)
  elseif(NOT fixed_size_image_transport_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(fixed_size_image_transport_FOUND FALSE)
  endif()
  return()
endif()
set(_fixed_size_image_transport_CONFIG_INCLUDED TRUE)

# output package information
if(NOT fixed_size_image_transport_FIND_QUIETLY)
  message(STATUS "Found fixed_size_image_transport: 0.0.0 (${fixed_size_image_transport_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'fixed_size_image_transport' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(fixed_size_image_transport_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${fixed_size_image_transport_DIR}/${_extra}")
endforeach()
