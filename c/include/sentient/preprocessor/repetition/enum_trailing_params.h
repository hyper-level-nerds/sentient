//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_REPETITION_ENUM_TRAILING_PARAMS_H
# define SENTIENT_PREPROCESSOR_REPETITION_ENUM_TRAILING_PARAMS_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/repetition/repeat.h>
#
# /* SNT_PP_ENUM_TRAILING_PARAMS */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_TRAILING_PARAMS(count, param) SNT_PP_REPEAT(count, SNT_PP_ENUM_TRAILING_PARAMS_M, param)
# else
#    define SNT_PP_ENUM_TRAILING_PARAMS(count, param) SNT_PP_ENUM_TRAILING_PARAMS_I(count, param)
#    define SNT_PP_ENUM_TRAILING_PARAMS_I(count, param) SNT_PP_REPEAT(count, SNT_PP_ENUM_TRAILING_PARAMS_M, param)
# endif
#
# define SNT_PP_ENUM_TRAILING_PARAMS_M(z, n, param) , param ## n
#
# /* SNT_PP_ENUM_TRAILING_PARAMS_Z */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_TRAILING_PARAMS_Z(z, count, param) SNT_PP_REPEAT_ ## z(count, SNT_PP_ENUM_TRAILING_PARAMS_M, param)
# else
#    define SNT_PP_ENUM_TRAILING_PARAMS_Z(z, count, param) SNT_PP_ENUM_TRAILING_PARAMS_Z_I(z, count, param)
#    define SNT_PP_ENUM_TRAILING_PARAMS_Z_I(z, count, param) SNT_PP_REPEAT_ ## z(count, SNT_PP_ENUM_TRAILING_PARAMS_M, param)
# endif
#
# endif
