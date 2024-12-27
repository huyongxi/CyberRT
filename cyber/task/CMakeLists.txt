
add_library(cyber_task SHARED 
    task_manager.cc
)

target_link_libraries(cyber_task 
    cyber::scheduler
)
target_compile_options(cyber_task PRIVATE -faligned-new)
add_library(cyber::task ALIAS cyber_task)