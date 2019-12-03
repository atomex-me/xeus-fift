#pragma once

#define XEUS_FIFT_VERSION_MAJOR 0
#define XEUS_FIFT_VERSION_MINOR 2
#define XEUS_FIFT_VERSION_PATCH 2

#define XEUS_FIFT_CONCATENATE(A, B) XEUS_FIFT_CONCATENATE_IMPL(A, B)
#define XEUS_FIFT_CONCATENATE_IMPL(A, B) A##B
#define XEUS_FIFT_STRINGIFY(a) XEUS_FIFT_STRINGIFY_IMPL(a)
#define XEUS_FIFT_STRINGIFY_IMPL(a) #a

#define XEUS_FIFT_VERSION XEUS_FIFT_STRINGIFY(XEUS_FIFT_CONCATENATE(XEUS_FIFT_VERSION_MAJOR,   \
                        XEUS_FIFT_CONCATENATE(.,XEUS_FIFT_CONCATENATE(XEUS_FIFT_VERSION_MINOR,   \
                                                XEUS_FIFT_CONCATENATE(.,XEUS_FIFT_VERSION_PATCH)))))
