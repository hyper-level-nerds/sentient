//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_REFLECTION_DEFINE_MODEL_HPP
#define SENTIENT_REFLECTION_DEFINE_MODEL_HPP

#include <boost/preprocessor/if.hpp>

#include <sentient/reflection/detail/model_macros.hpp>
#include <sentient/reflection/model_info.hpp>

#define SNT_DEFINE_DEFAULT_MODEL_NO_PARENT(NAME, ...) \
        struct NAME : public ::snt::model_impl<       \
            #NAME , NAME>

#define SNT_DEFINE_DEFAULT_MODEL_PARENTS(NAME, ...)   \
        struct NAME : public ::snt::model_impl<       \
            #NAME , NAME, __VA_ARGS__>, __VA_ARGS__

#define SNT_DEFINE_DEFAULT_MODEL(...) \
        BOOST_PP_IF(BOOST_PP_EQUAL(BOOST_HANA_PP_NARG(__VA_ARGS__), 1), \
            SNT_DEFINE_DEFAULT_MODEL_NO_PARENT,                         \
            SNT_DEFINE_DEFAULT_MODEL_PARENTS                            \
        ) (__VA_ARGS__)

#endif