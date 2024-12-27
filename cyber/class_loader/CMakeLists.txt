add_subdirectory(shared_library)
add_subdirectory(utility)

add_library(cyber_class_loader SHARED 
    class_loader.cc
    class_loader_manager.cc
)

target_link_libraries(cyber_class_loader 
    cyber::class_loader::shared_library
    cyber::class_loader::class_loader_utility
    cyber::common
)

add_library(cyber::class_loader ALIAS cyber_class_loader)