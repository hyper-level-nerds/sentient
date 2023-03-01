//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_VARIADIC_TO_LIST_H
# define SENTIENT_PREPROCESSOR_VARIADIC_TO_LIST_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/tuple/to_list.h>
# include <sentient/preprocessor/variadic/has_opt.h>
# include <sentient/preprocessor/variadic/size.h>
#
# /* SNT_PP_VARIADIC_TO_LIST */
#
# if SNT_PP_VARIADIC_HAS_OPT()
#     define SNT_PP_VARIADIC_TO_LIST_NOT_EMPTY(...) SNT_PP_TUPLE_TO_LIST((__VA_ARGS__))
#     define SNT_PP_VARIADIC_TO_LIST_EMPTY(...) SNT_PP_NIL
#     define SNT_PP_VARIADIC_TO_LIST(...) SNT_PP_IF(SNT_PP_VARIADIC_SIZE(__VA_ARGS__),SNT_PP_VARIADIC_TO_LIST_NOT_EMPTY,SNT_PP_VARIADIC_TO_LIST_EMPTY)(__VA_ARGS__)
# else
#     define SNT_PP_VARIADIC_TO_LIST(...) SNT_PP_TUPLE_TO_LIST((__VA_ARGS__))
# endif
#
# endif
