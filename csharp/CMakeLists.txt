if (SENTIENT_BUILD_CSHARP_LIBRARY)
    message("${SENTIENT_MSG_PREFIX} sentient C# library enabled")
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib)

    if (SENTIENT_TEST_CSHARP_LIBRARY)
        message("${SENTIENT_MSG_PREFIX} sentient C# library test enabled")
        add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)
    endif()

    if (SENTIENT_BUILD_CSHARP_EXAMPLES)
        message("${SENTIENT_MSG_PREFIX} sentient C# examples enabled")
        add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/examples)
    endif()
endif()
