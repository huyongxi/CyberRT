
add_library(cyber_scheduler SHARED 
    processor.cc
    processor_context.cc
    scheduler.cc
    scheduler_factory.cc
    common/pin_thread.cc
    policy/choreography_context.cc
    policy/classic_context.cc
    policy/scheduler_choreography.cc
    policy/scheduler_classic.cc
)

target_link_libraries(cyber_scheduler 
    cyber::croutine
    cyber::common
    cyber::time
    cyber::proto
    cyber::data
)

add_library(cyber::scheduler ALIAS cyber_scheduler)