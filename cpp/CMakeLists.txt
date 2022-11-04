cmake_minimum_required(VERSION 3.10)
project(sentient
        VERSION 0.0.1
        DESCRIPTION "Binary Transmision Protocol Definition / Serialization library"
        HOMEPAGE_URL "https://github.com/hyper-level-nerds/sentient"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(test)
add_subdirectory(examples)