add_library(request MODULE request.cpp)
set_target_properties(request PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"request\"")
target_link_libraries(request services)
install(TARGETS request DESTINATION lib/clandestine/servicesd/modules)

