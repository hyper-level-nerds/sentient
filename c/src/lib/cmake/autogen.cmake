set(SENTIENT_C_AUTOGEN_DIR
    ${CMAKE_BINARY_DIR}/generated/include/sentient)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_STRING_TYPES_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/string_types.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_VEC_TYPES_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/vec_types.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_MAT_TYPES_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/mat_types.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_UTILS_ITERATIONS_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/iterations.h)

write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_STRING_TYPES_H_PATH} "")
foreach(SENTIENT_LOOP_VAR RANGE 1 4096 1)
    write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_STRING_TYPES_H_PATH}
               "typedef sentient_str8 sentient_str8_${SENTIENT_LOOP_VAR}"
               "[${SENTIENT_LOOP_VAR}];"
               APPEND)
endforeach()

set(SENTIENT_C_AUTOGEN_CORE_TYPES
    sentient_u32
    sentient_u64
    sentient_i32
    sentient_i64
    sentient_f32
    sentient_f64)
write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_VEC_TYPES_H_PATH} "")

foreach(SENTIENT_LOOP_VAR_TYPE
        IN LISTS
        SENTIENT_C_AUTOGEN_CORE_TYPES)
    foreach(SENTIENT_LOOP_VAR RANGE 1 4 1)
        write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_VEC_TYPES_H_PATH}
        "typedef ${SENTIENT_LOOP_VAR_TYPE} ${SENTIENT_LOOP_VAR_TYPE}_"
        "vec${SENTIENT_LOOP_VAR}"
        "[${SENTIENT_LOOP_VAR}];"
        APPEND)
    endforeach()
endforeach()

write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_MAT_TYPES_H_PATH} "")

foreach(SENTIENT_LOOP_VAR_TYPE
        IN LISTS
        SENTIENT_C_AUTOGEN_CORE_TYPES)
    foreach(SENTIENT_LOOP_VAR_X RANGE 1 4 1)
        foreach(SENTIENT_LOOP_VAR_Y RANGE 1 4 1)
            write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_MAT_TYPES_H_PATH}
            "typedef ${SENTIENT_LOOP_VAR_TYPE} ${SENTIENT_LOOP_VAR_TYPE}_"
            "mat${SENTIENT_LOOP_VAR_X}x${SENTIENT_LOOP_VAR_Y}"
            "[${SENTIENT_LOOP_VAR_X}][${SENTIENT_LOOP_VAR_Y}];"
            APPEND)
        endforeach()
    endforeach()
endforeach()

# write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_UTILS_ITERATIONS_H_PATH} "")
# foreach(SENTIENT_LOOP_VAR RANGE 1 4096 1)
#     write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_UTILS_ITERATIONS_H_PATH}
#                "#define __sentient_pp_utils_foreach${SENTIENT_LOOP_VAR}"
#                APPEND)
# endforeach()