
add_library(cyber_parameter SHARED 
    parameter.cc
    parameter_client.cc
    parameter_server.cc
)

target_link_libraries(cyber_parameter 
    cyber::proto
    cyber::message
    cyber::node
    cyber::service
)

add_library(cyber::parameter ALIAS cyber_parameter)