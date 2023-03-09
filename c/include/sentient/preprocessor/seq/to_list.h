//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_SEQ_TO_LIST_H
# define SENTIENT_PREPROCESSOR_SEQ_TO_LIST_H
#
# include <sentient/preprocessor/punctuation/comma.h>
# include <sentient/preprocessor/punctuation/paren.h>
# include <sentient/preprocessor/seq/detail/binary_transform.h>
#
# /* SNT_PP_SEQ_TO_LIST */
#
# if SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MSVC()
# include <sentient/preprocessor/seq/size.h>
# include <sentient/preprocessor/seq/detail/to_list_msvc.h>
# define SNT_PP_SEQ_TO_LIST(seq) \
    SNT_PP_SEQ_DETAIL_TO_LIST_MSVC \
        ( \
        SNT_PP_SEQ_TO_LIST_I(SNT_PP_SEQ_BINARY_TRANSFORM(seq)), \
        SNT_PP_SEQ_SIZE(seq) \
        ) \
/**/
# else
# define SNT_PP_SEQ_TO_LIST(seq) SNT_PP_SEQ_TO_LIST_I(SNT_PP_SEQ_BINARY_TRANSFORM(seq))
# endif
# define SNT_PP_SEQ_TO_LIST_I(bseq) SNT_PP_SEQ_TO_LIST_A bseq SNT_PP_NIL SNT_PP_SEQ_TO_LIST_B bseq
# define SNT_PP_SEQ_TO_LIST_A(m, e) m(SNT_PP_LPAREN() e SNT_PP_COMMA() SNT_PP_SEQ_TO_LIST_A_ID)
# define SNT_PP_SEQ_TO_LIST_A_ID() SNT_PP_SEQ_TO_LIST_A
# define SNT_PP_SEQ_TO_LIST_B(m, e) m(SNT_PP_RPAREN() SNT_PP_SEQ_TO_LIST_B_ID)
# define SNT_PP_SEQ_TO_LIST_B_ID() SNT_PP_SEQ_TO_LIST_B
#
# endif
