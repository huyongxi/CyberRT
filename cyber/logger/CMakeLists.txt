
add_library(cyber_logger SHARED 
    async_logger.cc
    log_file_object.cc
    logger_util.cc
    logger.cc
)

target_link_libraries(cyber_logger 
    cyber::binary
    cyber::base
    cyber::common
)

add_library(cyber::logger ALIAS cyber_logger)