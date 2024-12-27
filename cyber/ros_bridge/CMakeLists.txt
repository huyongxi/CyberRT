add_subdirectory(proto)

add_library(converter_base SHARED 
    common/ros_bridge_gflags.cc
    common/bridge_argument.cc
)

target_link_libraries(converter_base 
    cyber::ros_bridge_proto
    gflags
)

add_library(cyber::converter_base ALIAS converter_base)


add_executable(ros_bridge 
    ros_bridge.cc
)

target_link_libraries(ros_bridge 
    cyber::cyber
    cyber::ros_bridge_proto
    cyber::converter_base
    tcmalloc
    profiler
)