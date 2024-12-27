project(cyber_croutine LANGUAGES C CXX ASM)

if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
    set(ASM_FILE detail/swap_x86_64.S)
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "arm")
    set(ASM_FILE detail/swap_aarch64.S)
else()
    message(FATAL_ERROR "Unsupported architecture: ${CMAKE_SYSTEM_PROCESSOR}")
endif()


add_library(cyber_croutine SHARED 
    croutine.cc
    detail/routine_context.cc
    ${ASM_FILE}
)

target_link_libraries(cyber_croutine 
    cyber::base
    cyber::common
    cyber::event
    cyber::time
    atomic
)

add_library(cyber::croutine ALIAS cyber_croutine)