
add_library(cyber_message SHARED 
    protobuf_factory.cc
)

target_link_libraries(cyber_message 
    cyber::proto
    cyber::common
)

add_library(cyber::message ALIAS cyber_message)