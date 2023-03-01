//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_TRANSFORM_H
# define SENTIENT_PREPROCESSOR_LIST_TRANSFORM_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/fold_right.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_TRANSFORM */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_TRANSFORM(op, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT(SNT_PP_LIST_TRANSFORM_O, (op, data, SNT_PP_NIL), list))
# else
#    define SNT_PP_LIST_TRANSFORM(op, data, list) SNT_PP_LIST_TRANSFORM_I(op, data, list)
#    define SNT_PP_LIST_TRANSFORM_I(op, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT(SNT_PP_LIST_TRANSFORM_O, (op, data, SNT_PP_NIL), list))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_TRANSFORM_O(d, odr, elem) SNT_PP_LIST_TRANSFORM_O_D(d, SNT_PP_TUPLE_ELEM(3, 0, odr), SNT_PP_TUPLE_ELEM(3, 1, odr), SNT_PP_TUPLE_ELEM(3, 2, odr), elem)
# else
#    define SNT_PP_LIST_TRANSFORM_O(d, odr, elem) SNT_PP_LIST_TRANSFORM_O_I(d, SNT_PP_TUPLE_REM_3 odr, elem)
#    define SNT_PP_LIST_TRANSFORM_O_I(d, im, elem) SNT_PP_LIST_TRANSFORM_O_D(d, im, elem)
# endif
#
# define SNT_PP_LIST_TRANSFORM_O_D(d, op, data, res, elem) (op, data, (op(d, data, elem), res))
#
# /* SNT_PP_LIST_TRANSFORM_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_TRANSFORM_D(d, op, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT_ ## d(SNT_PP_LIST_TRANSFORM_O, (op, data, SNT_PP_NIL), list))
# else
#    define SNT_PP_LIST_TRANSFORM_D(d, op, data, list) SNT_PP_LIST_TRANSFORM_D_I(d, op, data, list)
#    define SNT_PP_LIST_TRANSFORM_D_I(d, op, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT_ ## d(SNT_PP_LIST_TRANSFORM_O, (op, data, SNT_PP_NIL), list))
# endif
#
# endif
