
add_library(cyber_profiler SHARED 
    block_manager.cc
    block.cc
    frame.cc
)

target_link_libraries(cyber_profiler 
    cyber_common
    cyber_croutine
)

add_library(cyber::profiler ALIAS cyber_profiler)