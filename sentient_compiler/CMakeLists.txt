set(SENTIENT_CLI_VERSION
    ${sentient_VERSION_MAJOR}.${sentient_VERSION_MINOR}.${sentient_VERSION_PATCH})
set(SENTIENT_CLI_LICENSE "Boost Software License - Version 1.0")

add_compile_definitions(SENTIENT_COMPILER_BUILD_ENV="${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
add_compile_definitions(SENTIENT_COMPILER_VERSION=\"${SENTIENT_CLI_VERSION}\")
add_compile_definitions(SENTIENT_COMPILER_LICENSE=\"${SENTIENT_CLI_LICENSE}\")
add_compile_definitions(SENTIENT_COMPILER_AUTHOR=\"Hyper-Level-Nerds\")

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
add_executable(sntc ${SENTIENT_CLI_SRC})
target_compile_features(sntc PRIVATE cxx_std_20)
target_link_libraries(sntc ${CONAN_LIBS})