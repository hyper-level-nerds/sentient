add_executable(c_model_creation main.c example_model.c)
target_link_libraries(c_model_creation sentient_c ${CONAN_LIBS})