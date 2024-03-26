
set(fastrtps_DIR "${CMAKE_SOURCE_DIR}/third_party/Fast-DDS-2.5.0/output/share/fastrtps/cmake")
# set(Protobuf_DIR "third_party/protobuf-3.5.0/cmake")
set(iceoryx_posh_DIR "${CMAKE_SOURCE_DIR}/third_party/iceoryx-1.90.0/output/lib/cmake/iceoryx_posh")

set(iceoryx_hoofs_DIR "${CMAKE_SOURCE_DIR}/third_party/iceoryx-1.90.0/output/lib/cmake/iceoryx_hoofs")
set(fastcdr_DIR "${CMAKE_SOURCE_DIR}/third_party/Fast-DDS-2.5.0/output/lib/cmake/fastcdr")
set(foonathan_memory_DIR "${CMAKE_SOURCE_DIR}/third_party/Fast-DDS-2.5.0/output/lib/foonathan_memory/cmake")

find_package(fastrtps 2.5.0 CONFIG REQUIRED)
# find_package(Protobuf 3.5.0 REQUIRED)
find_package(iceoryx_posh 1.90.0 CONFIG REQUIRED)


set(LIBRARY_NAME smw_core)

add_library(${LIBRARY_NAME}
        src/runtime.cpp
        src/service_skeleton.cpp
        src/transport/dds/fastdds_participant.cpp
        src/transport/iceoryx/iceoryx_runtime.cpp
        src/service_registry.cpp
        proto/service_discovery.pb.cc
        src/service_proxy.cpp)


target_link_directories(${LIBRARY_NAME}
        PUBLIC
        ${CMAKE_SOURCE_DIR}/third_party/protobuf-3.5.0/output/lib
        )

target_link_libraries(${LIBRARY_NAME}
        PUBLIC
        spdlog::spdlog
        smw_types
        smw_utils
        fastrtps
        protobuf
        # ${PROTOBUF_LIBRARIES}
        iceoryx_posh::iceoryx_posh
        )

target_include_directories(${LIBRARY_NAME}
        PUBLIC
        include
        proto
        include/transport
        ${CMAKE_SOURCE_DIR}/third_party/protobuf-3.5.0/output/include
        )


set_target_properties(${LIBRARY_NAME} PROPERTIES
        CXX_STANDARD_REQUIRED ON
        CXX_STANDARD ${SMW_CXX_STANDARD}
        POSITION_INDEPENDENT_CODE ON
        )
#
########## build test executables ##########
#
if (BUILD_TEST)
    add_subdirectory(test)
endif ()