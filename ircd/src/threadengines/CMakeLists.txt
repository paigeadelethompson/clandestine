add_library(threadengines
  threadengine_pthread.cpp
)

target_include_directories(threadengines PUBLIC
  ../../include)
