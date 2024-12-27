
add_executable(talker 
    talker.cc
    proto/examples.pb.cc
)

target_link_libraries(talker 
    cyber::cyber
)


add_executable(listener 
    listener.cc
    proto/examples.pb.cc
)

target_link_libraries(listener 
    cyber::cyber
)

add_executable(paramserver 
    paramserver.cc
)

target_link_libraries(paramserver 
    cyber::cyber
)

add_executable(service 
    service.cc
    proto/examples.pb.cc
)

target_link_libraries(service 
    cyber::cyber
)

add_executable(record 
    record.cc
    proto/examples.pb.cc
)

target_link_libraries(record 
    cyber::cyber
)