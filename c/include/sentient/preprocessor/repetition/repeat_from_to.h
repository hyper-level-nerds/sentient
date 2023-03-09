//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_REPETITION_REPEAT_FROM_TO_H
# define SENTIENT_PREPROCESSOR_REPETITION_REPEAT_FROM_TO_H
#
# include <sentient/preprocessor/arithmetic/add.h>
# include <sentient/preprocessor/arithmetic/sub.h>
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/debug/error.h>
# include <sentient/preprocessor/detail/auto_rec.h>
# include <sentient/preprocessor/repetition/repeat.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_REPEAT_FROM_TO */
#
# if 0
#    define SNT_PP_REPEAT_FROM_TO(first, last, macro, data)
# endif
#
# define SNT_PP_REPEAT_FROM_TO SNT_PP_CAT(SNT_PP_REPEAT_FROM_TO_, SNT_PP_AUTO_REC(SNT_PP_REPEAT_P, 4))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# define SNT_PP_REPEAT_FROM_TO_1(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_1(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_2(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_2(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_3(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_3(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256), f, l, m, dt)
#
# else
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_REPEAT == 256
# define SNT_PP_REPEAT_FROM_TO_1(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_1(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256)), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_2(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_2(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256)), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_3(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_3(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 256)), f, l, m, dt)
# elif SNT_PP_LIMIT_REPEAT == 512
# define SNT_PP_REPEAT_FROM_TO_1(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_1(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 512)), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_2(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_2(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 512)), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_3(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_3(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 512)), f, l, m, dt)
# elif SNT_PP_LIMIT_REPEAT == 1024
# define SNT_PP_REPEAT_FROM_TO_1(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_1(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 1024)), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_2(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_2(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 1024)), f, l, m, dt)
# define SNT_PP_REPEAT_FROM_TO_3(f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_3(SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_WHILE_P, 1024)), f, l, m, dt)
# else
# error Incorrect value for the SNT_PP_LIMIT_REPEAT limit
# endif
#
# endif
#
# define SNT_PP_REPEAT_FROM_TO_4(f, l, m, dt) SNT_PP_ERROR(0x0003)
#
# define SNT_PP_REPEAT_FROM_TO_1ST SNT_PP_REPEAT_FROM_TO_1
# define SNT_PP_REPEAT_FROM_TO_2ND SNT_PP_REPEAT_FROM_TO_2
# define SNT_PP_REPEAT_FROM_TO_3RD SNT_PP_REPEAT_FROM_TO_3
#
# /* SNT_PP_REPEAT_FROM_TO_D */
#
# if 0
#    define SNT_PP_REPEAT_FROM_TO_D(d, first, last, macro, data)
# endif
#
# define SNT_PP_REPEAT_FROM_TO_D SNT_PP_CAT(SNT_PP_REPEAT_FROM_TO_D_, SNT_PP_AUTO_REC(SNT_PP_REPEAT_P, 4))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_REPEAT_FROM_TO_D_1(d, f, l, m, dt) SNT_PP_REPEAT_1(SNT_PP_SUB_D(d, l, f), SNT_PP_REPEAT_FROM_TO_M_1, (d, f, m, dt))
#    define SNT_PP_REPEAT_FROM_TO_D_2(d, f, l, m, dt) SNT_PP_REPEAT_2(SNT_PP_SUB_D(d, l, f), SNT_PP_REPEAT_FROM_TO_M_2, (d, f, m, dt))
#    define SNT_PP_REPEAT_FROM_TO_D_3(d, f, l, m, dt) SNT_PP_REPEAT_3(SNT_PP_SUB_D(d, l, f), SNT_PP_REPEAT_FROM_TO_M_3, (d, f, m, dt))
# else
#    define SNT_PP_REPEAT_FROM_TO_D_1(d, f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_1_I(d, f, l, m, dt)
#    define SNT_PP_REPEAT_FROM_TO_D_2(d, f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_2_I(d, f, l, m, dt)
#    define SNT_PP_REPEAT_FROM_TO_D_3(d, f, l, m, dt) SNT_PP_REPEAT_FROM_TO_D_3_I(d, f, l, m, dt)
#    define SNT_PP_REPEAT_FROM_TO_D_1_I(d, f, l, m, dt) SNT_PP_REPEAT_1(SNT_PP_SUB_D(d, l, f), SNT_PP_REPEAT_FROM_TO_M_1, (d, f, m, dt))
#    define SNT_PP_REPEAT_FROM_TO_D_2_I(d, f, l, m, dt) SNT_PP_REPEAT_2(SNT_PP_SUB_D(d, l, f), SNT_PP_REPEAT_FROM_TO_M_2, (d, f, m, dt))
#    define SNT_PP_REPEAT_FROM_TO_D_3_I(d, f, l, m, dt) SNT_PP_REPEAT_3(SNT_PP_SUB_D(d, l, f), SNT_PP_REPEAT_FROM_TO_M_3, (d, f, m, dt))
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_REPEAT_FROM_TO_M_1(z, n, dfmd) SNT_PP_REPEAT_FROM_TO_M_1_IM(z, n, SNT_PP_TUPLE_REM_4 dfmd)
#    define SNT_PP_REPEAT_FROM_TO_M_2(z, n, dfmd) SNT_PP_REPEAT_FROM_TO_M_2_IM(z, n, SNT_PP_TUPLE_REM_4 dfmd)
#    define SNT_PP_REPEAT_FROM_TO_M_3(z, n, dfmd) SNT_PP_REPEAT_FROM_TO_M_3_IM(z, n, SNT_PP_TUPLE_REM_4 dfmd)
#    define SNT_PP_REPEAT_FROM_TO_M_1_IM(z, n, im) SNT_PP_REPEAT_FROM_TO_M_1_I(z, n, im)
#    define SNT_PP_REPEAT_FROM_TO_M_2_IM(z, n, im) SNT_PP_REPEAT_FROM_TO_M_2_I(z, n, im)
#    define SNT_PP_REPEAT_FROM_TO_M_3_IM(z, n, im) SNT_PP_REPEAT_FROM_TO_M_3_I(z, n, im)
# else
#    define SNT_PP_REPEAT_FROM_TO_M_1(z, n, dfmd) SNT_PP_REPEAT_FROM_TO_M_1_I(z, n, SNT_PP_TUPLE_ELEM(4, 0, dfmd), SNT_PP_TUPLE_ELEM(4, 1, dfmd), SNT_PP_TUPLE_ELEM(4, 2, dfmd), SNT_PP_TUPLE_ELEM(4, 3, dfmd))
#    define SNT_PP_REPEAT_FROM_TO_M_2(z, n, dfmd) SNT_PP_REPEAT_FROM_TO_M_2_I(z, n, SNT_PP_TUPLE_ELEM(4, 0, dfmd), SNT_PP_TUPLE_ELEM(4, 1, dfmd), SNT_PP_TUPLE_ELEM(4, 2, dfmd), SNT_PP_TUPLE_ELEM(4, 3, dfmd))
#    define SNT_PP_REPEAT_FROM_TO_M_3(z, n, dfmd) SNT_PP_REPEAT_FROM_TO_M_3_I(z, n, SNT_PP_TUPLE_ELEM(4, 0, dfmd), SNT_PP_TUPLE_ELEM(4, 1, dfmd), SNT_PP_TUPLE_ELEM(4, 2, dfmd), SNT_PP_TUPLE_ELEM(4, 3, dfmd))
# endif
#
# define SNT_PP_REPEAT_FROM_TO_M_1_I(z, n, d, f, m, dt) SNT_PP_REPEAT_FROM_TO_M_1_II(z, SNT_PP_ADD_D(d, n, f), m, dt)
# define SNT_PP_REPEAT_FROM_TO_M_2_I(z, n, d, f, m, dt) SNT_PP_REPEAT_FROM_TO_M_2_II(z, SNT_PP_ADD_D(d, n, f), m, dt)
# define SNT_PP_REPEAT_FROM_TO_M_3_I(z, n, d, f, m, dt) SNT_PP_REPEAT_FROM_TO_M_3_II(z, SNT_PP_ADD_D(d, n, f), m, dt)
#
# define SNT_PP_REPEAT_FROM_TO_M_1_II(z, n, m, dt) m(z, n, dt)
# define SNT_PP_REPEAT_FROM_TO_M_2_II(z, n, m, dt) m(z, n, dt)
# define SNT_PP_REPEAT_FROM_TO_M_3_II(z, n, m, dt) m(z, n, dt)
#
# endif
