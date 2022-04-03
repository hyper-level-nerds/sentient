cmake_minimum_required(VERSION 3.10)
project(sentient
    VERSION 0.0.1.0
    DESCRIPTION "generic serialization library, tools"
    HOMEPAGE_URL "https://github.com/jaehwanspin/sentient"
    LANGUAGES C CXX)


message("     ____  _____ _   _ _____ ___ _____ _   _ _____ ")
message("    / ___|| ____| \\ | |_   _|_ _| ____| \\ | |_   _|")
message("    \\___ \\|  _| |  \\| | | |  | ||  _| |  \\| | | |  ")
message("     ___) | |___| |\\  | | |  | || |___| |\\  | | |  ")
message("    |____/|_____|_| \\_| |_| |___|_____|_| \\_| |_|")
message(" ")


set(SENTIENT_MSG_PREFIX "[SENTIENT]")

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
option(SENTIENT_BUILD_C_EXAMPLES "build C examples" ON)
option(SENTIENT_BUILD_CXX_EXAMPLES "build C++ examples" ON)

include_directories(${CMAKE_INCLUDE_PATH}
                    ${CONAN_INCLUDE_DIRS}
                    ${CMAKE_SOURCE_DIR}/c/include
                    ${CMAKE_SOURCE_DIR}/cpp/include)
link_directories(${CONAN_LIB_DIRS})

if (SENTIENT_BUILD_COMPILER)
  message(${SENTIENT_MSG_PREFIX}"sentient compiler enabled")
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/sentient_compiler)
endif ()

add_subdirectory(${CMAKE_SOURCE_DIR}/cpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/c)