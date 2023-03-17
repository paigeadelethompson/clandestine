add_library(akill MODULE akill.cpp)
set_target_properties(akill PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"akill\"")
target_link_libraries(akill services)
install(TARGETS akill DESTINATION lib/clandestine/servicesd/modules)

