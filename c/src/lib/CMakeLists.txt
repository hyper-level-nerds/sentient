include(cmake/autogen.cmake)

set(SENTIENT_C_LIBRARY_SRC serialization.c)

add_library(sentient ${SENTIENT_C_LIBRARY_SRC})
target_include_directories(sentient PRIVATE
    ${CMAKE_BINARY_DIR}/generated/include)