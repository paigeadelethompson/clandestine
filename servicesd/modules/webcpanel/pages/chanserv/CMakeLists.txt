add_library(access MODULE access.cpp)
set_target_properties(access PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"access\"")
target_link_libraries(access services)
install(TARGETS access DESTINATION lib/clandestine/servicesd/modules)

add_library(akick MODULE akick.cpp)
set_target_properties(akick PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"akick\"")
target_link_libraries(akick services)
install(TARGETS akick DESTINATION lib/clandestine/servicesd/modules)

add_library(drop MODULE drop.cpp)
set_target_properties(drop PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"drop\"")
target_link_libraries(drop services)
install(TARGETS drop DESTINATION lib/clandestine/servicesd/modules)

add_library(info MODULE info.cpp)
set_target_properties(info PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"info\"")
target_link_libraries(info services)
install(TARGETS info DESTINATION lib/clandestine/servicesd/modules)

add_library(modes MODULE modes.cpp)
set_target_properties(modes PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"modes\"")
target_link_libraries(modes services)
install(TARGETS modes DESTINATION lib/clandestine/servicesd/modules)

add_library(set MODULE set.cpp)
set_target_properties(set PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"set\"")
target_link_libraries(set services)
install(TARGETS set DESTINATION lib/clandestine/servicesd/modules)

add_library(utils MODULE utils.cpp)
set_target_properties(utils PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"utils\"")
target_link_libraries(utils services)
install(TARGETS utils DESTINATION lib/clandestine/servicesd/modules)

