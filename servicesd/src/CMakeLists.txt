add_definitions(-DVERSION_MAJOR=${VERSION_MAJOR})
add_definitions(-DVERSION_MINOR=${VERSION_MINOR})
add_definitions(-DVERSION_PATCH=${VERSION_PATCH})
add_definitions(-DVERSION_EXTRA="${VERSION_EXTRA}")
add_definitions(-DBUILD=${BUILD})

configure_file(../include/sysconf.h.cmake generated/include/sysconf.h)

add_subdirectory(socketengines/)

add_library(services 
  main.cpp
  access.cpp
  account.cpp
  base.cpp
  base64.cpp
  bots.cpp
  channels.cpp
  command.cpp
  config.cpp
  extensible.cpp
  hashcomp.cpp
  init.cpp
  language.cpp
  logger.cpp
  mail.cpp
  memos.cpp
  messages.cpp
  misc.cpp
  modes.cpp
  module.cpp
  modulemanager.cpp
  nickalias.cpp
  nickcore.cpp
  opertype.cpp
  pipeengine.cpp
  process.cpp
  protocol.cpp
  regchannel.cpp
  serialize.cpp
  servers.cpp
  siphash.cpp
  socket_clients.cpp
  socket_transport.cpp
  sockets.cpp
  threadengine.cpp
  timers.cpp
  uplink.cpp
  users.cpp
  xline.cpp)

target_include_directories(services PUBLIC
  ${CMAKE_CURRENT_BINARY_DIR}/generated/include/
  ../include/
  ${argon2_INCLUDE_DIR}
  ${http_parser_INCLUDE_DIR}
  ${libxcrypt_INCLUDE_DIR}
  ${pcre_INCLUDE_DIR}
  ${utf8cpp_INCLUDE_DIR}
  ${hash-library_INCLUDE_DIR}
  ${maxminddb_INCLUDE_DIR}
  ${GnuTLS_INCLUDE_DIR}
  ${mariadb-connector-c_INCLUDE_DIR}
  ${libqrencode_INCLUDE_DIR}
  ${re2_INCLUDE_DIR}
  ${PCRE2_INCLUDE_DIR}
  ${PostgreSQL_INCLUDE_DIR}
  ${MbedTLS_INCLUDE_DIR}
  ${OpenSSL_INCLUDE_DIR}
  ${SQLite3_INCLUDE_DIR}
  ../../lib/tre/)

target_link_libraries(services
  socketengines_services)

add_executable(servicesd main.cpp)
target_link_libraries(servicesd
  services
  -ldl
  -pthread)

install(TARGETS servicesd DESTINATION sbin)
