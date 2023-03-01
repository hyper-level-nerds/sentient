//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#
# /* Revised by Paul Mensonides (2002-2011) */
# /* Revised by Edward Diener (2011,2014,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_TUPLE_ELEM_H
# define SENTIENT_PREPROCESSOR_TUPLE_ELEM_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/facilities/expand.h>
# include <sentient/preprocessor/facilities/overload.h>
# include <sentient/preprocessor/tuple/rem.h>
# include <sentient/preprocessor/variadic/elem.h>
# include <sentient/preprocessor/tuple/detail/is_single_return.h>
#
# if SNT_PP_VARIADICS_MSVC
#     define SNT_PP_TUPLE_ELEM(...) SNT_PP_TUPLE_ELEM_I(SNT_PP_OVERLOAD(SNT_PP_TUPLE_ELEM_O_, __VA_ARGS__), (__VA_ARGS__))
#     define SNT_PP_TUPLE_ELEM_I(m, args) SNT_PP_TUPLE_ELEM_II(m, args)
#     define SNT_PP_TUPLE_ELEM_II(m, args) SNT_PP_CAT(m ## args,)
/*
  Use SNT_PP_REM_CAT if it is a single element tuple ( which might be empty )
  else use SNT_PP_REM. This fixes a VC++ problem with an empty tuple and SNT_PP_TUPLE_ELEM
  functionality. See tuple_elem_bug_test.cxx.
*/
#     define SNT_PP_TUPLE_ELEM_O_2(n, tuple) \
         SNT_PP_VARIADIC_ELEM(n, SNT_PP_EXPAND(SNT_PP_TUPLE_IS_SINGLE_RETURN(SNT_PP_REM_CAT,SNT_PP_REM,tuple) tuple)) \
         /**/
# else
#     define SNT_PP_TUPLE_ELEM(...) SNT_PP_OVERLOAD(SNT_PP_TUPLE_ELEM_O_, __VA_ARGS__)(__VA_ARGS__)
#     define SNT_PP_TUPLE_ELEM_O_2(n, tuple) SNT_PP_VARIADIC_ELEM(n, SNT_PP_REM tuple)
# endif
# define SNT_PP_TUPLE_ELEM_O_3(size, n, tuple) SNT_PP_TUPLE_ELEM_O_2(n, tuple)
#
# /* directly used elsewhere in Boost... */
#
# define SNT_PP_TUPLE_ELEM_1_0(a) a
#
# define SNT_PP_TUPLE_ELEM_2_0(a, b) a
# define SNT_PP_TUPLE_ELEM_2_1(a, b) b
#
# define SNT_PP_TUPLE_ELEM_3_0(a, b, c) a
# define SNT_PP_TUPLE_ELEM_3_1(a, b, c) b
# define SNT_PP_TUPLE_ELEM_3_2(a, b, c) c
#
# endif
