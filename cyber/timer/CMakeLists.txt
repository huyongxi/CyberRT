
add_library(cyber_timer SHARED 
    timer.cc
    timing_wheel.cc
)

target_link_libraries(cyber_timer 
    cyber::common
    cyber::task
    cyber::time
)

add_library(cyber::timer ALIAS cyber_timer)