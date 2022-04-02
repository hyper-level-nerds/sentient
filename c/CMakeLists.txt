if (SENTIENT_BUILD_C_EXAMPLES)
  message(${SENTIENT_MSG_PREFIX}"sentient C examples enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/examples)
endif ()