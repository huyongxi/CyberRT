
add_library(cyber_plugin_manager SHARED 
    plugin_description.cc
    plugin_manager.cc
)

target_link_libraries(cyber_plugin_manager 
    cyber::class_loader
    cyber::common
)

add_library(cyber::plugin_manager ALIAS cyber_plugin_manager)