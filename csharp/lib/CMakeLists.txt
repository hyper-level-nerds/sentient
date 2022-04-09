file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/csharp/lib/bin)
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/csharp/lib/obj)

add_custom_target(sentient_csharp ALL
    dotnet build ${CMAKE_CURRENT_SOURCE_DIR}
    -o ${CMAKE_BINARY_DIR}/csharp/lib/bin/
    -p:BaseIntermediateOutputPath=${CMAKE_BINARY_DIR}/csharp/lib/obj/
)