// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fixed_size_msgs:msg/ImageVGA.idl
// generated code does not contain a copyright notice
#include "fixed_size_msgs/msg/image_vga__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
fixed_size_msgs__msg__ImageVGA__init(fixed_size_msgs__msg__ImageVGA * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // is_bigendian
  // step
  // data
  return true;
}

void
fixed_size_msgs__msg__ImageVGA__fini(fixed_size_msgs__msg__ImageVGA * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // is_bigendian
  // step
  // data
}

fixed_size_msgs__msg__ImageVGA *
fixed_size_msgs__msg__ImageVGA__create()
{
  fixed_size_msgs__msg__ImageVGA * msg = (fixed_size_msgs__msg__ImageVGA *)malloc(sizeof(fixed_size_msgs__msg__ImageVGA));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fixed_size_msgs__msg__ImageVGA));
  bool success = fixed_size_msgs__msg__ImageVGA__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
fixed_size_msgs__msg__ImageVGA__destroy(fixed_size_msgs__msg__ImageVGA * msg)
{
  if (msg) {
    fixed_size_msgs__msg__ImageVGA__fini(msg);
  }
  free(msg);
}


bool
fixed_size_msgs__msg__ImageVGA__Sequence__init(fixed_size_msgs__msg__ImageVGA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  fixed_size_msgs__msg__ImageVGA * data = NULL;
  if (size) {
    data = (fixed_size_msgs__msg__ImageVGA *)calloc(size, sizeof(fixed_size_msgs__msg__ImageVGA));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fixed_size_msgs__msg__ImageVGA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fixed_size_msgs__msg__ImageVGA__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fixed_size_msgs__msg__ImageVGA__Sequence__fini(fixed_size_msgs__msg__ImageVGA__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fixed_size_msgs__msg__ImageVGA__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fixed_size_msgs__msg__ImageVGA__Sequence *
fixed_size_msgs__msg__ImageVGA__Sequence__create(size_t size)
{
  fixed_size_msgs__msg__ImageVGA__Sequence * array = (fixed_size_msgs__msg__ImageVGA__Sequence *)malloc(sizeof(fixed_size_msgs__msg__ImageVGA__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = fixed_size_msgs__msg__ImageVGA__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
fixed_size_msgs__msg__ImageVGA__Sequence__destroy(fixed_size_msgs__msg__ImageVGA__Sequence * array)
{
  if (array) {
    fixed_size_msgs__msg__ImageVGA__Sequence__fini(array);
  }
  free(array);
}
