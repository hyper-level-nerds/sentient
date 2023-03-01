//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_FACILITIES_APPLY_H
# define SENTIENT_PREPROCESSOR_FACILITIES_APPLY_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/expr_iif.h>
# include <sentient/preprocessor/detail/is_unary.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_APPLY */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_APPLY(x) SNT_PP_APPLY_I(x)
#    define SNT_PP_APPLY_I(x) SNT_PP_EXPR_IIF(SNT_PP_IS_UNARY(x), SNT_PP_TUPLE_REM_1 x)
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_BCC()
#    define SNT_PP_APPLY(x) SNT_PP_APPLY_I(x)
#    define SNT_PP_APPLY_I(x) SNT_PP_APPLY_ ## x
#    define SNT_PP_APPLY_(x) x
#    define SNT_PP_APPLY_SNT_PP_NIL
# else
#    define SNT_PP_APPLY(x) SNT_PP_EXPR_IIF(SNT_PP_IS_UNARY(x), SNT_PP_TUPLE_REM_1 x)
# endif
#
# endif
