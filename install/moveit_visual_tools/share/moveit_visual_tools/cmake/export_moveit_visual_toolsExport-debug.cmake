#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_visual_tools::moveit_visual_tools" for configuration "Debug"
set_property(TARGET moveit_visual_tools::moveit_visual_tools APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(moveit_visual_tools::moveit_visual_tools PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmoveit_visual_tools.so"
  IMPORTED_SONAME_DEBUG "libmoveit_visual_tools.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_visual_tools::moveit_visual_tools )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_visual_tools::moveit_visual_tools "${_IMPORT_PREFIX}/lib/libmoveit_visual_tools.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
