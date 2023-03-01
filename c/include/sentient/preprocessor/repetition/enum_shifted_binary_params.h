# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2005.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_REPETITION_ENUM_SHIFTED_BINARY_PARAMS_H
# define SENTIENT_PREPROCESSOR_REPETITION_ENUM_SHIFTED_BINARY_PARAMS_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/punctuation/comma_if.h>
# include <sentient/preprocessor/repetition/repeat.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_ENUM_SHIFTED_BINARY_PARAMS */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS(count, p1, p2) SNT_PP_REPEAT(SNT_PP_DEC(count), SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# else
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS(count, p1, p2) SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_I(count, p1, p2)
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_I(count, p1, p2) SNT_PP_REPEAT(SNT_PP_DEC(count), SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M(z, n, pp) SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M_IM(z, n, SNT_PP_TUPLE_REM_2 pp)
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M_IM(z, n, im) SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, im)
# else
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M(z, n, pp) SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, SNT_PP_TUPLE_ELEM(2, 0, pp), SNT_PP_TUPLE_ELEM(2, 1, pp))
# endif
#
# define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, p1, p2) SNT_PP_COMMA_IF(n) SNT_PP_CAT(p1, SNT_PP_INC(n)) SNT_PP_CAT(p2, SNT_PP_INC(n))
#
# /* SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_Z */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_Z(z, count, p1, p2) SNT_PP_REPEAT_ ## z(SNT_PP_DEC(count), SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# else
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_Z(z, count, p1, p2) SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_Z_I(z, count, p1, p2)
#    define SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_Z_I(z, count, p1, p2) SNT_PP_REPEAT_ ## z(SNT_PP_DEC(count), SNT_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# endif
#
# endif
