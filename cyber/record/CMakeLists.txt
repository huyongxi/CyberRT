
add_library(cyber_record SHARED 
    header_builder.cc
    record_reader.cc
    record_viewer.cc
    record_writer.cc
    file/record_file_base.cc
    file/record_file_reader.cc
    file/record_file_writer.cc
)

target_link_libraries(cyber_record 
    cyber::proto
    cyber::common
    cyber::time
    cyber::message
    protobuf
)

add_library(cyber::record ALIAS cyber_record)