add_executable(cyber_benchmark_reader 
    benchmark_msg.pb.cc
    cyber_benchmark_reader.cc
)

target_link_libraries(cyber_benchmark_reader 
    cyber::cyber
    pthread
    tcmalloc
    profiler
)


add_executable(cyber_benchmark_writer 
    benchmark_msg.pb.cc
    cyber_benchmark_writer.cc
)

target_link_libraries(cyber_benchmark_writer 
    cyber::cyber
    cyber::time
    pthread
    tcmalloc
    profiler
)