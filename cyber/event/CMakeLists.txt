
add_library(cyber_event SHARED 
    perf_event_cache.cc
)

target_link_libraries(cyber_event 
    cyber::base
    cyber::common
    cyber::time
    cyber::state
)

add_library(cyber::event ALIAS cyber_event)