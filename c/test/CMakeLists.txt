# set (pass_regex "^test passed" "^all ok")
# set (fail_regex "error" "fail")

# add_executable(c_datetime_test datetimes.c)
# target_link_libraries(c_datetime_test sentient ${CONAN_LIBS})
# add_executable(c_protocol_test protocols.c)
# target_link_libraries(c_protocol_test sentient ${CONAN_LIBS})
# add_executable(c_serialization_test serialization.c)
# target_link_libraries(c_serialization_test sentient ${CONAN_LIBS})

# add_test(NAME C_DATETIME_TEST COMMAND c_datetime_test)
# set_property (TEST C_DATETIME_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST C_DATETIME_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME C_PROTOCOL_TEST COMMAND c_protocol_test)
# set_property (TEST C_PROTOCOL_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST C_PROTOCOL_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")

# add_test(NAME C_SERIALIZATION_TEST COMMAND c_serialization_test)
# set_property (TEST C_SERIALIZATION_TEST
#               PROPERTY PASS_REGULAR_EXPRESSION "${pass_regex}")
# set_property (TEST C_SERIALIZATION_TEST
#               PROPERTY FAIL_REGULAR_EXPRESSION "${fail_regex}")