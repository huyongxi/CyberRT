
add_executable(mainboard 
    mainboard.cc
    module_argument.cc
    module_argument.h
    module_controller.cc
    module_controller.h
)

target_link_libraries(mainboard 
    cyber::cyber
    cyber::proto
    cyber::common
    cyber::plugin_manager
    pthread
    tcmalloc
    profiler
)