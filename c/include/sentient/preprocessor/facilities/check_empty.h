//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_FACILITIES_CHECK_EMPTY_H
# define SENTIENT_PREPROCESSOR_FACILITIES_CHECK_EMPTY_H
# include <sentient/preprocessor/variadic/has_opt.h>
# if SNT_PP_VARIADIC_HAS_OPT()
# include <sentient/preprocessor/facilities/is_empty_variadic.h>
# define SNT_PP_CHECK_EMPTY(...) SNT_PP_IS_EMPTY_OPT(__VA_ARGS__)
# endif /* SNT_PP_VARIADIC_HAS_OPT() */
# endif /* SENTIENT_PREPROCESSOR_FACILITIES_CHECK_EMPTY_H */
