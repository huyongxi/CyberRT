
add_library(cyber_io SHARED 
    poll_handler.cc
    poller.cc
    session.cc
)

target_link_libraries(cyber_io 
    cyber::base
    cyber::common
    cyber::croutine
    cyber::scheduler
    cyber::time
)

add_library(cyber::io ALIAS cyber_io)