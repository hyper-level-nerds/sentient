# set (pass_regex "^test passed" "^all ok")
# set (fail_regex "error" "fail")

# add_executable(c_gen_test c_model_generation.cpp)
# target_link_libraries(c_gen_test ${CONAN_LIBS})
# add_executable(cpp_gen_test cpp_model_generation.cpp)
# target_link_libraries(cpp_gen_test ${CONAN_LIBS})
# add_executable(csharp_gen_test csharp_model_generation.cpp)
# target_link_libraries(csharp_gen_test ${CONAN_LIBS})
# add_executable(rust_gen_test rust_model_generation.cpp)
# target_link_libraries(rust_gen_test ${CONAN_LIBS})

# add_test(NAME COMPILER_C_GEN_TEST COMMAND c_gen_test)
# set_property (TEST COMPILER_C_GEN_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST COMPILER_C_GEN_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME COMPILER_CPP_GEN_TEST COMMAND cpp_gen_test)
# set_property (TEST COMPILER_CPP_GEN_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST COMPILER_CPP_GEN_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME COMPILER_CSHAP_GEN_TEST COMMAND csharp_gen_test)
# set_property (TEST COMPILER_CSHAP_GEN_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST COMPILER_CSHAP_GEN_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME COMPILER_RUST_GEN_TEST COMMAND rust_gen_test)
# set_property (TEST COMPILER_RUST_GEN_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST COMPILER_RUST_GEN_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")