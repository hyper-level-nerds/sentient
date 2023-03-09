//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_FACILITIES_OVERLOAD_H
# define SENTIENT_PREPROCESSOR_FACILITIES_OVERLOAD_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/variadic/size.h>
#
# /* SNT_PP_OVERLOAD */
#
# define SNT_PP_OVERLOAD(prefix, ...) SNT_PP_CAT(prefix, SNT_PP_VARIADIC_SIZE(__VA_ARGS__))
#
# endif
