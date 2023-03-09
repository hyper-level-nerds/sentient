//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARRAY_TO_SEQ_H
# define SENTIENT_PREPROCESSOR_ARRAY_TO_SEQ_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/tuple/to_seq.h>
#
# /* SNT_PP_ARRAY_TO_SEQ */
#
#    define SNT_PP_ARRAY_TO_SEQ(array) \
        SNT_PP_IF \
            ( \
            SNT_PP_ARRAY_SIZE(array), \
            SNT_PP_ARRAY_TO_SEQ_DO, \
            SNT_PP_ARRAY_TO_SEQ_EMPTY \
            ) \
        (array) \
/**/
#    define SNT_PP_ARRAY_TO_SEQ_EMPTY(array)
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_ARRAY_TO_SEQ_DO(array) SNT_PP_ARRAY_TO_SEQ_I(SNT_PP_TUPLE_TO_SEQ, array)
#    define SNT_PP_ARRAY_TO_SEQ_I(m, args) SNT_PP_ARRAY_TO_SEQ_II(m, args)
#    define SNT_PP_ARRAY_TO_SEQ_II(m, args) SNT_PP_CAT(m ## args,)
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_ARRAY_TO_SEQ_DO(array) SNT_PP_ARRAY_TO_SEQ_I(array)
#    define SNT_PP_ARRAY_TO_SEQ_I(array) SNT_PP_TUPLE_TO_SEQ ## array
# else
#    define SNT_PP_ARRAY_TO_SEQ_DO(array) SNT_PP_TUPLE_TO_SEQ array
# endif
#
# endif
