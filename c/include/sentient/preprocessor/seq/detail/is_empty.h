# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2015.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_DETAIL_IS_EMPTY_H
# define SENTIENT_PREPROCESSOR_SEQ_DETAIL_IS_EMPTY_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/logical/bool.h>
# include <sentient/preprocessor/logical/compl.h>
# include <sentient/preprocessor/seq/size.h>
#
/* An empty seq is one that is just SNT_PP_SEQ_NIL */
#
# define SNT_PP_SEQ_DETAIL_IS_EMPTY(seq) \
    SNT_PP_COMPL \
        ( \
        SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
        ) \
/**/
#
# define SNT_PP_SEQ_DETAIL_IS_EMPTY_SIZE(size) \
    SNT_PP_COMPL \
        ( \
        SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
        ) \
/**/
#
# define SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
    SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(SNT_PP_SEQ_DETAIL_EMPTY_SIZE(seq)) \
/**/
#
# define SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
    SNT_PP_BOOL(size) \
/**/
#
# define SNT_PP_SEQ_DETAIL_EMPTY_SIZE(seq) \
    SNT_PP_DEC(SNT_PP_SEQ_SIZE(seq (nil))) \
/**/
#
# endif
