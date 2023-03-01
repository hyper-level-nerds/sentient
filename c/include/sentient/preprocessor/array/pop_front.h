//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_ARRAY_POP_FRONT_H
# define SENTIENT_PREPROCESSOR_ARRAY_POP_FRONT_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/elem.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/repetition/enum.h>
# include <sentient/preprocessor/repetition/deduce_z.h>
#
# /* SNT_PP_ARRAY_POP_FRONT */
#
# define SNT_PP_ARRAY_POP_FRONT(array) SNT_PP_ARRAY_POP_FRONT_Z(SNT_PP_DEDUCE_Z(), array)
#
# /* SNT_PP_ARRAY_POP_FRONT_Z */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ARRAY_POP_FRONT_Z(z, array) SNT_PP_ARRAY_POP_FRONT_I(z, SNT_PP_ARRAY_SIZE(array), array)
# else
#    define SNT_PP_ARRAY_POP_FRONT_Z(z, array) SNT_PP_ARRAY_POP_FRONT_Z_D(z, array)
#    define SNT_PP_ARRAY_POP_FRONT_Z_D(z, array) SNT_PP_ARRAY_POP_FRONT_I(z, SNT_PP_ARRAY_SIZE(array), array)
# endif
#
# define SNT_PP_ARRAY_POP_FRONT_I(z, size, array) (SNT_PP_DEC(size), (SNT_PP_ENUM_ ## z(SNT_PP_DEC(size), SNT_PP_ARRAY_POP_FRONT_M, array)))
# define SNT_PP_ARRAY_POP_FRONT_M(z, n, data) SNT_PP_ARRAY_ELEM(SNT_PP_INC(n), data)
#
# endif
