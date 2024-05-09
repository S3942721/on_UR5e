// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/geometry_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `nodes`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `edges`
#include "graph_msgs/msg/detail/edges__functions.h"

bool
graph_msgs__msg__GeometryGraph__init(graph_msgs__msg__GeometryGraph * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    graph_msgs__msg__GeometryGraph__fini(msg);
    return false;
  }
  // nodes
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->nodes, 0)) {
    graph_msgs__msg__GeometryGraph__fini(msg);
    return false;
  }
  // edges
  if (!graph_msgs__msg__Edges__Sequence__init(&msg->edges, 0)) {
    graph_msgs__msg__GeometryGraph__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__GeometryGraph__fini(graph_msgs__msg__GeometryGraph * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nodes
  geometry_msgs__msg__Point__Sequence__fini(&msg->nodes);
  // edges
  graph_msgs__msg__Edges__Sequence__fini(&msg->edges);
}

bool
graph_msgs__msg__GeometryGraph__are_equal(const graph_msgs__msg__GeometryGraph * lhs, const graph_msgs__msg__GeometryGraph * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // nodes
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  // edges
  if (!graph_msgs__msg__Edges__Sequence__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  return true;
}

bool
graph_msgs__msg__GeometryGraph__copy(
  const graph_msgs__msg__GeometryGraph * input,
  graph_msgs__msg__GeometryGraph * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // nodes
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  // edges
  if (!graph_msgs__msg__Edges__Sequence__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  return true;
}

graph_msgs__msg__GeometryGraph *
graph_msgs__msg__GeometryGraph__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__GeometryGraph * msg = (graph_msgs__msg__GeometryGraph *)allocator.allocate(sizeof(graph_msgs__msg__GeometryGraph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__GeometryGraph));
  bool success = graph_msgs__msg__GeometryGraph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__GeometryGraph__destroy(graph_msgs__msg__GeometryGraph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msgs__msg__GeometryGraph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msgs__msg__GeometryGraph__Sequence__init(graph_msgs__msg__GeometryGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__GeometryGraph * data = NULL;

  if (size) {
    data = (graph_msgs__msg__GeometryGraph *)allocator.zero_allocate(size, sizeof(graph_msgs__msg__GeometryGraph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__GeometryGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__GeometryGraph__fini(&data[i - 1]);
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
graph_msgs__msg__GeometryGraph__Sequence__fini(graph_msgs__msg__GeometryGraph__Sequence * array)
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
      graph_msgs__msg__GeometryGraph__fini(&array->data[i]);
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

graph_msgs__msg__GeometryGraph__Sequence *
graph_msgs__msg__GeometryGraph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__GeometryGraph__Sequence * array = (graph_msgs__msg__GeometryGraph__Sequence *)allocator.allocate(sizeof(graph_msgs__msg__GeometryGraph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__GeometryGraph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__GeometryGraph__Sequence__destroy(graph_msgs__msg__GeometryGraph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msgs__msg__GeometryGraph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msgs__msg__GeometryGraph__Sequence__are_equal(const graph_msgs__msg__GeometryGraph__Sequence * lhs, const graph_msgs__msg__GeometryGraph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msgs__msg__GeometryGraph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msgs__msg__GeometryGraph__Sequence__copy(
  const graph_msgs__msg__GeometryGraph__Sequence * input,
  graph_msgs__msg__GeometryGraph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msgs__msg__GeometryGraph);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_msgs__msg__GeometryGraph * data =
      (graph_msgs__msg__GeometryGraph *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msgs__msg__GeometryGraph__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_msgs__msg__GeometryGraph__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_msgs__msg__GeometryGraph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
