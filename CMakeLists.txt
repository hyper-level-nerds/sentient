cmake_minimum_required(VERSION 3.10)
project(sentient
    VERSION 0.0.1.0
    DESCRIPTION "generic serialization library, tools"
    HOMEPAGE_URL "https://github.com/jaehwanspin/sentient"
    LANGUAGES C CXX)

set(SENTIENT_MSG_PREFIX "[SENTIENT]")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
  message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
  file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/v0.16.1/conan.cmake"
                "${CMAKE_BINARY_DIR}/conan.cmake"
                EXPECTED_HASH SHA256=396e16d0f5eabdc6a14afddbcfff62a54a7ee75c6da23f32f7a31bc85db23484
                TLS_VERIFY ON)
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_run(CONANFILE conanfile.txt
                BASIC_SETUIP
                BUILD missing)

option(SENTIENT_ENABLE_SHARED "build shared library" OFF)
option(SENTIENT_BUILD_CLI "build CLI tool" ON)
option(SENTIENT_BUILD_CORE "build core library" ON)
option(SENTIENT_BUILD_EXAMPLES "build examples" ON)
option(SENTIENT_BUILD_CSHARP "build C# library" OFF)
option(SENTIENT_BUILD_JAVA "build java library" OFF)
option(SENTIENT_BUILD_KOTLIN "build kotlin library" OFF)
option(SENTIENT_BUILD_PYTHON "build python library" OFF)
option(SENTIENT_BUILD_JAVASCRIPT "build javascript library" OFF)
option(SENTIENT_BUILD_TYPESCRIPT "build typescript library" OFF)

include_directories(${CMAKE_INCLUDE_PATH}
                    ${CONAN_INCLUDE_DIRS}
                    include)
link_directories(${CONAN_LIB_DIRS})

add_subdirectory(${CMAKE_SOURCE_DIR}/src)

if (SENTIENT_BUILD_EXAMPLES)
  message(${SENTIENT_MSG_PREFIX}"sentient examples enabled")
  add_subdirectory(${CMAKE_SOURCE_DIR}/examples)
endif ()