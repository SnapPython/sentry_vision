// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_decision_interfaces:msg/RFID.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/rfid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_decision_interfaces__msg__RFID__init(rm_decision_interfaces__msg__RFID * msg)
{
  if (!msg) {
    return false;
  }
  // rfid_patrol_status
  return true;
}

void
rm_decision_interfaces__msg__RFID__fini(rm_decision_interfaces__msg__RFID * msg)
{
  if (!msg) {
    return;
  }
  // rfid_patrol_status
}

bool
rm_decision_interfaces__msg__RFID__are_equal(const rm_decision_interfaces__msg__RFID * lhs, const rm_decision_interfaces__msg__RFID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rfid_patrol_status
  if (lhs->rfid_patrol_status != rhs->rfid_patrol_status) {
    return false;
  }
  return true;
}

bool
rm_decision_interfaces__msg__RFID__copy(
  const rm_decision_interfaces__msg__RFID * input,
  rm_decision_interfaces__msg__RFID * output)
{
  if (!input || !output) {
    return false;
  }
  // rfid_patrol_status
  output->rfid_patrol_status = input->rfid_patrol_status;
  return true;
}

rm_decision_interfaces__msg__RFID *
rm_decision_interfaces__msg__RFID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__RFID * msg = (rm_decision_interfaces__msg__RFID *)allocator.allocate(sizeof(rm_decision_interfaces__msg__RFID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_decision_interfaces__msg__RFID));
  bool success = rm_decision_interfaces__msg__RFID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_decision_interfaces__msg__RFID__destroy(rm_decision_interfaces__msg__RFID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_decision_interfaces__msg__RFID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_decision_interfaces__msg__RFID__Sequence__init(rm_decision_interfaces__msg__RFID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__RFID * data = NULL;

  if (size) {
    data = (rm_decision_interfaces__msg__RFID *)allocator.zero_allocate(size, sizeof(rm_decision_interfaces__msg__RFID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_decision_interfaces__msg__RFID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_decision_interfaces__msg__RFID__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_decision_interfaces__msg__RFID__Sequence__fini(rm_decision_interfaces__msg__RFID__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_decision_interfaces__msg__RFID__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_decision_interfaces__msg__RFID__Sequence *
rm_decision_interfaces__msg__RFID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__RFID__Sequence * array = (rm_decision_interfaces__msg__RFID__Sequence *)allocator.allocate(sizeof(rm_decision_interfaces__msg__RFID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_decision_interfaces__msg__RFID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_decision_interfaces__msg__RFID__Sequence__destroy(rm_decision_interfaces__msg__RFID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_decision_interfaces__msg__RFID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_decision_interfaces__msg__RFID__Sequence__are_equal(const rm_decision_interfaces__msg__RFID__Sequence * lhs, const rm_decision_interfaces__msg__RFID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_decision_interfaces__msg__RFID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_decision_interfaces__msg__RFID__Sequence__copy(
  const rm_decision_interfaces__msg__RFID__Sequence * input,
  rm_decision_interfaces__msg__RFID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_decision_interfaces__msg__RFID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_decision_interfaces__msg__RFID * data =
      (rm_decision_interfaces__msg__RFID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_decision_interfaces__msg__RFID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_decision_interfaces__msg__RFID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_decision_interfaces__msg__RFID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
