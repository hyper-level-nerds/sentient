//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_FILTER_H
# define SENTIENT_PREPROCESSOR_LIST_FILTER_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/list/fold_right.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_FILTER */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FILTER(pred, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT(SNT_PP_LIST_FILTER_O, (pred, data, SNT_PP_NIL), list))
# else
#    define SNT_PP_LIST_FILTER(pred, data, list) SNT_PP_LIST_FILTER_I(pred, data, list)
#    define SNT_PP_LIST_FILTER_I(pred, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT(SNT_PP_LIST_FILTER_O, (pred, data, SNT_PP_NIL), list))
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FILTER_O(d, pdr, elem) SNT_PP_LIST_FILTER_O_D(d, SNT_PP_TUPLE_ELEM(3, 0, pdr), SNT_PP_TUPLE_ELEM(3, 1, pdr), SNT_PP_TUPLE_ELEM(3, 2, pdr), elem)
# else
#    define SNT_PP_LIST_FILTER_O(d, pdr, elem) SNT_PP_LIST_FILTER_O_I(d, SNT_PP_TUPLE_REM_3 pdr, elem)
#    define SNT_PP_LIST_FILTER_O_I(d, im, elem) SNT_PP_LIST_FILTER_O_D(d, im, elem)
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_DMC()
#    define SNT_PP_LIST_FILTER_O_D(d, pred, data, res, elem) (pred, data, SNT_PP_IF(pred(d, data, elem), (elem, res), res))
# else
#    define SNT_PP_LIST_FILTER_O_D(d, pred, data, res, elem) (pred, data, SNT_PP_IF(pred##(d, data, elem), (elem, res), res))
# endif
#
# /* SNT_PP_LIST_FILTER_D */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FILTER_D(d, pred, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT_ ## d(SNT_PP_LIST_FILTER_O, (pred, data, SNT_PP_NIL), list))
# else
#    define SNT_PP_LIST_FILTER_D(d, pred, data, list) SNT_PP_LIST_FILTER_D_I(d, pred, data, list)
#    define SNT_PP_LIST_FILTER_D_I(d, pred, data, list) SNT_PP_TUPLE_ELEM(3, 2, SNT_PP_LIST_FOLD_RIGHT_ ## d(SNT_PP_LIST_FILTER_O, (pred, data, SNT_PP_NIL), list))
# endif
#
# endif
