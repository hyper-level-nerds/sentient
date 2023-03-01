//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_FOR_EACH_H
# define SENTIENT_PREPROCESSOR_LIST_FOR_EACH_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/list/for_each_i.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
#
# /* SNT_PP_LIST_FOR_EACH */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FOR_EACH(macro, data, list) SNT_PP_LIST_FOR_EACH_I(SNT_PP_LIST_FOR_EACH_O, (macro, data), list)
# else
#    define SNT_PP_LIST_FOR_EACH(macro, data, list) SNT_PP_LIST_FOR_EACH_X(macro, data, list)
#    define SNT_PP_LIST_FOR_EACH_X(macro, data, list) SNT_PP_LIST_FOR_EACH_I(SNT_PP_LIST_FOR_EACH_O, (macro, data), list)
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FOR_EACH_O(r, md, i, elem) SNT_PP_LIST_FOR_EACH_O_D(r, SNT_PP_TUPLE_ELEM(2, 0, md), SNT_PP_TUPLE_ELEM(2, 1, md), elem)
# else
#    define SNT_PP_LIST_FOR_EACH_O(r, md, i, elem) SNT_PP_LIST_FOR_EACH_O_I(r, SNT_PP_TUPLE_REM_2 md, elem)
#    define SNT_PP_LIST_FOR_EACH_O_I(r, im, elem) SNT_PP_LIST_FOR_EACH_O_D(r, im, elem)
# endif
#
# define SNT_PP_LIST_FOR_EACH_O_D(r, m, d, elem) m(r, d, elem)
#
# /* SNT_PP_LIST_FOR_EACH_R */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_LIST_FOR_EACH_R(r, macro, data, list) SNT_PP_LIST_FOR_EACH_I_R(r, SNT_PP_LIST_FOR_EACH_O, (macro, data), list)
# else
#    define SNT_PP_LIST_FOR_EACH_R(r, macro, data, list) SNT_PP_LIST_FOR_EACH_R_X(r, macro, data, list)
#    define SNT_PP_LIST_FOR_EACH_R_X(r, macro, data, list) SNT_PP_LIST_FOR_EACH_I_R(r, SNT_PP_LIST_FOR_EACH_O, (macro, data), list)
# endif
#
# endif
