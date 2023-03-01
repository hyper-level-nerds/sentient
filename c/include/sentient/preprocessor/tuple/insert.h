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
# ifndef SENTIENT_PREPROCESSOR_TUPLE_INSERT_H
# define SENTIENT_PREPROCESSOR_TUPLE_INSERT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/array/insert.h>
# include <sentient/preprocessor/array/to_tuple.h>
# include <sentient/preprocessor/tuple/to_array.h>
#
# /* SNT_PP_TUPLE_INSERT */
#
# define SNT_PP_TUPLE_INSERT(tuple, i, elem) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_INSERT(SNT_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# /* SNT_PP_TUPLE_INSERT_D */
#
# define SNT_PP_TUPLE_INSERT_D(d, tuple, i, elem) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_INSERT_D(d, SNT_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# endif // SENTIENT_PREPROCESSOR_TUPLE_INSERT_H
