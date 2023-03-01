//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARRAY_PUSH_BACK_H
# define SENTIENT_PREPROCESSOR_ARRAY_PUSH_BACK_H
#
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/array/data.h>
# include <sentient/preprocessor/array/size.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/punctuation/comma_if.h>
# include <sentient/preprocessor/tuple/rem.h>
# include <sentient/preprocessor/array/detail/get_data.h>
#
# /* SNT_PP_ARRAY_PUSH_BACK */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ARRAY_PUSH_BACK(array, elem) SNT_PP_ARRAY_PUSH_BACK_I(SNT_PP_ARRAY_SIZE(array), SNT_PP_ARRAY_DATA(array), elem)
# else
#    define SNT_PP_ARRAY_PUSH_BACK(array, elem) SNT_PP_ARRAY_PUSH_BACK_D(array, elem)
#    define SNT_PP_ARRAY_PUSH_BACK_D(array, elem) SNT_PP_ARRAY_PUSH_BACK_I(SNT_PP_ARRAY_SIZE(array), SNT_PP_ARRAY_DATA(array), elem)
# endif
#
# define SNT_PP_ARRAY_PUSH_BACK_I(size, data, elem) (SNT_PP_INC(size), (SNT_PP_ARRAY_DETAIL_GET_DATA(size,data) SNT_PP_COMMA_IF(size) elem))
#
# endif
