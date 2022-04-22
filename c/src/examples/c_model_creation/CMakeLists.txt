add_executable(c_model_creation
               main.c
               example_model.c)
               
target_link_libraries(c_model_creation sentient ${CONAN_LIBS})
target_include_directories(c_model_creation PRIVATE
    ${CMAKE_BINARY_DIR}/generated/include)