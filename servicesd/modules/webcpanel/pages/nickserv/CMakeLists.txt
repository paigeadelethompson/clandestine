add_library(access MODULE access.cpp)
set_target_properties(access PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"access\"")
target_link_libraries(access services)
install(TARGETS access DESTINATION lib/clandestine/servicesd/modules)

add_library(alist MODULE alist.cpp)
set_target_properties(alist PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"alist\"")
target_link_libraries(alist services)
install(TARGETS alist DESTINATION lib/clandestine/servicesd/modules)

add_library(cert MODULE cert.cpp)
set_target_properties(cert PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"cert\"")
target_link_libraries(cert services)
install(TARGETS cert DESTINATION lib/clandestine/servicesd/modules)

add_library(confirm MODULE confirm.cpp)
set_target_properties(confirm PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"confirm\"")
target_link_libraries(confirm services)
install(TARGETS confirm DESTINATION lib/clandestine/servicesd/modules)

add_library(info MODULE info.cpp)
set_target_properties(info PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"info\"")
target_link_libraries(info services)
install(TARGETS info DESTINATION lib/clandestine/servicesd/modules)

