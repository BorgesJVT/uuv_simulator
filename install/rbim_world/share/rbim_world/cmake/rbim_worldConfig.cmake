# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rbim_world_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rbim_world_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rbim_world_FOUND FALSE)
  elseif(NOT rbim_world_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rbim_world_FOUND FALSE)
  endif()
  return()
endif()
set(_rbim_world_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rbim_world_FIND_QUIETLY)
  message(STATUS "Found rbim_world: 0.0.1 (${rbim_world_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rbim_world' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rbim_world_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rbim_world_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rbim_world_DIR}/${_extra}")
endforeach()
