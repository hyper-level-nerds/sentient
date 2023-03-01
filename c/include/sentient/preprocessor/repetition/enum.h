//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_REPETITION_ENUM_H
# define SENTIENT_PREPROCESSOR_REPETITION_ENUM_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/debug/error.h>
# include <sentient/preprocessor/detail/auto_rec.h>
# include <sentient/preprocessor/punctuation/comma_if.h>
# include <sentient/preprocessor/repetition/repeat.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_ENUM */
#
# if 0
#    define SNT_PP_ENUM(count, macro, data)
# endif
#
# define SNT_PP_ENUM SNT_PP_CAT(SNT_PP_ENUM_, SNT_PP_AUTO_REC(SNT_PP_REPEAT_P, 4))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_1(c, m, d) SNT_PP_REPEAT_1(c, SNT_PP_ENUM_M_1, (m, d))
#    define SNT_PP_ENUM_2(c, m, d) SNT_PP_REPEAT_2(c, SNT_PP_ENUM_M_2, (m, d))
#    define SNT_PP_ENUM_3(c, m, d) SNT_PP_REPEAT_3(c, SNT_PP_ENUM_M_3, (m, d))
# else
#    define SNT_PP_ENUM_1(c, m, d) SNT_PP_ENUM_1_I(c, m, d)
#    define SNT_PP_ENUM_2(c, m, d) SNT_PP_ENUM_2_I(c, m, d)
#    define SNT_PP_ENUM_3(c, m, d) SNT_PP_ENUM_3_I(c, m, d)
#    define SNT_PP_ENUM_1_I(c, m, d) SNT_PP_REPEAT_1(c, SNT_PP_ENUM_M_1, (m, d))
#    define SNT_PP_ENUM_2_I(c, m, d) SNT_PP_REPEAT_2(c, SNT_PP_ENUM_M_2, (m, d))
#    define SNT_PP_ENUM_3_I(c, m, d) SNT_PP_REPEAT_3(c, SNT_PP_ENUM_M_3, (m, d))
# endif
#
# define SNT_PP_ENUM_4(c, m, d) SNT_PP_ERROR(0x0003)
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ENUM_M_1(z, n, md) SNT_PP_ENUM_M_1_IM(z, n, SNT_PP_TUPLE_REM_2 md)
#    define SNT_PP_ENUM_M_2(z, n, md) SNT_PP_ENUM_M_2_IM(z, n, SNT_PP_TUPLE_REM_2 md)
#    define SNT_PP_ENUM_M_3(z, n, md) SNT_PP_ENUM_M_3_IM(z, n, SNT_PP_TUPLE_REM_2 md)
#    define SNT_PP_ENUM_M_1_IM(z, n, im) SNT_PP_ENUM_M_1_I(z, n, im)
#    define SNT_PP_ENUM_M_2_IM(z, n, im) SNT_PP_ENUM_M_2_I(z, n, im)
#    define SNT_PP_ENUM_M_3_IM(z, n, im) SNT_PP_ENUM_M_3_I(z, n, im)
# else
#    define SNT_PP_ENUM_M_1(z, n, md) SNT_PP_ENUM_M_1_I(z, n, SNT_PP_TUPLE_ELEM(2, 0, md), SNT_PP_TUPLE_ELEM(2, 1, md))
#    define SNT_PP_ENUM_M_2(z, n, md) SNT_PP_ENUM_M_2_I(z, n, SNT_PP_TUPLE_ELEM(2, 0, md), SNT_PP_TUPLE_ELEM(2, 1, md))
#    define SNT_PP_ENUM_M_3(z, n, md) SNT_PP_ENUM_M_3_I(z, n, SNT_PP_TUPLE_ELEM(2, 0, md), SNT_PP_TUPLE_ELEM(2, 1, md))
# endif
#
# define SNT_PP_ENUM_M_1_I(z, n, m, d) SNT_PP_COMMA_IF(n) m(z, n, d)
# define SNT_PP_ENUM_M_2_I(z, n, m, d) SNT_PP_COMMA_IF(n) m(z, n, d)
# define SNT_PP_ENUM_M_3_I(z, n, m, d) SNT_PP_COMMA_IF(n) m(z, n, d)
#
# endif
