aux_source_directory(. PB_SRC)
add_library(cyber_proto STATIC ${PB_SRC})
target_compile_options(cyber_proto PRIVATE -fPIC)
add_library(cyber::proto ALIAS cyber_proto)