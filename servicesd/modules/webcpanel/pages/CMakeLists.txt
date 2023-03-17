add_library(confirm MODULE confirm.cpp)
set_target_properties(confirm PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"confirm\"")
target_link_libraries(confirm services)
install(TARGETS confirm DESTINATION lib/clandestine/servicesd/modules)

add_library(index MODULE index.cpp)
set_target_properties(index PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"index\"")
target_link_libraries(index services)
install(TARGETS index DESTINATION lib/clandestine/servicesd/modules)

add_library(logout MODULE logout.cpp)
set_target_properties(logout PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"logout\"")
target_link_libraries(logout services)
install(TARGETS logout DESTINATION lib/clandestine/servicesd/modules)

add_library(register MODULE register.cpp)
set_target_properties(register PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"register\"")
target_link_libraries(register services)
install(TARGETS register DESTINATION lib/clandestine/servicesd/modules)

