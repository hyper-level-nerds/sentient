//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_REFLECTION_DETAIL_MODEL_MACROS_HPP
#define SENTIENT_REFLECTION_DETAIL_MODEL_MACROS_HPP

#include <sentient/reflection/detail/model_tag.hpp>
// #include <sentient/reflection/detail/pp_narg.hpp>

#include <boost/hana/define_struct.hpp>

#define ___SNT_PP_FIRST(X, ...) X
#define ___SNT_PP_SECOND(X, Y, ...) Y

#define ___SNT_PP_CAT(X, ...) \
        ___SNT_PP_CAT_IMPL(X, __VA_ARGS__)
#define ___SNT_PP_CAT_IMPL(X, ...) X ## __VA_ARGS__
#define ___SNT_PP_CAT_2(X, Y, ...) \
        ___SNT_PP_CAT_2_IMPL(X, Y, __VA_ARGS__)
#define ___SNT_PP_CAT_2_IMPL(X, Y, ...) X ## Y ## __VA_ARGS__
#define ___SNT_PP_CAT_3(X, Y, Z, ...) \
        ___SNT_PP_CAT_3_IMPL(X, Y, Z, __VA_ARGS__)
#define ___SNT_PP_CAT_3_IMPL(X, Y, Z, ...) X ## Y ## Z ## __VA_ARGS__
#define ___SNT_PP_CAT_4(X, Y, Z, A, ...) \
        ___SNT_PP_CAT_4_IMPL(X, Y, Z, A, __VA_ARGS__)
#define ___SNT_PP_CAT_4_IMPL(X, Y, Z, A, ...) X ## Y ## Z ## A ## __VA_ARGS__

#define ___SNT_PP_DETECT_PAREN(...) ,
#define ___SNT_PP_IS_IN_PAREN(...) \
        ___SNT_PP_IS_IN_PAREN_IMPL(__VA_ARGS__)
#define ___SNT_PP_IS_IN_PAREN_IMPL(...)                                 \
        ___SNT_PP_HAS_COMMA(                                            \
            ___SNT_PP_CAT_3(                                            \
                ___SNT_PP_IS_IN_PAREN_,                                 \
                ___SNT_PP_HAS_COMMA(__VA_ARGS__),                       \
                ___SNT_PP_HAS_COMMA(___SNT_PP_DETECT_PAREN __VA_ARGS__) \
            )                                                           \
        )
#define ___SNT_PP_IS_IN_PAREN_01 ,

#define ___SNT_PP_CHECK(...) \
        ___SNT_PP_GET_1(__VA_ARGS__, 0, )

#define ___SNT_PP_IS_PAREN(x) \
        ___SNT_PP_CHECK(` x)
#define ___SNT_PP_IS_PAREN_PROBE(...) \
        ___SNT_PP_PROBE()

#define ___SNT_PP_IS_EQ(X, Y) \
        ___SNT_PP_IS_EQ_IMPL(X, Y)
#define ___SNT_PP_IS_EQ_IMPL(X, Y)                                   \
        ___SNT_PP_NOT(                                               \
            ___SNT_PP_IS_PAREN(                                      \
                ___SNT_PP_CAT(___SNT_PP_COMPARE_, X) ( ___SNT_PP_CAT(___SNT_PP_COMPARE_, Y) ) (()) \
            )                                                        \
        )

#define ___SNT_PP_NOT(X) \
        ___SNT_PP_IS_PROBE(___SNT_PP_CAT(___SNT_PP_NOT_, X))
#define ___SNT_PP_IS_PROBE(...) \
        ___SNT_PP_SECOND(__VA_ARGS__, 0)
#define ___SNT_PP_PROBE() \
        ~, 1
#define ___SNT_PP_NOT_0 \
        ___SNT_PP_PROBE()

#define ___SNT_PP_BOOL(X) \
        ___SNT_PP_NOT(___SNT_PP_NOT(X))

#define ___SNT_PP_COMPARE_(...) 1
#define ___SNT_PP_COMPARE_SNT_NOTHING(X) X
#define ___SNT_PP_COMPARE_SNT_BIT_FIELD(X) X

#define SNT_PP_EQUAL(X, Y)     ___SNT_PP_IS_EQ(X, Y)
#define SNT_PP_CONCAT(...)     BOOST_HANA_PP_CONCAT(__VA_ARGS__)
#define SNT_PP_STRINGIZE(...)  BOOST_HANA_PP_STRINGIZE(__VA_ARGS__)
#define SNT_PP_FRONT(...)      BOOST_HANA_PP_FRONT(__VA_ARGS__)
#define SNT_PP_DROP_FRONT(...) BOOST_HANA_PP_DROP_FRONT(__VA_ARGS__)
#define SNT_PP_BACK(...)       BOOST_HANA_PP_BACK(__VA_ARGS__)
#define SNT_PP_DROP_BACK(...)  BOOST_HANA_PP_DROP_BACK(__VA_ARGS__)
#define SNT_PP_NARG(...)       BOOST_HANA_PP_NARG(__VA_ARGS__)

#define SNT_PP_FORBID_NEW_DELETE()                            \
        constexpr void* operator new(std::size_t) = delete;   \
        constexpr void* operator new[](std::size_t) = delete; \
        constexpr void operator delete(void*) = delete;       \
        constexpr void operator delete[](void*) = delete


#endif