//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_SEQ_TRANSFORM_H
# define SENTIENT_PREPROCESSOR_SEQ_TRANSFORM_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/seq/fold_left.h>
# include <sentient/preprocessor/seq/seq.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_SEQ_TRANSFORM */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_TRANSFORM(op, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# else
#    define SNT_PP_SEQ_TRANSFORM(op, data, seq) SNT_PP_SEQ_TRANSFORM_I(op, data, seq)
#    define SNT_PP_SEQ_TRANSFORM_I(op, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT(SNT_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# endif
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#    define SNT_PP_SEQ_TRANSFORM_O(s, state, elem) SNT_PP_SEQ_TRANSFORM_O_IM(s, SNT_PP_TUPLE_REM_3 state, elem)
#    define SNT_PP_SEQ_TRANSFORM_O_IM(s, im, elem) SNT_PP_SEQ_TRANSFORM_O_I(s, im, elem)
# else
#    define SNT_PP_SEQ_TRANSFORM_O(s, state, elem) SNT_PP_SEQ_TRANSFORM_O_I(s, SNT_PP_TUPLE_ELEM(3, 0, state), SNT_PP_TUPLE_ELEM(3, 1, state), SNT_PP_TUPLE_ELEM(3, 2, state), elem)
# endif
#
# define SNT_PP_SEQ_TRANSFORM_O_I(s, op, data, res, elem) (op, data, res (op(s, data, elem)))
#
# /* SNT_PP_SEQ_TRANSFORM_S */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_SEQ_TRANSFORM_S(s, op, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# else
#    define SNT_PP_SEQ_TRANSFORM_S(s, op, data, seq) SNT_PP_SEQ_TRANSFORM_S_I(s, op, data, seq)
#    define SNT_PP_SEQ_TRANSFORM_S_I(s, op, data, seq) SNT_PP_SEQ_TAIL(SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_SEQ_FOLD_LEFT_ ## s(SNT_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# endif
#
# endif
