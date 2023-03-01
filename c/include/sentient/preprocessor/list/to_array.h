//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_LIST_TO_ARRAY_H
# define SENTIENT_PREPROCESSOR_LIST_TO_ARRAY_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/arithmetic/inc.h>
# include <sentient/preprocessor/config/config.h>
# include <sentient/preprocessor/control/while.h>
# include <sentient/preprocessor/list/adt.h>
# include <sentient/preprocessor/tuple/elem.h>
# include <sentient/preprocessor/tuple/rem.h>
# if SNT_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# include <sentient/preprocessor/control/iif.h>
# endif
#
# /* SNT_PP_LIST_TO_ARRAY */
#
# if SNT_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# define SNT_PP_LIST_TO_ARRAY(list) \
    SNT_PP_IIF \
        ( \
        SNT_PP_LIST_IS_NIL(list), \
        SNT_PP_LIST_TO_ARRAY_VC8ORLESS_EMPTY, \
        SNT_PP_LIST_TO_ARRAY_VC8ORLESS_DO \
        ) \
    (list) \
/**/
# define SNT_PP_LIST_TO_ARRAY_VC8ORLESS_EMPTY(list) (0,())
# define SNT_PP_LIST_TO_ARRAY_VC8ORLESS_DO(list) SNT_PP_LIST_TO_ARRAY_I(SNT_PP_WHILE, list)
# else
# define SNT_PP_LIST_TO_ARRAY(list) SNT_PP_LIST_TO_ARRAY_I(SNT_PP_WHILE, list)
# endif

# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
#    define SNT_PP_LIST_TO_ARRAY_I(w, list) \
        SNT_PP_LIST_TO_ARRAY_II(((SNT_PP_TUPLE_REM_CTOR( \
            3, \
            w(SNT_PP_LIST_TO_ARRAY_P, SNT_PP_LIST_TO_ARRAY_O, (list, 1, (~))) \
        )))) \
        /**/
#    define SNT_PP_LIST_TO_ARRAY_II(p) SNT_PP_LIST_TO_ARRAY_II_B(p)
#    define SNT_PP_LIST_TO_ARRAY_II_B(p) SNT_PP_LIST_TO_ARRAY_II_C ## p
#    define SNT_PP_LIST_TO_ARRAY_II_C(p) SNT_PP_LIST_TO_ARRAY_III p
# else
#    define SNT_PP_LIST_TO_ARRAY_I(w, list) \
        SNT_PP_LIST_TO_ARRAY_II(SNT_PP_TUPLE_REM_CTOR( \
            3, \
            w(SNT_PP_LIST_TO_ARRAY_P, SNT_PP_LIST_TO_ARRAY_O, (list, 1, (~))) \
        )) \
        /**/
#    define SNT_PP_LIST_TO_ARRAY_II(im) SNT_PP_LIST_TO_ARRAY_III(im)
# endif
# define SNT_PP_LIST_TO_ARRAY_III(list, size, tuple) (SNT_PP_DEC(size), SNT_PP_LIST_TO_ARRAY_IV tuple)
# define SNT_PP_LIST_TO_ARRAY_IV(_, ...) (__VA_ARGS__)
# define SNT_PP_LIST_TO_ARRAY_P(d, state) SNT_PP_LIST_IS_CONS(SNT_PP_TUPLE_ELEM(3, 0, state))
# define SNT_PP_LIST_TO_ARRAY_O(d, state) SNT_PP_LIST_TO_ARRAY_O_I state
# define SNT_PP_LIST_TO_ARRAY_O_I(list, size, tuple) (SNT_PP_LIST_REST(list), SNT_PP_INC(size), (SNT_PP_TUPLE_REM(size) tuple, SNT_PP_LIST_FIRST(list)))
#
# /* SNT_PP_LIST_TO_ARRAY_D */
#
# if SNT_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# define SNT_PP_LIST_TO_ARRAY_D(d, list) \
    SNT_PP_IIF \
        ( \
        SNT_PP_LIST_IS_NIL(list), \
        SNT_PP_LIST_TO_ARRAY_D_VC8ORLESS_EMPTY, \
        SNT_PP_LIST_TO_ARRAY_D_VC8ORLESS_DO \
        ) \
    (d, list) \
/**/
# define SNT_PP_LIST_TO_ARRAY_D_VC8ORLESS_EMPTY(d, list) (0,())
# define SNT_PP_LIST_TO_ARRAY_D_VC8ORLESS_DO(d, list) SNT_PP_LIST_TO_ARRAY_I(SNT_PP_WHILE_ ## d, list)
# else
# define SNT_PP_LIST_TO_ARRAY_D(d, list) SNT_PP_LIST_TO_ARRAY_I(SNT_PP_WHILE_ ## d, list)
# endif
#
# endif /* SENTIENT_PREPROCESSOR_LIST_TO_ARRAY_H */
