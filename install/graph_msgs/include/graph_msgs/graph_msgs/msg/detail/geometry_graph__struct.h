// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'nodes'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'edges'
#include "graph_msgs/msg/detail/edges__struct.h"

/// Struct defined in msg/GeometryGraph in the package graph_msgs.
/**
  * A reference coordinate frame and timestamp
 */
typedef struct graph_msgs__msg__GeometryGraph
{
  std_msgs__msg__Header header;
  /// 3D spacial graph
  geometry_msgs__msg__Point__Sequence nodes;
  /// This vector should be the same length as nodes, above, and represents all the connecting nodes
  graph_msgs__msg__Edges__Sequence edges;
} graph_msgs__msg__GeometryGraph;

// Struct for a sequence of graph_msgs__msg__GeometryGraph.
typedef struct graph_msgs__msg__GeometryGraph__Sequence
{
  graph_msgs__msg__GeometryGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__GeometryGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__STRUCT_H_
