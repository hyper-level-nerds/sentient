//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_ARRAY_REVERSE_H
# define SENTIENT_PREPROCESSOR_ARRAY_REVERSE_H
#
# include <sentient/preprocessor/array/data.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/tuple/reverse.h>
#
# /* SNT_PP_ARRAY_REVERSE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ARRAY_REVERSE(array) (SNT_PP_ARRAY_SIZE(array), SNT_PP_TUPLE_REVERSE(SNT_PP_ARRAY_SIZE(array), SNT_PP_ARRAY_DATA(array)))
# else
#    define SNT_PP_ARRAY_REVERSE(array) SNT_PP_ARRAY_REVERSE_I(array)
#    define SNT_PP_ARRAY_REVERSE_I(array) (SNT_PP_ARRAY_SIZE(array), SNT_PP_TUPLE_REVERSE(SNT_PP_ARRAY_SIZE(array), SNT_PP_ARRAY_DATA(array)))
# endif
#
# endif
