//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_TUPLE_TO_ARRAY_H
# define SENTIENT_PREPROCESSOR_TUPLE_TO_ARRAY_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/facilities/overload.h>
# include <sentient/preprocessor/tuple/size.h>
# include <sentient/preprocessor/variadic/size.h>
# include <sentient/preprocessor/variadic/has_opt.h>
#
# /* SNT_PP_TUPLE_TO_ARRAY */
#
# if SNT_PP_VARIADICS_MSVC
#     define SNT_PP_TUPLE_TO_ARRAY(...) SNT_PP_TUPLE_TO_ARRAY_I(SNT_PP_OVERLOAD(SNT_PP_TUPLE_TO_ARRAY_, __VA_ARGS__), (__VA_ARGS__))
#     define SNT_PP_TUPLE_TO_ARRAY_I(m, args) SNT_PP_TUPLE_TO_ARRAY_II(m, args)
#     define SNT_PP_TUPLE_TO_ARRAY_II(m, args) SNT_PP_CAT(m ## args,)
#     define SNT_PP_TUPLE_TO_ARRAY_1(tuple) (SNT_PP_TUPLE_SIZE(tuple), tuple)
# else
#     define SNT_PP_TUPLE_TO_ARRAY(...) SNT_PP_OVERLOAD(SNT_PP_TUPLE_TO_ARRAY_, __VA_ARGS__)(__VA_ARGS__)
#     if SNT_PP_VARIADIC_HAS_OPT()
#         define SNT_PP_TUPLE_TO_ARRAY_1(tuple) SNT_PP_TUPLE_TO_ARRAY_1_SIZE(SNT_PP_VARIADIC_SIZE tuple, tuple)
#         define SNT_PP_TUPLE_TO_ARRAY_1_SIZE(size,tuple) (SNT_PP_IF(size,size,1), tuple)
#     else
#         define SNT_PP_TUPLE_TO_ARRAY_1(tuple) (SNT_PP_VARIADIC_SIZE tuple, tuple)
#     endif
# endif
# define SNT_PP_TUPLE_TO_ARRAY_2(size, tuple) (size, tuple)
#
# endif
