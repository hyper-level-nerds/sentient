//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_REPLACE_H
# define SENTIENT_PREPROCESSOR_SEQ_REPLACE_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/comparison/equal.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/seq/first_n.h>
# include <sentient/preprocessor/seq/rest_n.h>
# include <sentient/preprocessor/seq/size.h>
#
# /* SNT_PP_SEQ_REPLACE */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_REPLACE(seq, i, elem) SNT_PP_SEQ_FIRST_N(i, seq) (elem) SNT_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# else
#    define SNT_PP_SEQ_REPLACE(seq, i, elem) SNT_PP_SEQ_REPLACE_I(seq, i, elem)
#    define SNT_PP_SEQ_REPLACE_I(seq, i, elem) SNT_PP_SEQ_FIRST_N(i, seq) (elem) SNT_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# endif
#
#    define SNT_PP_SEQ_REPLACE_DETAIL_REST_EMPTY(seq, i)
#    define SNT_PP_SEQ_REPLACE_DETAIL_REST_VALID(seq, i) SNT_PP_SEQ_REST_N(SNT_PP_INC(i), seq)
#    define SNT_PP_SEQ_REPLACE_DETAIL_REST(seq, i) \
        SNT_PP_IIF \
            ( \
            SNT_PP_EQUAL(i,SNT_PP_DEC(SNT_PP_SEQ_SIZE(seq))), \
            SNT_PP_SEQ_REPLACE_DETAIL_REST_EMPTY, \
            SNT_PP_SEQ_REPLACE_DETAIL_REST_VALID \
            ) \
        (seq, i) \
/**/
#
# endif
