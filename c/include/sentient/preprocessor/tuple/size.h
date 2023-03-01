//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_TUPLE_SIZE_H
# define SENTIENT_PREPROCESSOR_TUPLE_SIZE_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/variadic/has_opt.h>
# include <sentient/preprocessor/variadic/size.h>
#
# if SNT_PP_VARIADIC_HAS_OPT()
#     if SNT_PP_VARIADICS_MSVC
#         define SNT_PP_TUPLE_SIZE(tuple) SNT_PP_TUPLE_SIZE_CHECK(SNT_PP_CAT(SNT_PP_VARIADIC_SIZE tuple,))
#     else
#         define SNT_PP_TUPLE_SIZE(tuple) SNT_PP_TUPLE_SIZE_CHECK(SNT_PP_VARIADIC_SIZE tuple)
#     endif
#     define SNT_PP_TUPLE_SIZE_CHECK(size) SNT_PP_IF(size,size,1)
# elif SNT_PP_VARIADICS_MSVC
#     define SNT_PP_TUPLE_SIZE(tuple) SNT_PP_CAT(SNT_PP_VARIADIC_SIZE tuple,)
# else
#     define SNT_PP_TUPLE_SIZE(tuple) SNT_PP_VARIADIC_SIZE tuple
# endif
#
# endif
