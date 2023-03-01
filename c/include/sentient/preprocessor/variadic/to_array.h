//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_VARIADIC_TO_ARRAY_H
# define SENTIENT_PREPROCESSOR_VARIADIC_TO_ARRAY_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/tuple/to_array.h>
# include <sentient/preprocessor/variadic/has_opt.h>
# include <sentient/preprocessor/variadic/size.h>
#
# /* SNT_PP_VARIADIC_TO_ARRAY */
#
# if SNT_PP_VARIADIC_HAS_OPT()
#     if SNT_PP_VARIADICS_MSVC
#         define SNT_PP_VARIADIC_TO_ARRAY_NON_EMPTY(...) SNT_PP_TUPLE_TO_ARRAY_2(SNT_PP_VARIADIC_SIZE(__VA_ARGS__),(__VA_ARGS__))
#     else
#         define SNT_PP_VARIADIC_TO_ARRAY_NON_EMPTY(...) SNT_PP_TUPLE_TO_ARRAY((__VA_ARGS__))
#     endif
#     define SNT_PP_VARIADIC_TO_ARRAY_EMPTY(...) (0,())
#     define SNT_PP_VARIADIC_TO_ARRAY(...) SNT_PP_IF(SNT_PP_VARIADIC_SIZE(__VA_ARGS__),SNT_PP_VARIADIC_TO_ARRAY_NON_EMPTY,SNT_PP_VARIADIC_TO_ARRAY_EMPTY)(__VA_ARGS__)
# elif SNT_PP_VARIADICS_MSVC
#     define SNT_PP_VARIADIC_TO_ARRAY(...) SNT_PP_TUPLE_TO_ARRAY_2(SNT_PP_VARIADIC_SIZE(__VA_ARGS__),(__VA_ARGS__))
# else
#     define SNT_PP_VARIADIC_TO_ARRAY(...) SNT_PP_TUPLE_TO_ARRAY((__VA_ARGS__))
# endif
#
# endif
