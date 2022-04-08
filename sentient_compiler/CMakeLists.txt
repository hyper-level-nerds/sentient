if (SENTIENT_BUILD_COMPILER)
  message("${SENTIENT_MSG_PREFIX} sentient compiler enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)
endif ()

if (SENTIENT_TEST_COMPILER)
	message("${SENTIENT_MSG_PREFIX} sentient compiler test enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)
endif()