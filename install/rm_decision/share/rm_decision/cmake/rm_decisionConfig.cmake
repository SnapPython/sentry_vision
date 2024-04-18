# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rm_decision_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rm_decision_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rm_decision_FOUND FALSE)
  elseif(NOT rm_decision_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rm_decision_FOUND FALSE)
  endif()
  return()
endif()
set(_rm_decision_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rm_decision_FIND_QUIETLY)
  message(STATUS "Found rm_decision: 0.0.0 (${rm_decision_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rm_decision' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rm_decision_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rm_decision_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rm_decision_DIR}/${_extra}")
endforeach()