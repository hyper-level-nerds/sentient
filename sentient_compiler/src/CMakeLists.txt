set(SENTIENT_CLI_NAME sntc)
set(SENTIENT_CLI_VERSION
    ${sentient_VERSION_MAJOR}.${sentient_VERSION_MINOR}.${sentient_VERSION_PATCH})
set(SENTIENT_CLI_LICENSE "Boost Software License - Version 1.0")
set(SENTIENT_CLI_USAGE "sntc -t [ m | p ] <input file> -o <output filename | directory> ")
set(SENTIENT_CLI_AUTHORS "Hyper-Level-Nerds (Jin, Lucky)")

add_compile_definitions(SENTIENT_COMPILER_NAME=\"${SENTIENT_CLI_NAME}\")
add_compile_definitions(SENTIENT_COMPILER_BUILD_ENV="${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
add_compile_definitions(SENTIENT_COMPILER_VERSION=\"${SENTIENT_CLI_VERSION}\")
add_compile_definitions(SENTIENT_COMPILER_LICENSE=\"${SENTIENT_CLI_LICENSE}\")
add_compile_definitions(SENTIENT_COMPILER_AUTHOR=\"${SENTIENT_CLI_AUTHORS}\")
add_compile_definitions(SENTIENT_COMPILER_USAGE=\"${SENTIENT_CLI_USAGE}\")

set(SENTIENT_CLI_SRC
    main.cpp
    framework.cpp
    arg_parser.cpp
    filesystem.cpp
    version_output.cpp
    model_parser.cpp
    language/java_generator.cpp
    language/cpp_generator.cpp
    language/python_generator.cpp
    language/csharp_generator.cpp
    language/rust_generator.cpp)
add_executable(${SENTIENT_CLI_NAME} ${SENTIENT_CLI_SRC})
target_compile_features(${SENTIENT_CLI_NAME} PRIVATE cxx_std_20)
target_link_libraries(${SENTIENT_CLI_NAME} ${CONAN_LIBS})