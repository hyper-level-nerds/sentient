//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2015) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_FACILITIES_IDENTITY_H
# define SENTIENT_PREPROCESSOR_FACILITIES_IDENTITY_H
#
# include <sentient/preprocessor/facilities/empty.h>
# include <sentient/preprocessor/tuple/eat.h>
#
# /* SNT_PP_IDENTITY */
#
# define SNT_PP_IDENTITY(item) item SNT_PP_EMPTY
#
# define SNT_PP_IDENTITY_N(item,n) item SNT_PP_TUPLE_EAT_N(n)
#
# endif
