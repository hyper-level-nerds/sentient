//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_FOR_EACH_H
# define SENTIENT_PREPROCESSOR_SEQ_FOR_EACH_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/repetition/for.h>
# include <sentient/preprocessor/seq/seq.h>
# include <sentient/preprocessor/seq/size.h>
# include <sentient/preprocessor/seq/detail/is_empty.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_SEQ_FOR_EACH */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_FOR_EACH(macro, data, seq) SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq)
# else
#    define SNT_PP_SEQ_FOR_EACH(macro, data, seq) SNT_PP_SEQ_FOR_EACH_D(macro, data, seq)
#    define SNT_PP_SEQ_FOR_EACH_D(macro, data, seq) SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq)
# endif
#
#    define SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC(macro, data, seq) SNT_PP_FOR((macro, data, seq, SNT_PP_SEQ_SIZE(seq)), SNT_PP_SEQ_FOR_EACH_P, SNT_PP_SEQ_FOR_EACH_O, SNT_PP_SEQ_FOR_EACH_M)
#    define SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY(macro, data, seq)
#
#    define SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq) \
        SNT_PP_IIF \
            ( \
            SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC, \
            SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY \
            ) \
        (macro, data, seq) \
/**/
#
# define SNT_PP_SEQ_FOR_EACH_P(r, x) SNT_PP_TUPLE_ELEM(4, 3, x)
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_SEQ_FOR_EACH_O(r, x) SNT_PP_SEQ_FOR_EACH_O_I x
# else
#    define SNT_PP_SEQ_FOR_EACH_O(r, x) SNT_PP_SEQ_FOR_EACH_O_I(SNT_PP_TUPLE_ELEM(4, 0, x), SNT_PP_TUPLE_ELEM(4, 1, x), SNT_PP_TUPLE_ELEM(4, 2, x), SNT_PP_TUPLE_ELEM(4, 3, x))
# endif
#
# define SNT_PP_SEQ_FOR_EACH_O_I(macro, data, seq, sz) \
    SNT_PP_SEQ_FOR_EACH_O_I_DEC(macro, data, seq, SNT_PP_DEC(sz)) \
/**/
# define SNT_PP_SEQ_FOR_EACH_O_I_DEC(macro, data, seq, sz) \
    ( \
    macro, \
    data, \
    SNT_PP_IF \
        ( \
        sz, \
        SNT_PP_SEQ_FOR_EACH_O_I_TAIL, \
        SNT_PP_SEQ_FOR_EACH_O_I_NIL \
        ) \
    (seq), \
    sz \
    ) \
/**/
# define SNT_PP_SEQ_FOR_EACH_O_I_TAIL(seq) SNT_PP_SEQ_TAIL(seq)
# define SNT_PP_SEQ_FOR_EACH_O_I_NIL(seq) SNT_PP_NIL
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_SEQ_FOR_EACH_M(r, x) SNT_PP_SEQ_FOR_EACH_M_IM(r, SNT_PP_TUPLE_REM_4 x)
#    define SNT_PP_SEQ_FOR_EACH_M_IM(r, im) SNT_PP_SEQ_FOR_EACH_M_I(r, im)
# else
#    define SNT_PP_SEQ_FOR_EACH_M(r, x) SNT_PP_SEQ_FOR_EACH_M_I(r, SNT_PP_TUPLE_ELEM(4, 0, x), SNT_PP_TUPLE_ELEM(4, 1, x), SNT_PP_TUPLE_ELEM(4, 2, x), SNT_PP_TUPLE_ELEM(4, 3, x))
# endif
#
# define SNT_PP_SEQ_FOR_EACH_M_I(r, macro, data, seq, sz) macro(r, data, SNT_PP_SEQ_HEAD(seq))
#
# /* SNT_PP_SEQ_FOR_EACH_R */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_FOR_EACH_R(r, macro, data, seq) SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq)
# else
#    define SNT_PP_SEQ_FOR_EACH_R(r, macro, data, seq) SNT_PP_SEQ_FOR_EACH_R_I(r, macro, data, seq)
#    define SNT_PP_SEQ_FOR_EACH_R_I(r, macro, data, seq) SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq)
# endif
#
#    define SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC_R(r, macro, data, seq) SNT_PP_FOR_ ## r((macro, data, seq, SNT_PP_SEQ_SIZE(seq)), SNT_PP_SEQ_FOR_EACH_P, SNT_PP_SEQ_FOR_EACH_O, SNT_PP_SEQ_FOR_EACH_M)
#    define SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY_R(r, macro, data, seq)
#
#    define SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq) \
        SNT_PP_IIF \
            ( \
            SNT_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC_R, \
            SNT_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY_R \
            ) \
        (r, macro, data, seq) \
/**/
#
# endif
