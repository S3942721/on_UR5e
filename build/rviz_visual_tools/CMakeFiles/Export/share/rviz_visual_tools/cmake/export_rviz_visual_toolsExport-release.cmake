#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_visual_tools::rviz_visual_tools" for configuration "Release"
set_property(TARGET rviz_visual_tools::rviz_visual_tools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rviz_visual_tools::rviz_visual_tools PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librviz_visual_tools.so"
  IMPORTED_SONAME_RELEASE "librviz_visual_tools.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_visual_tools::rviz_visual_tools )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_visual_tools::rviz_visual_tools "${_IMPORT_PREFIX}/lib/librviz_visual_tools.so" )

# Import target "rviz_visual_tools::rviz_visual_tools_remote_control" for configuration "Release"
set_property(TARGET rviz_visual_tools::rviz_visual_tools_remote_control APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rviz_visual_tools::rviz_visual_tools_remote_control PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librviz_visual_tools_remote_control.so"
  IMPORTED_SONAME_RELEASE "librviz_visual_tools_remote_control.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_visual_tools::rviz_visual_tools_remote_control )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_visual_tools::rviz_visual_tools_remote_control "${_IMPORT_PREFIX}/lib/librviz_visual_tools_remote_control.so" )

# Import target "rviz_visual_tools::rviz_visual_tools_gui" for configuration "Release"
set_property(TARGET rviz_visual_tools::rviz_visual_tools_gui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rviz_visual_tools::rviz_visual_tools_gui PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librviz_visual_tools_gui.so"
  IMPORTED_SONAME_RELEASE "librviz_visual_tools_gui.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_visual_tools::rviz_visual_tools_gui )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_visual_tools::rviz_visual_tools_gui "${_IMPORT_PREFIX}/lib/librviz_visual_tools_gui.so" )

# Import target "rviz_visual_tools::rviz_visual_tools_imarker_simple" for configuration "Release"
set_property(TARGET rviz_visual_tools::rviz_visual_tools_imarker_simple APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rviz_visual_tools::rviz_visual_tools_imarker_simple PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librviz_visual_tools_imarker_simple.so"
  IMPORTED_SONAME_RELEASE "librviz_visual_tools_imarker_simple.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_visual_tools::rviz_visual_tools_imarker_simple )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_visual_tools::rviz_visual_tools_imarker_simple "${_IMPORT_PREFIX}/lib/librviz_visual_tools_imarker_simple.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
