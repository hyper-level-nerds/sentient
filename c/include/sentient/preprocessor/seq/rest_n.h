//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_REST_N_H
# define SENTIENT_PREPROCESSOR_SEQ_REST_N_H
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/comparison/not_equal.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/logical/bitand.h>
# include <sentient/preprocessor/seq/detail/is_empty.h>
# include <sentient/preprocessor/seq/detail/split.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_SEQ_REST_N */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_REST_N(n, seq) SNT_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, SNT_PP_SEQ_DETAIL_EMPTY_SIZE(seq))
# else
#    define SNT_PP_SEQ_REST_N(n, seq) SNT_PP_SEQ_REST_N_I(n, seq)
#    define SNT_PP_SEQ_REST_N_I(n, seq) SNT_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, SNT_PP_SEQ_DETAIL_EMPTY_SIZE(seq))
# endif
#
#    define SNT_PP_SEQ_REST_N_DETAIL_EXEC_NO_MATCH(n, seq)
#    define SNT_PP_SEQ_REST_N_DETAIL_EXEC_MATCH(n, seq) \
            SNT_PP_TUPLE_ELEM(2, 1, SNT_PP_SEQ_SPLIT(SNT_PP_INC(n), SNT_PP_IDENTITY( (nil) seq )))() \
/**/
#    define SNT_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, size) \
        SNT_PP_IIF \
            ( \
            SNT_PP_BITAND \
                ( \
                SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size), \
                SNT_PP_NOT_EQUAL(n,size) \
                ), \
            SNT_PP_SEQ_REST_N_DETAIL_EXEC_MATCH, \
            SNT_PP_SEQ_REST_N_DETAIL_EXEC_NO_MATCH \
            ) \
        (n, seq)  \
/**/
#
# endif
