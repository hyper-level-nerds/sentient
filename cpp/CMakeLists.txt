if (SENTIENT_BUILD_CXX_EXAMPLES)
  message("${SENTIENT_MSG_PREFIX} sentient C++ examples enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/examples)
endif ()

if (SENTIENT_TEST_CXX_LIBRARY)
	message("${SENTIENT_MSG_PREFIX} sentient C++ library test enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)
endif()