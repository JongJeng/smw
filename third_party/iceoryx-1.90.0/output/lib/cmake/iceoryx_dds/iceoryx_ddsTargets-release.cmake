#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "iceoryx_dds::iceoryx_dds" for configuration "Release"
set_property(TARGET iceoryx_dds::iceoryx_dds APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(iceoryx_dds::iceoryx_dds PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libiceoryx_dds.a"
  )

list(APPEND _cmake_import_check_targets iceoryx_dds::iceoryx_dds )
list(APPEND _cmake_import_check_files_for_iceoryx_dds::iceoryx_dds "${_IMPORT_PREFIX}/lib/libiceoryx_dds.a" )

# Import target "iceoryx_dds::iox-dds-gateway" for configuration "Release"
set_property(TARGET iceoryx_dds::iox-dds-gateway APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(iceoryx_dds::iox-dds-gateway PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/iox-dds-gateway"
  )

list(APPEND _cmake_import_check_targets iceoryx_dds::iox-dds-gateway )
list(APPEND _cmake_import_check_files_for_iceoryx_dds::iox-dds-gateway "${_IMPORT_PREFIX}/bin/iox-dds-gateway" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
