//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

#ifndef SENTIENT_PREPROCESSOR_REMOVE_PARENS_H
#define SENTIENT_PREPROCESSOR_REMOVE_PARENS_H

#include <sentient/preprocessor/config/config.h>
#include <sentient/preprocessor/control/iif.h>
#include <sentient/preprocessor/facilities/identity.h>
#include <sentient/preprocessor/punctuation/is_begin_parens.h>
#include <sentient/preprocessor/tuple/enum.h>

#define SNT_PP_REMOVE_PARENS(param) \
    SNT_PP_IIF \
      ( \
      SNT_PP_IS_BEGIN_PARENS(param), \
      SNT_PP_REMOVE_PARENS_DO, \
      SNT_PP_IDENTITY \
      ) \
    (param)() \
/**/

#define SNT_PP_REMOVE_PARENS_DO(param) \
  SNT_PP_IDENTITY(SNT_PP_TUPLE_ENUM(param)) \
/**/

#endif /* SENTIENT_PREPROCESSOR_REMOVE_PARENS_H */
