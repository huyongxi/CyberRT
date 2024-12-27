cmake_minimum_required(VERSION 3.10)
project(cyber_rt)

add_compile_definitions(GLOG_USE_GLOG_EXPORT)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/lib)

add_subdirectory(cyber)