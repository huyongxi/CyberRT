
add_library(cyber_node SHARED 
    node.cc
)

target_link_libraries(cyber_node 
    cyber::proto
    cyber::blocker
    cyber::common
    cyber::message
    cyber::service
    cyber::service_discovery
    cyber::croutine
    cyber::scheduler
    cyber::time
    cyber::transport
    cyber::event
    cyber::data
    brpc
)

add_library(cyber::node ALIAS cyber_node)