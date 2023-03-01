//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_LOGICAL_BITNOR_H
# define SENTIENT_PREPROCESSOR_LOGICAL_BITNOR_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_BITNOR */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_BITNOR(x, y) SNT_PP_BITNOR_I(x, y)
# else
#    define SNT_PP_BITNOR(x, y) SNT_PP_BITNOR_OO((x, y))
#    define SNT_PP_BITNOR_OO(par) SNT_PP_BITNOR_I ## par
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_BITNOR_I(x, y) SNT_PP_BITNOR_ ## x ## y
# else
#    define SNT_PP_BITNOR_I(x, y) SNT_PP_BITNOR_ID(SNT_PP_BITNOR_ ## x ## y)
#    define SNT_PP_BITNOR_ID(id) id
# endif
#
# define SNT_PP_BITNOR_00 1
# define SNT_PP_BITNOR_01 0
# define SNT_PP_BITNOR_10 0
# define SNT_PP_BITNOR_11 0
#
# endif
