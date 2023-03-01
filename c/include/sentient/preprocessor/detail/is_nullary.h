//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_DETAIL_IS_NULLARY_H
# define SENTIENT_PREPROCESSOR_DETAIL_IS_NULLARY_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/detail/check.h>
#
# /* SNT_PP_IS_NULLARY */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_IS_NULLARY(x) SNT_PP_CHECK(x, SNT_PP_IS_NULLARY_CHECK)
# else
#    define SNT_PP_IS_NULLARY(x) SNT_PP_IS_NULLARY_I(x)
#    define SNT_PP_IS_NULLARY_I(x) SNT_PP_CHECK(x, SNT_PP_IS_NULLARY_CHECK)
# endif
#
# define SNT_PP_IS_NULLARY_CHECK() 1
# define SNT_PP_CHECK_RESULT_SNT_PP_IS_NULLARY_CHECK 0, SNT_PP_NIL
#
# endif
