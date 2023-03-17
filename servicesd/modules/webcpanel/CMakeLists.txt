add_library(static_fileserver MODULE static_fileserver.cpp template_fileserver.cpp)
set_target_properties(static_fileserver PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"static_fileserver\"")
target_link_libraries(static_fileserver services)
install(TARGETS static_fileserver DESTINATION lib/clandestine/servicesd/modules)

add_library(webcpanel MODULE webcpanel.cpp)
set_target_properties(webcpanel PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"webcpanel\"")
target_link_libraries(webcpanel services)
install(TARGETS webcpanel DESTINATION lib/clandestine/servicesd/modules)

