//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_ARRAY_DATA_H
# define SENTIENT_PREPROCESSOR_ARRAY_DATA_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/tuple/elem.h>
#
# /* SNT_PP_ARRAY_DATA */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_EDG()
#    define SNT_PP_ARRAY_DATA(array) SNT_PP_TUPLE_ELEM(2, 1, array)
# else
#    define SNT_PP_ARRAY_DATA(array) SNT_PP_ARRAY_DATA_I(array)
#    define SNT_PP_ARRAY_DATA_I(array) SNT_PP_ARRAY_DATA_II array
#    define SNT_PP_ARRAY_DATA_II(size, data) data
# endif
#
# endif
