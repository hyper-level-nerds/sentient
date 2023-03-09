//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_FACILITIES_IS_EMPTY_VARIADIC_H
# define SENTIENT_PREPROCESSOR_FACILITIES_IS_EMPTY_VARIADIC_H
#
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/punctuation/is_begin_parens.h>
# include <sentient/preprocessor/facilities/detail/is_empty.h>
#
#if SNT_PP_VARIADICS_MSVC && _MSC_VER <= 1400
#
#define SNT_PP_IS_EMPTY(param) \
    SNT_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      SNT_PP_IS_BEGIN_PARENS \
        ( \
        param \
        ) \
      ) \
      ( \
      SNT_PP_IS_EMPTY_ZERO, \
      SNT_PP_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (param) \
/**/
#define SNT_PP_IS_EMPTY_ZERO(param) 0
# else
# if defined(__cplusplus) && __cplusplus > 201703L
# include <sentient/preprocessor/variadic/has_opt.h>
#define SNT_PP_IS_EMPTY(...) \
    SNT_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      SNT_PP_VARIADIC_HAS_OPT() \
      ) \
      ( \
      SNT_PP_IS_EMPTY_OPT, \
      SNT_PP_IS_EMPTY_NO_OPT \
      ) \
    (__VA_ARGS__) \
/**/
#define SNT_PP_IS_EMPTY_FUNCTION2(...) \
    __VA_OPT__(0,) 1 \
/**/
#define SNT_PP_IS_EMPTY_FUNCTION(...) \
    SNT_PP_IS_EMPTY_FUNCTION2(__VA_ARGS__) \
/**/
#define SNT_PP_IS_EMPTY_OPT(...) \
    SNT_PP_VARIADIC_HAS_OPT_ELEM0(SNT_PP_IS_EMPTY_FUNCTION(__VA_ARGS__),) \
/**/
# else
#define SNT_PP_IS_EMPTY(...) \
    SNT_PP_IS_EMPTY_NO_OPT(__VA_ARGS__) \
/**/
# endif /* defined(__cplusplus) && __cplusplus > 201703L */
#define SNT_PP_IS_EMPTY_NO_OPT(...) \
    SNT_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      SNT_PP_IS_BEGIN_PARENS \
        ( \
        __VA_ARGS__ \
        ) \
      ) \
      ( \
      SNT_PP_IS_EMPTY_ZERO, \
      SNT_PP_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (__VA_ARGS__) \
/**/
#define SNT_PP_IS_EMPTY_ZERO(...) 0
# endif /* SNT_PP_VARIADICS_MSVC && _MSC_VER <= 1400 */
# endif /* SENTIENT_PREPROCESSOR_FACILITIES_IS_EMPTY_VARIADIC_H */
