//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_FACILITIES_VA_OPT_H
# define SENTIENT_PREPROCESSOR_FACILITIES_VA_OPT_H
# include <sentient/preprocessor/variadic/has_opt.h>
# if SNT_PP_VARIADIC_HAS_OPT()
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/check_empty.h>
# include <sentient/preprocessor/tuple/rem.h>
# define SNT_PP_VA_OPT_IMPL(atuple) \
    SNT_PP_TUPLE_REM() atuple       \
/**/
# define SNT_PP_VA_OPT(rdata,rempty,...)     \
    SNT_PP_VA_OPT_IMPL                       \
        (                                      \
        SNT_PP_IIF                           \
            (                                  \
            SNT_PP_CHECK_EMPTY(__VA_ARGS__), \
            rempty,                            \
            rdata                              \
            )                                  \
        )                                      \
/**/
# endif /* SNT_PP_VARIADIC_HAS_OPT() */
# endif /* SENTIENT_PREPROCESSOR_FACILITIES_VA_OPT_H */
