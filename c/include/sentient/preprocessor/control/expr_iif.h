//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_CONTROL_EXPR_IIF_H
# define SENTIENT_PREPROCESSOR_CONTROL_EXPR_IIF_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_EXPR_IIF */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_EXPR_IIF(bit, expr) SNT_PP_EXPR_IIF_I(bit, expr)
# else
#    define SNT_PP_EXPR_IIF(bit, expr) SNT_PP_EXPR_IIF_OO((bit, expr))
#    define SNT_PP_EXPR_IIF_OO(par) SNT_PP_EXPR_IIF_I ## par
# endif
#
# define SNT_PP_EXPR_IIF_I(bit, expr) SNT_PP_EXPR_IIF_ ## bit(expr)
#
# define SNT_PP_EXPR_IIF_0(expr)
# define SNT_PP_EXPR_IIF_1(expr) expr
#
# endif
