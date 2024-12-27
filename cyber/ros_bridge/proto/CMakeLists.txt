aux_source_directory(. PB_SRC)
add_library(ros_bridge_proto STATIC ${PB_SRC})
target_compile_options(ros_bridge_proto PRIVATE -fPIC)
add_library(cyber::ros_bridge_proto ALIAS ros_bridge_proto)