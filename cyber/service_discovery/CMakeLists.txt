
add_library(cyber_service_discovery SHARED 
    topology_manager.cc
    communication/participant_listener.cc
    communication/subscriber_listener.cc
    container/graph.cc
    container/multi_value_warehouse.cc
    container/single_value_warehouse.cc
    specific_manager/channel_manager.cc
    specific_manager/manager.cc
    specific_manager/node_manager.cc
    specific_manager/service_manager.cc
)

target_link_libraries(cyber_service_discovery 
    cyber::base
    cyber::proto
    cyber::transport
    cyber::common
    cyber::message
    cyber::time
    cyber::binary
    cyber::state
)

add_library(cyber::service_discovery ALIAS cyber_service_discovery)



add_library(cyber_service_discovery_role SHARED 
    role/role.cc
)

target_link_libraries(cyber_service_discovery_role 
    cyber::proto
    cyber::common
)

add_library(cyber::service_discovery_role ALIAS cyber_service_discovery_role)


add_library(subscriber_listener INTERFACE)
add_library(cyber::subscriber_listener ALIAS subscriber_listener)