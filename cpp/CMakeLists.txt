if (SENTIENT_BUILD_EXAMPLES)
  message(${SENTIENT_MSG_PREFIX}"sentient examples enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/examples)
endif ()