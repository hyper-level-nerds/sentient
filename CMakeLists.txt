cmake_minimum_required(VERSION 3.10)
project(sentient
    VERSION 0.0.1
    DESCRIPTION "generic serialization library, tools"
    HOMEPAGE_URL "https://github.com/jaehwanspin/sentient"
    LANGUAGES C CXX)

set(SENTIENT_MSG_PREFIX "[SENTIENT]")

message("${SENTIENT_MSG_PREFIX}      ____  _____ _   _ _____ ___ _____ _   _ _____ \n"
        "${SENTIENT_MSG_PREFIX}     / ___|| ____| \\ | |_   _|_ _| ____| \\ | |_   _|\n"
        "${SENTIENT_MSG_PREFIX}     \\___ \\|  _| |  \\| | | |  | ||  _| |  \\| | | |  \n"
        "${SENTIENT_MSG_PREFIX}      ___) | |___| |\\  | | |  | || |___| |\\  | | |  \n"
        "${SENTIENT_MSG_PREFIX}     |____/|_____|_| \\_| |_| |___|_____|_| \\_| |_|\n"
        "${SENTIENT_MSG_PREFIX} \n"
        "${SENTIENT_MSG_PREFIX} The generic model generation compiler / serianlization libraries\n")
        
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

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

option(SENTIENT_BUILD_COMPILER "build schema compiler" ON)
option(SENTIENT_TEST_COMPILER "test schema compiler" ON)

option(SENTIENT_BUILD_C_LIBRARY "build C library" ON)
option(SENTIENT_TEST_C_LIBRARY "test C library" ON)
option(SENTIENT_BUILD_C_EXAMPLES "build C examples" ON)

option(SENTIENT_BUILD_CXX_EXAMPLES "build C++ examples" ON)
option(SENTIENT_TEST_CXX_LIBRARY "test C++ library" ON)

option(SENTIENT_BUILD_CSHARP_LIBRARY "build C# library" ON)
option(SENTIENT_TEST_CSHARP_LIBRARY "test C# library" ON)
option(SENTIENT_BUILD_CSHARP_EXAMPLES "build C# examples" ON)

include_directories(${CMAKE_INCLUDE_PATH}
                    ${CONAN_INCLUDE_DIRS}
                    ${CMAKE_SOURCE_DIR}/c/include
                    ${CMAKE_SOURCE_DIR}/cpp/include)
link_directories(${CONAN_LIB_DIRS})

add_subdirectory(${CMAKE_SOURCE_DIR}/sentient_compiler)
add_subdirectory(${CMAKE_SOURCE_DIR}/c)
add_subdirectory(${CMAKE_SOURCE_DIR}/cpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/csharp)