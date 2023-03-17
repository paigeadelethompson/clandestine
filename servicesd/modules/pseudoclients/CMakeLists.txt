add_library(botserv MODULE botserv.cpp)
set_target_properties(botserv PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"botserv\"")
target_link_libraries(botserv services)
install(TARGETS botserv DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

add_library(chanserv MODULE chanserv.cpp)
set_target_properties(chanserv PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"chanserv\"")
target_link_libraries(chanserv services)
install(TARGETS chanserv DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

add_library(global MODULE global.cpp)
set_target_properties(global PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"global\"")
target_link_libraries(global services)
install(TARGETS global DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

add_library(hostserv MODULE hostserv.cpp)
set_target_properties(hostserv PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"hostserv\"")
target_link_libraries(hostserv services)
install(TARGETS hostserv DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

add_library(memoserv MODULE memoserv.cpp)
set_target_properties(memoserv PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"memoserv\"")
target_link_libraries(memoserv services)
install(TARGETS memoserv DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

add_library(nickserv MODULE nickserv.cpp)
set_target_properties(nickserv PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"nickserv\"")
target_link_libraries(nickserv services)
install(TARGETS nickserv DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

add_library(operserv MODULE operserv.cpp)
set_target_properties(operserv PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"operserv\"")
target_link_libraries(operserv services)
install(TARGETS operserv DESTINATION lib/clandestine/servicesd/modules/pseudoclients)

