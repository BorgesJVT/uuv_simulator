# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_uuv_control_cascaded_pids_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED uuv_control_cascaded_pids_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(uuv_control_cascaded_pids_FOUND FALSE)
  elseif(NOT uuv_control_cascaded_pids_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(uuv_control_cascaded_pids_FOUND FALSE)
  endif()
  return()
endif()
set(_uuv_control_cascaded_pids_CONFIG_INCLUDED TRUE)

# output package information
if(NOT uuv_control_cascaded_pids_FIND_QUIETLY)
  message(STATUS "Found uuv_control_cascaded_pids: 0.0.0 (${uuv_control_cascaded_pids_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'uuv_control_cascaded_pids' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${uuv_control_cascaded_pids_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(uuv_control_cascaded_pids_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${uuv_control_cascaded_pids_DIR}/${_extra}")
endforeach()
