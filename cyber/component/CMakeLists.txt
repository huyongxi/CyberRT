
add_library(cyber_component SHARED 
    timer_component.cc
)

target_link_libraries(cyber_component 
    cyber::base
    cyber::scheduler
    cyber::blocker
    cyber::timer
    cyber::transport
    cyber::class_loader
    cyber::node
    cyber::proto
    gflags
)

add_library(cyber::component ALIAS cyber_component)