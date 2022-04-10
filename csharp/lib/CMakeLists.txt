file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/csharp/lib/bin)
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/csharp/lib/obj)

add_custom_target(SentientSharp ALL dotnet build ${CMAKE_CURRENT_SOURCE_DIR}
                                    -c ${CMAKE_BUILD_TYPE}
                                    -o ${CMAKE_BINARY_DIR}/csharp/lib/bin/
                                    -p:BaseIntermediateOutputPath=${CMAKE_BINARY_DIR}/csharp/lib/obj/)