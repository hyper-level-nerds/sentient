//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_LOGICAL_BITXOR_H
# define SENTIENT_PREPROCESSOR_LOGICAL_BITXOR_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_BITXOR */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_BITXOR(x, y) SNT_PP_BITXOR_I(x, y)
# else
#    define SNT_PP_BITXOR(x, y) SNT_PP_BITXOR_OO((x, y))
#    define SNT_PP_BITXOR_OO(par) SNT_PP_BITXOR_I ## par
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_BITXOR_I(x, y) SNT_PP_BITXOR_ ## x ## y
# else
#    define SNT_PP_BITXOR_I(x, y) SNT_PP_BITXOR_ID(SNT_PP_BITXOR_ ## x ## y)
#    define SNT_PP_BITXOR_ID(id) id
# endif
#
# define SNT_PP_BITXOR_00 0
# define SNT_PP_BITXOR_01 1
# define SNT_PP_BITXOR_10 1
# define SNT_PP_BITXOR_11 0
#
# endif
