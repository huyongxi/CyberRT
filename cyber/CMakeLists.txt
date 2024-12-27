
add_library(cyber_binary SHARED 
    binary.cc
)
add_library(cyber::binary ALIAS cyber_binary)



add_library(cyber_state SHARED 
    state.cc
)
target_link_libraries(cyber_state 
    cyber::common
)
add_library(cyber::state ALIAS cyber_state)


add_library(cyber SHARED 
    cyber.cc
    init.cc
)
target_link_libraries(cyber 
    cyber::base
    cyber::binary
    cyber::state
    cyber::blocker
    cyber::class_loader
    cyber::common
    cyber::component
    cyber::context
    cyber::data
    cyber::croutine
    cyber::event
    cyber::io
    cyber::logger
    cyber::message
    cyber::node
    cyber::parameter
    cyber::plugin_manager
    cyber::proto
    cyber::profiler
    cyber::record
    cyber::scheduler
    cyber::service
    cyber::service_discovery
    cyber::service_discovery_role
    cyber::sysmo
    cyber::task
    cyber::time
    cyber::timer
    cyber::transport
    glog
    protobuf
    fastdds
)
add_library(cyber::cyber ALIAS cyber)

add_subdirectory(base)
add_subdirectory(benchmark)
add_subdirectory(blocker)
add_subdirectory(class_loader)
add_subdirectory(common)
add_subdirectory(component)
add_subdirectory(context)
add_subdirectory(croutine)
add_subdirectory(data)
add_subdirectory(event)
add_subdirectory(examples)
add_subdirectory(io)
add_subdirectory(logger)
add_subdirectory(mainboard)
add_subdirectory(message)
add_subdirectory(node)
add_subdirectory(parameter)
add_subdirectory(plugin_manager)
add_subdirectory(profiler)
add_subdirectory(proto)
add_subdirectory(record)
add_subdirectory(ros_bridge)
add_subdirectory(scheduler)
add_subdirectory(service)
add_subdirectory(service_discovery)
add_subdirectory(statistics)
add_subdirectory(sysmo)
add_subdirectory(task)
add_subdirectory(time)
add_subdirectory(timer)
add_subdirectory(transport)