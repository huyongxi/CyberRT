add_library(cyber_blocker SHARED
    blocker_manager.cc
)

add_library(cyber::blocker ALIAS cyber_blocker)