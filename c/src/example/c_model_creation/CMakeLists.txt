add_library(example_model example_model.c)

add_executable(c_model_creation
               main.c)
               
target_link_libraries(c_model_creation example_model sentient)