
add_library(cyber_time SHARED 
    clock.cc
    duration.cc
    rate.cc
    time.cc
)

target_link_libraries(cyber_time 
    cyber::base
    cyber::common
    cyber::proto
)

add_library(cyber::time ALIAS cyber_time)