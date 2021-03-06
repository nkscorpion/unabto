#ifndef UNABTO_CONFIG_H
#define UNABTO_CONFIG_H

#include <modules/log/dynamic/unabto_dynamic_log.h>

#define NABTO_ENABLE_STREAM 1
#define NABTO_STREAM_MAX_STREAMS 16

#define NABTO_STREAM_RECEIVE_WINDOW_SIZE 100

#define NABTO_SET_TIME_FROM_ALIVE 0

#define NABTO_APPLICATION_EVENT_MODEL_ASYNC 1
#define NABTO_ENABLE_EXTENDED_RENDEZVOUS_MULTIPLE_SOCKETS 1

#define NABTO_CONNECTIONS_SIZE 16
#define NABTO_APPREQ_QUEUE_SIZE NABTO_CONNECTIONS_SIZE
#define NABTO_ENABLE_DEBUG_PACKETS 1
#define NABTO_ENABLE_DEBUG_SYSLOG_CONFIG 1

#define NABTO_ENABLE_GET_LOCAL_IP 1

#define NABTO_ENABLE_DYNAMIC_MEMORY 1

#define NABTO_ENABLE_TCP_FALLBACK 1

#define NABTO_ENABLE_TUNNEL_TCP 1

#include <assert.h>
#define UNABTO_ASSERT(expr) assert(expr)

#ifdef LOG_ALL
#define NABTO_LOG_ALL 1
#endif

#endif
