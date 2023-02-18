cmake_minimum_required(VERSION 3.10)

set(SENTIENT_CPP_PROJECT_NAME "sentient-cpp")
set(SENTIENT_CPP_VERSION 0.0.1)
set(SENTIENT_CPP_DESCRIPTION "Application Layer Protocol Definition / Serialization Library")
set(SENTIENT_CPP_HOMEPAGE_URL "https://github.com/hyper-level-nerds/sentient")

set(SENTIENT_CPP_CMAKE_MESSAGE_PREFIX "[sentient-cpp]")

project(${SENTIENT_CPP_PROJECT_NAME}
        VERSION ${SENTIENT_CPP_VERSION}
        DESCRIPTION ${SENTIENT_CPP_DESCRIPTION}
        HOMEPAGE_URL ${SENTIENT_CPP_HOMEPAGE_URL}
        LANGUAGES CXX)

option(SENTIENT_GENERATE_DOCS ON)
option(SENTIENT_BUILD_EXAMPLES ON)

# if (${SENTIENT_GENERATE_DOCS})
#     find_package(Doxygen REQUIRED)
#     set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/docs/doxygen/Doxyfile.in)
#     set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
#     configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
# 
#     add_custom_target(doc_doxygen ALL
#         COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
#         WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
#         COMMENT "Generating API documentation with Doxygen"
#         VERBATIM )
# endif()


if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake"
                 TLS_VERIFY ON)
endif()
include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(CONANFILE conanfile.txt
                BASIC_SETUP
                BUILD missing)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED)

include_directories(CMAKE_INCLUDE_PATH
                    ${CMAKE_BINARY_DIR}/generated/include)
include(${CMAKE_SOURCE_DIR}/cmake/autogen.cmake)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(test)
add_subdirectory(example)