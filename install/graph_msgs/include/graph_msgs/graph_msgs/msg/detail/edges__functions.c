// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/edges__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_ids`
// Member `weights`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
graph_msgs__msg__Edges__init(graph_msgs__msg__Edges * msg)
{
  if (!msg) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->node_ids, 0)) {
    graph_msgs__msg__Edges__fini(msg);
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__init(&msg->weights, 0)) {
    graph_msgs__msg__Edges__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__Edges__fini(graph_msgs__msg__Edges * msg)
{
  if (!msg) {
    return;
  }
  // node_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->node_ids);
  // weights
  rosidl_runtime_c__double__Sequence__fini(&msg->weights);
}

bool
graph_msgs__msg__Edges__are_equal(const graph_msgs__msg__Edges * lhs, const graph_msgs__msg__Edges * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->node_ids), &(rhs->node_ids)))
  {
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->weights), &(rhs->weights)))
  {
    return false;
  }
  return true;
}

bool
graph_msgs__msg__Edges__copy(
  const graph_msgs__msg__Edges * input,
  graph_msgs__msg__Edges * output)
{
  if (!input || !output) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->node_ids), &(output->node_ids)))
  {
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->weights), &(output->weights)))
  {
    return false;
  }
  return true;
}

graph_msgs__msg__Edges *
graph_msgs__msg__Edges__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Edges * msg = (graph_msgs__msg__Edges *)allocator.allocate(sizeof(graph_msgs__msg__Edges), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__Edges));
  bool success = graph_msgs__msg__Edges__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__Edges__destroy(graph_msgs__msg__Edges * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msgs__msg__Edges__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msgs__msg__Edges__Sequence__init(graph_msgs__msg__Edges__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Edges * data = NULL;

  if (size) {
    data = (graph_msgs__msg__Edges *)allocator.zero_allocate(size, sizeof(graph_msgs__msg__Edges), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__Edges__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__Edges__fini(&data[i - 1]);
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
graph_msgs__msg__Edges__Sequence__fini(graph_msgs__msg__Edges__Sequence * array)
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
      graph_msgs__msg__Edges__fini(&array->data[i]);
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

graph_msgs__msg__Edges__Sequence *
graph_msgs__msg__Edges__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Edges__Sequence * array = (graph_msgs__msg__Edges__Sequence *)allocator.allocate(sizeof(graph_msgs__msg__Edges__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__Edges__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__Edges__Sequence__destroy(graph_msgs__msg__Edges__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msgs__msg__Edges__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msgs__msg__Edges__Sequence__are_equal(const graph_msgs__msg__Edges__Sequence * lhs, const graph_msgs__msg__Edges__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msgs__msg__Edges__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msgs__msg__Edges__Sequence__copy(
  const graph_msgs__msg__Edges__Sequence * input,
  graph_msgs__msg__Edges__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msgs__msg__Edges);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_msgs__msg__Edges * data =
      (graph_msgs__msg__Edges *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msgs__msg__Edges__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_msgs__msg__Edges__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_msgs__msg__Edges__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
