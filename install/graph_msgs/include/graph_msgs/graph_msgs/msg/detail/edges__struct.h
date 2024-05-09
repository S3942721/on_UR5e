// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGES__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__EDGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_ids'
// Member 'weights'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Edges in the package graph_msgs.
/**
  * base-zero index of all the verticies this particular vertice connects to (edges)
 */
typedef struct graph_msgs__msg__Edges
{
  rosidl_runtime_c__uint32__Sequence node_ids;
  /// optional cost/weight of each edge. if vector is empty assume all weights are equal (1)
  rosidl_runtime_c__double__Sequence weights;
} graph_msgs__msg__Edges;

// Struct for a sequence of graph_msgs__msg__Edges.
typedef struct graph_msgs__msg__Edges__Sequence
{
  graph_msgs__msg__Edges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__Edges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGES__STRUCT_H_
