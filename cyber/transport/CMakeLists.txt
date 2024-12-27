
add_library(cyber_transport SHARED 
    common/endpoint.cc
    common/identity.cc
    dispatcher/dispatcher.cc
    dispatcher/intra_dispatcher.cc
    dispatcher/rtps_dispatcher.cc
    dispatcher/subscriber_listener.cc
    dispatcher/shm_dispatcher.cc
    message/message_info.cc
    qos/qos_profile_conf.cc
    qos/qos_filler.cc
    rtps/attributes_filler.cc
    rtps/participant.cc
    rtps/publisher.cc
    rtps/subscriber.cc
    rtps/underlay_message.cc
    rtps/underlay_message_type.cc
    shm/arena_address_allocator.cc
    shm/block.cc
    shm/condition_notifier.cc
    shm/multicast_notifier.cc
    shm/notifier_factory.cc
    shm/posix_segment.cc
    shm/protobuf_arena_manager.cc
    shm/readable_info.cc
    shm/segment.cc
    shm/segment_factory.cc
    shm/shm_conf.cc
    shm/state.cc
    shm/xsi_segment.cc
    transport.cc
)

target_link_libraries(cyber_transport 
    cyber::base
    cyber::common
    cyber::event
    cyber::message
    cyber::proto
    cyber::scheduler
    cyber::task
    cyber::statistics
    cyber::service_discovery_role
    cyber::subscriber_listener
    rt
    fastdds
    fastcdr
    uuid
)

add_library(cyber::transport ALIAS cyber_transport)