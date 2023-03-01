# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef SENTIENT_PREPROCESSOR_VARIADIC_HAS_OPT_H
# define SENTIENT_PREPROCESSOR_VARIADIC_HAS_OPT_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_VARIADIC_HAS_OPT */
#
# if defined(__cplusplus) && __cplusplus > 201703L
#  if defined(__GNUC__) && !defined(__clang__) && __GNUC__ >= 8 && __GNUC__ < 10
#   define SNT_PP_VARIADIC_HAS_OPT() 0
#  else
#   include <sentient/preprocessor/variadic/detail/has_opt.h>
#   define SNT_PP_VARIADIC_HAS_OPT() \
  SNT_PP_VARIADIC_HAS_OPT_ELEM2(SNT_PP_VARIADIC_HAS_OPT_FUNCTION(?),) \
/**/
#  endif
# else
# define SNT_PP_VARIADIC_HAS_OPT() 0
# endif
#
# endif
