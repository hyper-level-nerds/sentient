# set (pass_regex "^test passed" "^all ok")
# set (fail_regex "error" "fail")

# add_executable(cpp_datetime_test datetimes.cpp)
# target_link_libraries(cpp_datetime_test ${CONAN_LIBS})
# add_executable(cpp_protocol_test protocols.cpp)
# target_link_libraries(cpp_protocol_test ${CONAN_LIBS})
# add_executable(cpp_serialization_test serialization.cpp)
# target_link_libraries(cpp_serialization_test ${CONAN_LIBS})

# add_test(NAME CPP_DATETIME_TEST COMMAND cpp_datetime_test)
# set_property (TEST CPP_DATETIME_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST CPP_DATETIME_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME CPP_PROTOCOL_TEST COMMAND cpp_protocol_test)
# set_property (TEST CPP_PROTOCOL_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST CPP_PROTOCOL_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME CPP_SERIALIZATION_TEST COMMAND cpp_serialization_test)
# set_property (TEST CPP_SERIALIZATION_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST CPP_SERIALIZATION_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")