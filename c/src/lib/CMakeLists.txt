# include(cmake/autogen.cmake)

set(SENTIENT_C_LIBRARY_SRC
    type_info.c
    string.c
    time.c
    obj_manip.c
    serialization/serialize.c
    )

add_library(sentient ${SENTIENT_C_LIBRARY_SRC})

target_include_directories(sentient PRIVATE
    ${CMAKE_BINARY_DIR}/generated/include)