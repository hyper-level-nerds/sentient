# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2012.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_VARIADIC_SEQ_TO_SEQ_H
# define SENTIENT_PREPROCESSOR_SEQ_VARIADIC_SEQ_TO_SEQ_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_VARIADIC_SEQ_TO_SEQ */
#
#    define SNT_PP_VARIADIC_SEQ_TO_SEQ(vseq) SNT_PP_CAT(SNT_PP_VARIADIC_SEQ_TO_SEQ_A vseq, 0)
#    define SNT_PP_VARIADIC_SEQ_TO_SEQ_A(...) ((__VA_ARGS__)) SNT_PP_VARIADIC_SEQ_TO_SEQ_B
#    define SNT_PP_VARIADIC_SEQ_TO_SEQ_B(...) ((__VA_ARGS__)) SNT_PP_VARIADIC_SEQ_TO_SEQ_A
#    define SNT_PP_VARIADIC_SEQ_TO_SEQ_A0
#    define SNT_PP_VARIADIC_SEQ_TO_SEQ_B0
#
# endif
