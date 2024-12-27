
add_library(cyber_common SHARED 
    file.cc
    global_data.cc
)

target_link_libraries(cyber_common 
    cyber::binary
    cyber::base
    cyber::proto
    cyber::class_loader::class_loader_utility
    glog
    protobuf
)

add_library(cyber::common ALIAS cyber_common)