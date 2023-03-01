# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_DETAIL_BINARY_TRANSFORM_H
# define SENTIENT_PREPROCESSOR_SEQ_DETAIL_BINARY_TRANSFORM_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/tuple/eat.h>
# include <sentient/preprocessor/tuple/rem.h>
# include <sentient/preprocessor/variadic/detail/is_single_return.h>
#
# /* SNT_PP_SEQ_BINARY_TRANSFORM */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_SEQ_BINARY_TRANSFORM(seq) SNT_PP_SEQ_BINARY_TRANSFORM_I(, seq)
#    define SNT_PP_SEQ_BINARY_TRANSFORM_I(p, seq) SNT_PP_SEQ_BINARY_TRANSFORM_II(p ## seq)
#    define SNT_PP_SEQ_BINARY_TRANSFORM_II(seq) SNT_PP_SEQ_BINARY_TRANSFORM_III(seq)
#    define SNT_PP_SEQ_BINARY_TRANSFORM_III(seq) SNT_PP_CAT(SNT_PP_SEQ_BINARY_TRANSFORM_A seq, 0)
# else
#    define SNT_PP_SEQ_BINARY_TRANSFORM(seq) SNT_PP_CAT(SNT_PP_SEQ_BINARY_TRANSFORM_A seq, 0)
# endif
# if SNT_PP_VARIADICS_MSVC
#    define SNT_PP_SEQ_BINARY_TRANSFORM_REM(data) data
#    define SNT_PP_SEQ_BINARY_TRANSFORM_A(...) (SNT_PP_SEQ_BINARY_TRANSFORM_REM, __VA_ARGS__)() SNT_PP_SEQ_BINARY_TRANSFORM_B
#    define SNT_PP_SEQ_BINARY_TRANSFORM_B(...) (SNT_PP_SEQ_BINARY_TRANSFORM_REM, __VA_ARGS__)() SNT_PP_SEQ_BINARY_TRANSFORM_A
# else
#    define SNT_PP_SEQ_BINARY_TRANSFORM_A(...) (SNT_PP_REM, __VA_ARGS__)() SNT_PP_SEQ_BINARY_TRANSFORM_B
#    define SNT_PP_SEQ_BINARY_TRANSFORM_B(...) (SNT_PP_REM, __VA_ARGS__)() SNT_PP_SEQ_BINARY_TRANSFORM_A
# endif
# define SNT_PP_SEQ_BINARY_TRANSFORM_A0 (SNT_PP_EAT, ?)
# define SNT_PP_SEQ_BINARY_TRANSFORM_B0 (SNT_PP_EAT, ?)
#
# endif
