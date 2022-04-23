set(SENTIENT_C_AUTOGEN_DIR
    ${CMAKE_BINARY_DIR}/generated/include/sentient)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_STRING_TYPES_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/string_types.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_VEC_TYPES_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/vec_types.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_MAT_TYPES_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/mat_types.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_UTILS_ITERATIONS_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/pp_iterations.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_INC_DEC_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/pp_inc_dec.h)

set(SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_DEFERS_H_PATH
    ${SENTIENT_C_AUTOGEN_DIR}/core/internal/pp_defers.h)

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

write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_INC_DEC_H_PATH} "")
foreach(SENTIENT_LOOP_VAR RANGE 0 2048 1)
    set(TMP_INC "")
    if (${SENTIENT_LOOP_VAR} EQUAL "2048")
        set(TMP_INC ${SENTIENT_LOOP_VAR})
    else()
        math(EXPR TMP_INC "${SENTIENT_LOOP_VAR}+1")
    endif()
    
    write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_INC_DEC_H_PATH}
               "#define ___sentient_pp_increase_impl_${SENTIENT_LOOP_VAR} ${TMP_INC}"
               APPEND)
endforeach()
foreach(SENTIENT_LOOP_VAR RANGE 0 2048 1)
    set(TMP_INC "")
    if (${SENTIENT_LOOP_VAR} EQUAL "0")
        set(TMP_INC ${SENTIENT_LOOP_VAR})
    else()
        math(EXPR TMP_INC "${SENTIENT_LOOP_VAR}-1")
    endif()
    
    write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_INC_DEC_H_PATH}
               "#define ___sentient_pp_decrease_impl_${SENTIENT_LOOP_VAR} ${TMP_INC}"
               APPEND)
endforeach()

write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_DEFERS_H_PATH} "")
foreach(SENTIENT_LOOP_VAR RANGE 1 256 1)
    set(TMP_DEFER "")
    if (${SENTIENT_LOOP_VAR} EQUAL "0")
        set(TMP_DEFER ${SENTIENT_LOOP_VAR})
    else()
        math(EXPR TMP_DEFER "${TMP_DEFER}+1")
    endif()
    
    write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_INC_DEC_H_PATH}
               "#define ___sentient_pp_defer_${SENTIENT_LOOP_VAR} ${TMP_INC}"
               APPEND)
endforeach()
# write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_UTILS_ITERATIONS_H_PATH} "")
# foreach(SENTIENT_LOOP_VAR RANGE 1 4096 1)
#     write_file(${SENTIENT_C_AUTOGEN_CORE_INTERNAL_PP_UTILS_ITERATIONS_H_PATH}
#                "#define __sentient_pp_utils_foreach${SENTIENT_LOOP_VAR}"
#                APPEND)
# endforeach()