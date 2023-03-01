# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Paul Mensonides (2011) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_LIST_TO_SEQ_H
# define SENTIENT_PREPROCESSOR_LIST_TO_SEQ_H
#
# include <sentient/preprocessor/list/for_each.h>
#
# /* SNT_PP_LIST_TO_SEQ */
#
# define SNT_PP_LIST_TO_SEQ(list) \
    SNT_PP_LIST_FOR_EACH(SNT_PP_LIST_TO_SEQ_MACRO, ~, list) \
    /**/
# define SNT_PP_LIST_TO_SEQ_MACRO(r, data, elem) (elem)
#
# /* SNT_PP_LIST_TO_SEQ_R */
#
# define SNT_PP_LIST_TO_SEQ_R(r, list) \
    SNT_PP_LIST_FOR_EACH_R(r, SNT_PP_LIST_TO_SEQ_MACRO, ~, list) \
    /**/
#
# endif /* SENTIENT_PREPROCESSOR_LIST_TO_SEQ_H */
