add_library(class_loader_utility SHARED 
    class_loader_utility.cc
    class_factory.cc
)

target_link_libraries(class_loader_utility cyber::class_loader::shared_library)

add_library(cyber::class_loader::class_loader_utility ALIAS class_loader_utility)