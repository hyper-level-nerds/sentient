add_custom_target(csharp_model_creation ALL dotnet build ${CMAKE_CURRENT_SOURCE_DIR}
    -c ${CMAKE_BUILD_TYPE}
    -o ${CMAKE_BINARY_DIR}/csharp/examples/csharp_model_creation/bin/
    -p:BaseIntermediateOutputPath=${CMAKE_BINARY_DIR}/csharp/examples/csharp_model_creation/obj/)