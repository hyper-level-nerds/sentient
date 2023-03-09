//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_REPETITION_ENUM_TRAILING_BINARY_PARAMS_H
# define SENTIENT_PREPROCESSOR_REPETITION_ENUM_TRAILING_BINARY_PARAMS_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/repetition/repeat.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_ENUM_TRAILING_BINARY_PARAMS */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS(count, p1, p2) SNT_PP_REPEAT(count, SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M, (p1, p2))
# else
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS(count, p1, p2) SNT_PP_ENUM_TRAILING_BINARY_PARAMS_I(count, p1, p2)
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_I(count, p1, p2) SNT_PP_REPEAT(count, SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M, (p1, p2))
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M(z, n, pp) SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_IM(z, n, SNT_PP_TUPLE_REM_2 pp)
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_IM(z, n, im) SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_I(z, n, im)
# else
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M(z, n, pp) SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_I(z, n, SNT_PP_TUPLE_ELEM(2, 0, pp), SNT_PP_TUPLE_ELEM(2, 1, pp))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_I(z, n, p1, p2) SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_II(z, n, p1, p2)
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_II(z, n, p1, p2) , p1 ## n p2 ## n
# else
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M_I(z, n, p1, p2) , SNT_PP_CAT(p1, n) SNT_PP_CAT(p2, n)
# endif
#
# /* SNT_PP_ENUM_TRAILING_BINARY_PARAMS_Z */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_Z(z, count, p1, p2) SNT_PP_REPEAT_ ## z(count, SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M, (p1, p2))
# else
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_Z(z, count, p1, p2) SNT_PP_ENUM_TRAILING_BINARY_PARAMS_Z_I(z, count, p1, p2)
#    define SNT_PP_ENUM_TRAILING_BINARY_PARAMS_Z_I(z, count, p1, p2) SNT_PP_REPEAT_ ## z(count, SNT_PP_ENUM_TRAILING_BINARY_PARAMS_M, (p1, p2))
# endif
#
# endif
