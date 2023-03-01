# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2016.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
# define SENTIENT_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
#
# include <sentient/preprocessor/config/config.h>
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# define SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT(state) \
    SNT_PP_TUPLE_ELEM(2, 0, state) \
/**/
# define SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state) \
    SNT_PP_TUPLE_ELEM(2, 1, state) \
/**/
# define SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_PRED(d,state) \
    SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state) \
/**/
# define SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_OP(d,state) \
    ( \
    SNT_PP_CAT(SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT(state),), \
    SNT_PP_DEC(SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state)) \
    ) \
/**/
#
# /* SNT_PP_SEQ_DETAIL_TO_LIST_MSVC */
#
# define SNT_PP_SEQ_DETAIL_TO_LIST_MSVC(result,seqsize) \
    SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT \
        ( \
        SNT_PP_WHILE \
            ( \
            SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_PRED, \
            SNT_PP_SEQ_DETAIL_TO_LIST_MSVC_OP, \
            (result,seqsize) \
            ) \
        ) \
/**/
# endif // SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#
# endif // SENTIENT_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
