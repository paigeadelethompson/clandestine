configure_file(../../include/sysconf.h.cmake generated/include/sysconf.h)

IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  add_library(socketengines_services
    socketengine_kqueue.cpp
    socketengine_poll.cpp
    socketengine_select.cpp)
ELSEIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  add_library(socketengines_services
    socketengine_epoll.cpp
    socketengine_poll.cpp
    socketengine_select.cpp)
ELSE()
  add_library(socketengines_services
    socketengine_poll.cpp
    socketengine_select.cpp)
ENDIF()

target_include_directories(socketengines_services PUBLIC
  ${CMAKE_CURRENT_BINARY_DIR}/generated/include/
  ../../include)
