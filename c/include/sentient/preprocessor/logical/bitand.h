//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_LOGICAL_BITAND_H
# define SENTIENT_PREPROCESSOR_LOGICAL_BITAND_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_BITAND */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_BITAND(x, y) SNT_PP_BITAND_I(x, y)
# else
#    define SNT_PP_BITAND(x, y) SNT_PP_BITAND_OO((x, y))
#    define SNT_PP_BITAND_OO(par) SNT_PP_BITAND_I ## par
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_BITAND_I(x, y) SNT_PP_BITAND_ ## x ## y
# else
#    define SNT_PP_BITAND_I(x, y) SNT_PP_BITAND_ID(SNT_PP_BITAND_ ## x ## y)
#    define SNT_PP_BITAND_ID(res) res
# endif
#
# define SNT_PP_BITAND_00 0
# define SNT_PP_BITAND_01 0
# define SNT_PP_BITAND_10 0
# define SNT_PP_BITAND_11 1
#
# endif
