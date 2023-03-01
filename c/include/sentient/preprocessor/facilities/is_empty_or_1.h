//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_FACILITIES_IS_EMPTY_OR_1_H
# define SENTIENT_PREPROCESSOR_FACILITIES_IS_EMPTY_OR_1_H
#
# include <sentient/preprocessor/control/iif.h>
# include <sentient/preprocessor/facilities/empty.h>
# include <sentient/preprocessor/facilities/identity.h>
# include <sentient/preprocessor/facilities/is_1.h>
# include <sentient/preprocessor/facilities/is_empty.h>
#
# /* SNT_PP_IS_EMPTY_OR_1 */
#
# define SNT_PP_IS_EMPTY_OR_1(x) \
    SNT_PP_IIF( \
        SNT_PP_IS_EMPTY(x SNT_PP_EMPTY()), \
        SNT_PP_IDENTITY(1), \
        SNT_PP_IS_1 \
    )(x) \
    /**/
#
# endif
