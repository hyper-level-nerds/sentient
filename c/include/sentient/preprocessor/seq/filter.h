//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_FILTER_H
# define SENTIENT_PREPROCESSOR_SEQ_FILTER_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/expr_if.h>
# include <sentient/preprocessor/facilities/empty.h>
# include <sentient/preprocessor/seq/fold_left.h>
# include <sentient/preprocessor/seq/seq.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_SEQ_FILTER */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_FILTER(pred, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# else
#    define SNT_PP_SEQ_FILTER(pred, data, seq) SNT_PP_SEQ_FILTER_I(pred, data, seq)
#    define SNT_PP_SEQ_FILTER_I(pred, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_SEQ_FILTER_O(s, st, elem) SNT_PP_SEQ_FILTER_O_IM(s, SNT_PP_TUPLE_REM_3 st, elem)
#    define SNT_PP_SEQ_FILTER_O_IM(s, im, elem) SNT_PP_SEQ_FILTER_O_I(s, im, elem)
# else
#    define SNT_PP_SEQ_FILTER_O(s, st, elem) SNT_PP_SEQ_FILTER_O_I(s, SNT_PP_TUPLE_ELEM(3, 0, st), SNT_PP_TUPLE_ELEM(3, 1, st), SNT_PP_TUPLE_ELEM(3, 2, st), elem)
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_DMC()
#   define SNT_PP_SEQ_FILTER_O_I(s, pred, data, res, elem) (pred, data, res SNT_PP_EXPR_IF(pred(s, data, elem), (elem)))
# else
#   define SNT_PP_SEQ_FILTER_O_I(s, pred, data, res, elem) (pred, data, res SNT_PP_EXPR_IF(pred##(s, data, elem), (elem)))
# endif
#
# /* SNT_PP_SEQ_FILTER_S */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_FILTER_S(s, pred, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# else
#    define SNT_PP_SEQ_FILTER_S(s, pred, data, seq) SNT_PP_SEQ_FILTER_S_I(s, pred, data, seq)
#    define SNT_PP_SEQ_FILTER_S_I(s, pred, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# endif
#
# endif
