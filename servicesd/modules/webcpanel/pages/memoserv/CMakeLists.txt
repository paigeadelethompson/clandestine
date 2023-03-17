add_library(memos MODULE memos.cpp)
set_target_properties(memos PROPERTIES PREFIX ""
  VERSION ${PROJECT_VERSION}
  COMPILE_DEFINITIONS "MODNAME=\"memos\"")
target_link_libraries(memos services)
install(TARGETS memos DESTINATION lib/clandestine/servicesd/modules)

