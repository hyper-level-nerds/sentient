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
# ifndef SENTIENT_PREPROCESSOR_TUPLE_REMOVE_H
# define SENTIENT_PREPROCESSOR_TUPLE_REMOVE_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/array/remove.h>
# include <sentient/preprocessor/array/to_tuple.h>
# include <sentient/preprocessor/comparison/greater.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/tuple/size.h>
# include <sentient/preprocessor/tuple/to_array.h>
#
# /* SNT_PP_TUPLE_REMOVE */
#
# define SNT_PP_TUPLE_REMOVE(tuple, i) \
    SNT_PP_IIF \
        ( \
        SNT_PP_GREATER(SNT_PP_TUPLE_SIZE(tuple),1), \
        SNT_PP_TUPLE_REMOVE_EXEC, \
        SNT_PP_TUPLE_REMOVE_RETURN \
        ) \
    (tuple, i) \
/**/
#
# define SNT_PP_TUPLE_REMOVE_EXEC(tuple, i) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_REMOVE(SNT_PP_TUPLE_TO_ARRAY(tuple), i)) \
/**/
#
# define SNT_PP_TUPLE_REMOVE_RETURN(tuple, i) tuple
#
# /* SNT_PP_TUPLE_REMOVE_D */
#
# define SNT_PP_TUPLE_REMOVE_D(d, tuple, i) \
    SNT_PP_IIF \
        ( \
        SNT_PP_GREATER_D(d, SNT_PP_TUPLE_SIZE(tuple), 1), \
        SNT_PP_TUPLE_REMOVE_D_EXEC, \
        SNT_PP_TUPLE_REMOVE_D_RETURN \
        ) \
    (d, tuple, i) \
/**/
#
# define SNT_PP_TUPLE_REMOVE_D_EXEC(d, tuple, i) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_REMOVE_D(d, SNT_PP_TUPLE_TO_ARRAY(tuple), i)) \
/**/
#
# define SNT_PP_TUPLE_REMOVE_D_RETURN(d, tuple, i) tuple
#
# endif // SENTIENT_PREPROCESSOR_TUPLE_REMOVE_H
