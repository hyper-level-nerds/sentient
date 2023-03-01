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
# ifndef SENTIENT_PREPROCESSOR_TUPLE_POP_FRONT_H
# define SENTIENT_PREPROCESSOR_TUPLE_POP_FRONT_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/array/pop_front.h>
# include <sentient/preprocessor/array/to_tuple.h>
# include <sentient/preprocessor/comparison/greater.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/tuple/size.h>
# include <sentient/preprocessor/tuple/to_array.h>
#
#
# /* SNT_PP_TUPLE_POP_FRONT */
#
# define SNT_PP_TUPLE_POP_FRONT(tuple) \
    SNT_PP_IIF \
        ( \
        SNT_PP_GREATER(SNT_PP_TUPLE_SIZE(tuple),1), \
        SNT_PP_TUPLE_POP_FRONT_EXEC, \
        SNT_PP_TUPLE_POP_FRONT_RETURN \
        ) \
    (tuple) \
/**/
#
# define SNT_PP_TUPLE_POP_FRONT_EXEC(tuple) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_POP_FRONT(SNT_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define SNT_PP_TUPLE_POP_FRONT_RETURN(tuple) tuple
#
# /* SNT_PP_TUPLE_POP_FRONT_Z */
#
# define SNT_PP_TUPLE_POP_FRONT_Z(z, tuple) \
    SNT_PP_IIF \
        ( \
        SNT_PP_GREATER(SNT_PP_TUPLE_SIZE(tuple),1), \
        SNT_PP_TUPLE_POP_FRONT_Z_EXEC, \
        SNT_PP_TUPLE_POP_FRONT_Z_RETURN \
        ) \
    (z, tuple) \
/**/
#
# define SNT_PP_TUPLE_POP_FRONT_Z_EXEC(z, tuple) \
    SNT_PP_ARRAY_TO_TUPLE(SNT_PP_ARRAY_POP_FRONT_Z(z, SNT_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define SNT_PP_TUPLE_POP_FRONT_Z_RETURN(z, tuple) tuple
#
# endif // SENTIENT_PREPROCESSOR_TUPLE_POP_FRONT_H
