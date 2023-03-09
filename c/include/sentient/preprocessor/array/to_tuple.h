//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARRAY_TO_TUPLE_H
# define SENTIENT_PREPROCESSOR_ARRAY_TO_TUPLE_H
#
# include <sentient/preprocessor/array/data.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/control/if.h>
#
# /* SNT_PP_ARRAY_TO_TUPLE */
#
#    define SNT_PP_ARRAY_TO_TUPLE(array) \
        SNT_PP_IF \
            ( \
            SNT_PP_ARRAY_SIZE(array), \
            SNT_PP_ARRAY_DATA, \
            SNT_PP_ARRAY_TO_TUPLE_EMPTY \
            ) \
        (array) \
/**/
#    define SNT_PP_ARRAY_TO_TUPLE_EMPTY(array)
#
# endif
