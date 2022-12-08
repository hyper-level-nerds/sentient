# depends on Boost.Hana's BOOST_HANA_NARG count
set(SENTIENT_AUTO_GENERATED_DIR ${CMAKE_BINARY_DIR}/generated/include/sentient)

set(SENTIENT_AUTO_GENERATED_HEADER_PREFIX_CONTENT
"//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
// [ this is an auto-generated source code, so do not modify it directly ]\n\n")

set(SENTIENT_DEFINE_MODEL_MAX_COUNT 40)
set(SENTIENT_REFLECTION_MACRO_IMPL_DIR ${SENTIENT_AUTO_GENERATED_DIR}/reflection/detail)

# define_encapsulated_model.hpp
set(SENTIENT_ENCAPSULATED_MODEL_IMPL_SOURCE_PATH
    ${SENTIENT_REFLECTION_MACRO_IMPL_DIR}/define_encapsulated_model.hpp)
write_file(${SENTIENT_ENCAPSULATED_MODEL_IMPL_SOURCE_PATH}
           "${SENTIENT_AUTO_GENERATED_HEADER_PREFIX_CONTENT}"
           "#ifndef SENTIENT_REFLECTION_DETAIL_DEFINE_ENCAPSULATED_MODEL_HPP\n"
           "#define SENTIENT_REFLECTION_DETAIL_DEFINE_ENCAPSULATED_MODEL_HPP\n\n")

write_file(${SENTIENT_ENCAPSULATED_MODEL_IMPL_SOURCE_PATH} APPEND
"#define SNT_DEFINE_ENCAPSULATED_MODEL_IMPL_1(TYPE)  \\
static constexpr auto snt_model_name = # TYPE ;     \\
constexpr TYPE () noexcept = default;               \\
constexpr TYPE (const TYPE &) noexcept = default;   \\
constexpr TYPE ( TYPE &&) noexcept = default;       \\
struct hana_accessors_impl {                        \\
    static constexpr auto apply() {                 \\
      struct member_names {                         \\
        static constexpr auto get() {               \\
            return ::boost::hana::make_tuple();     \\
        }                                           \\
      };                                            \\
      return ::boost::hana::make_tuple();           \\
    }                                               \\
  }                                                 \\\n
")

foreach(SENTIENT_LOOP_VAR RANGE 2 ${SENTIENT_DEFINE_MODEL_MAX_COUNT})
    set(SENTIENT_ENCAPSULATED_MODEL_IFACE
        "\n#define SNT_DEFINE_ENCAPSULATED_MODEL_IMPL_${SENTIENT_LOOP_VAR}(TYPE"
        )
    foreach(SENTIENT_IFACE_IDX RANGE 1 ${SENTIENT_LOOP_VAR})
        set(SENTIENT_ENCAPSULATED_MODEL_IFACE "${SENTIENT_ENCAPSULATED_MODEL_IFACE}, m${SENTIENT_IFACE_IDX}")
    endforeach()
    set(SENTIENT_ENCAPSULATED_MODEL_IFACE "${SENTIENT_ENCAPSULATED_MODEL_IFACE}) \\")
    write_file(${SENTIENT_ENCAPSULATED_MODEL_IMPL_SOURCE_PATH} APPEND
                "${SENTIENT_ENCAPSULATED_MODEL_IFACE}")
endforeach()

write_file(${SENTIENT_ENCAPSULATED_MODEL_IMPL_SOURCE_PATH} APPEND "\n#endif")
