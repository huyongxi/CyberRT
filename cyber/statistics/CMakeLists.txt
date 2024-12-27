
add_library(cyber_statistics SHARED 
    statistics.cc
)

target_link_libraries(cyber_statistics 
    cyber::proto
    cyber::common
    cyber::time
    gflags
    brpc
)

add_library(cyber::statistics ALIAS cyber_statistics)