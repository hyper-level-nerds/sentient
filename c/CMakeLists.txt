if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  message(FATAL_ERROR "${SENTIENT_MSG_PREFIX} It dosen't support MSVC C compiler."
                      "${SENTIENT_MSG_PREFIX} Go get the GNU one")
else()
  if (SENTIENT_BUILD_C_LIBRARY)
    message("${SENTIENT_MSG_PREFIX} sentient C library enabled")
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/lib)
  endif()

  if (SENTIENT_TEST_C_LIBRARY)
    message("${SENTIENT_MSG_PREFIX} sentient C library test enabled")
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)
  endif()

  if (SENTIENT_BUILD_C_EXAMPLES)
    message("${SENTIENT_MSG_PREFIX} sentient C examples enabled")
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/examples)
  endif()
endif()

