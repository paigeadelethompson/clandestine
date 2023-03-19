configure_file(../../include/sysconf.h.cmake generated/include/sysconf.h)

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}/generated/include/
  ../../include/
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
  ${SQLite3_INCLUDE_DIR})

if(openldap_FOUND)
add_library(m_ldap MODULE m_ldap.cpp)
set_target_properties(m_ldap PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_ldap\"")
target_link_libraries(m_ldap services)
install(TARGETS m_ldap DESTINATION lib/clandestine/servicesd/modules/extra)
endif()

add_library(m_ldap_authentication MODULE m_ldap_authentication.cpp)
set_target_properties(m_ldap_authentication PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_ldap_authentication\"")
target_link_libraries(m_ldap_authentication services)
install(TARGETS m_ldap_authentication DESTINATION lib/clandestine/servicesd/modules/extra)

add_library(m_ldap_oper MODULE m_ldap_oper.cpp)
set_target_properties(m_ldap_oper PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_ldap_oper\"")
target_link_libraries(m_ldap_oper services)
install(TARGETS m_ldap_oper DESTINATION lib/clandestine/servicesd/modules/extra)

if(mariadb-connector-c_FOUND)
add_library(m_svc_mysql MODULE m_mysql.cpp)
set_target_properties(m_svc_mysql PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_svc_mysql\"")
target_link_libraries(m_svc_mysql services)
install(TARGETS m_svc_mysql DESTINATION lib/clandestine/servicesd/modules/extra)
endif()

if(pcre_FOUND)
add_library(m_regex_svc_pcre MODULE m_regex_pcre.cpp)
set_target_properties(m_regex_svc_pcre PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_regex_svc_pcre\"")
target_link_libraries(m_regex_svc_pcre services pcre::libpcre)
install(TARGETS m_regex_svc_pcre DESTINATION lib/clandestine/servicesd/modules/extra)
endif()

if(pcre2_FOUND)
add_library(m_regex_svc_pcre2 MODULE m_regex_pcre2.cpp)
set_target_properties(m_regex_svc_pcre2 PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_regex_svc_pcre2\"")
target_link_libraries(m_regex_svc_pcre2 services pcre2::pcre2)
install(TARGETS m_regex_svc_pcre2 DESTINATION lib/clandestine/servicesd/modules/extra)
endif()

add_library(m_regex_svc_posix MODULE m_regex_posix.cpp)
set_target_properties(m_regex_svc_posix PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_regex_svc_posix\"")
target_link_libraries(m_regex_svc_posix services tre)
install(TARGETS m_regex_svc_posix DESTINATION lib/clandestine/servicesd/modules/extra)

add_library(m_regex_svc_tre MODULE m_regex_tre.cpp)
set_target_properties(m_regex_svc_tre PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_regex_svc_tre\"")
target_link_libraries(m_regex_svc_tre services tre)
install(TARGETS m_regex_svc_tre DESTINATION lib/clandestine/servicesd/modules/extra)

add_library(m_sql_authentication MODULE m_sql_authentication.cpp)
set_target_properties(m_sql_authentication PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_sql_authentication\"")
target_link_libraries(m_sql_authentication services)
install(TARGETS m_sql_authentication DESTINATION lib/clandestine/servicesd/modules/extra)

add_library(m_sql_log MODULE m_sql_log.cpp)
set_target_properties(m_sql_log PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_sql_log\"")
target_link_libraries(m_sql_log services)
install(TARGETS m_sql_log DESTINATION lib/clandestine/servicesd/modules/extra)

add_library(m_sql_oper MODULE m_sql_oper.cpp)
set_target_properties(m_sql_oper PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_sql_oper\"")
target_link_libraries(m_sql_oper services)
install(TARGETS m_sql_oper DESTINATION lib/clandestine/servicesd/modules/extra)

if(sqlite3_FOUND)
add_library(m_sqlite MODULE m_sqlite.cpp)
set_target_properties(m_sqlite PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_sqlite\"")
target_link_libraries(m_sqlite services SQLite::SQLite3)
install(TARGETS m_sqlite DESTINATION lib/clandestine/servicesd/modules/extra)
endif()

if(gnutls_FOUND)
add_library(m_ssl_gnutls MODULE m_ssl_gnutls.cpp)
set_target_properties(m_ssl_gnutls PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"m_ssl_gnutls\"")
target_link_libraries(m_ssl_gnutls services)
install(TARGETS m_ssl_gnutls DESTINATION lib/clandestine/servicesd/modules/extra)
endif()

# if(openssl_FOUND)
# add_library(m_ssl_svc_openssl MODULE m_ssl_openssl.cpp)
# set_target_properties(m_ssl_svc_openssl PROPERTIES PREFIX ""
#   VERSION ${PROJECT_VERSION}
#   COMPILE_DEFINITIONS "MODNAME=\"m_ssl_svc_openssl\"")
# target_link_libraries(m_ssl_openssl services openssl::openssl)
# install(TARGETS m_ssl_svc_openssl DESTINATION lib/clandestine/servicesd/modules/extra)
# endif()
