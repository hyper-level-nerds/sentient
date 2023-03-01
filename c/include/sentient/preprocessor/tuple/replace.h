# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2013.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_TUPLE_REPLACE_H
# define SENTIENT_PREPROCESSOR_TUPLE_REPLACE_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/array/replace.h>
# include <sentient/preprocessor/array/to_tuple.h>
# include <sentient/preprocessor/tuple/to_array.h>
#
# /* SNT_PP_TUPLE_REPLACE */
#
# define SNT_PP_TUPLE_REPLACE(tuple, i, elem) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_REPLACE(SNT_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# /* SNT_PP_TUPLE_REPLACE_D */
#
# define SNT_PP_TUPLE_REPLACE_D(d, tuple, i, elem) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_REPLACE_D(d, SNT_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# endif // SENTIENT_PREPROCESSOR_TUPLE_REPLACE_H
