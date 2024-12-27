add_library(shared_library SHARED 
    shared_library.cc
)

target_link_libraries(shared_library dl)

add_library(cyber::class_loader::shared_library ALIAS shared_library)