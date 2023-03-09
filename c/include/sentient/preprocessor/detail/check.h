//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//
#
# ifndef SENTIENT_PREPROCESSOR_DETAIL_CHECK_H
# define SENTIENT_PREPROCESSOR_DETAIL_CHECK_H
#
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_CHECK */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_CHECK(x, type) SNT_PP_CHECK_D(x, type)
# else
#    define SNT_PP_CHECK(x, type) SNT_PP_CHECK_OO((x, type))
#    define SNT_PP_CHECK_OO(par) SNT_PP_CHECK_D ## par
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC() && ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_DMC()
#    define SNT_PP_CHECK_D(x, type) SNT_PP_CHECK_1(SNT_PP_CAT(SNT_PP_CHECK_RESULT_, type x))
#    define SNT_PP_CHECK_1(chk) SNT_PP_CHECK_2(chk)
#    define SNT_PP_CHECK_2(res, _) res
# elif SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_CHECK_D(x, type) SNT_PP_CHECK_1(type x)
#    define SNT_PP_CHECK_1(chk) SNT_PP_CHECK_2(chk)
#    define SNT_PP_CHECK_2(chk) SNT_PP_CHECK_3((SNT_PP_CHECK_RESULT_ ## chk))
#    define SNT_PP_CHECK_3(im) SNT_PP_CHECK_5(SNT_PP_CHECK_4 im)
#    define SNT_PP_CHECK_4(res, _) res
#    define SNT_PP_CHECK_5(res) res
# else /* DMC */
#    define SNT_PP_CHECK_D(x, type) SNT_PP_CHECK_OO((type x))
#    define SNT_PP_CHECK_OO(par) SNT_PP_CHECK_0 ## par
#    define SNT_PP_CHECK_0(chk) SNT_PP_CHECK_1(SNT_PP_CAT(SNT_PP_CHECK_RESULT_, chk))
#    define SNT_PP_CHECK_1(chk) SNT_PP_CHECK_2(chk)
#    define SNT_PP_CHECK_2(res, _) res
# endif
#
# define SNT_PP_CHECK_RESULT_1 1, SNT_PP_NIL
#
# endif
