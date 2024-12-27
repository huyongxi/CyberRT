
add_library(cyber_sysmo SHARED 
    sysmo.cc
)

target_link_libraries(cyber_sysmo 
    cyber::scheduler
)

add_library(cyber::sysmo ALIAS cyber_sysmo)