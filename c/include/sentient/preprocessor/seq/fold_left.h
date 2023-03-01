//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_SEQ_FOLD_LEFT_H
# define SENTIENT_PREPROCESSOR_SEQ_FOLD_LEFT_H
#
# include <sentient/preprocessor/arithmetic/dec.h>
# include <sentient/preprocessor/cat.h>
# include <sentient/preprocessor/control/if.h>
# include <sentient/preprocessor/debug/error.h>
# include <sentient/preprocessor/detail/auto_rec.h>
# include <sentient/preprocessor/seq/seq.h>
# include <sentient/preprocessor/seq/size.h>
#
# /* SNT_PP_SEQ_FOLD_LEFT */
#
# if 0
#    define SNT_PP_SEQ_FOLD_LEFT(op, state, seq) ...
# endif
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# define SNT_PP_SEQ_FOLD_LEFT SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_, SNT_PP_AUTO_REC(SNT_PP_SEQ_FOLD_LEFT_P, 256))
# define SNT_PP_SEQ_FOLD_LEFT_P(n) SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_CHECK_, SNT_PP_SEQ_FOLD_LEFT_I_ ## n(SNT_PP_SEQ_FOLD_LEFT_O, SNT_PP_NIL, (nil), 1))
# define SNT_PP_SEQ_FOLD_LEFT_O(s, st, _) st
#
# define SNT_PP_SEQ_FOLD_LEFT_257(op, st, ss) SNT_PP_ERROR(0x0005)
# define SNT_PP_SEQ_FOLD_LEFT_I_257(op, st, ss, sz) SNT_PP_ERROR(0x0005)
#
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_NIL 1
#
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, sz) 0
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, sz) 0
#
# define SNT_PP_SEQ_FOLD_LEFT_F(op, st, ss, sz) st
#
# define SNT_PP_SEQ_FOLD_LEFT_1(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_2(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_3(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_4(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_5(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_6(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_7(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_8(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_9(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_10(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_11(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_12(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_13(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_14(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_15(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_16(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_17(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_18(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_19(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_20(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_21(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_22(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_23(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_24(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_25(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_26(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_27(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_28(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_29(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_30(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_31(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_32(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_33(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_34(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_35(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_36(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_37(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_38(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_39(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_40(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_41(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_42(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_43(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_44(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_45(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_46(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_47(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_48(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_49(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_50(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_51(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_52(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_53(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_54(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_55(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_56(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_57(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_58(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_59(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_60(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_61(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_62(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_63(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_64(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_65(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_66(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_67(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_68(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_69(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_70(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_71(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_72(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_73(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_74(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_75(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_76(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_77(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_78(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_79(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_80(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_81(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_82(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_83(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_84(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_85(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_86(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_87(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_88(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_89(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_90(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_91(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_92(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_93(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_94(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_95(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_96(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_97(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_98(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_99(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_100(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_101(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_102(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_103(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_104(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_105(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_106(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_107(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_108(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_109(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_110(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_111(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_112(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_113(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_114(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_115(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_116(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_117(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_118(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_119(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_120(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_121(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_122(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_123(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_124(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_125(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_126(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_127(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_128(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_129(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_130(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_131(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_132(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_133(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_134(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_135(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_136(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_137(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_138(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_139(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_140(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_141(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_142(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_143(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_144(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_145(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_146(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_147(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_148(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_149(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_150(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_151(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_152(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_153(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_154(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_155(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_156(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_157(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_158(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_159(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_160(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_161(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_162(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_163(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_164(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_165(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_166(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_167(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_168(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_169(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_170(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_171(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_172(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_173(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_174(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_175(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_176(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_177(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_178(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_179(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_180(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_181(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_182(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_183(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_184(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_185(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_186(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_187(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_188(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_189(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_190(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_191(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_192(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_193(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_194(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_195(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_196(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_197(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_198(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_199(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_200(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_201(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_202(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_203(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_204(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_205(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_206(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_207(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_208(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_209(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_210(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_211(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_212(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_213(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_214(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_215(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_216(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_217(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_218(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_219(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_220(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_221(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_222(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_223(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_224(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_225(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_226(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_227(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_228(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_229(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_230(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_231(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_232(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_233(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_234(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_235(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_236(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_237(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_238(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_239(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_240(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_241(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_242(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_243(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_244(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_245(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_246(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_247(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_248(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_249(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_250(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_251(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_252(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_253(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_254(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_255(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, SNT_PP_SEQ_SIZE(ss))
# define SNT_PP_SEQ_FOLD_LEFT_256(op, st, ss) SNT_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, SNT_PP_SEQ_SIZE(ss))
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_DMC()
#    define SNT_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_2, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(2, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_3, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(3, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_4, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(4, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_5, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(5, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_6, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(6, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_7, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(7, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_8, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(8, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_9, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(9, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_10, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(10, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_11, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(11, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_12, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(12, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_13, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(13, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_14, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(14, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_15, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(15, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_16, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(16, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_17, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(17, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_18, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(18, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_19, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(19, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_20, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(20, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_21, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(21, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_22, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(22, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_23, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(23, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_24, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(24, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_25, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(25, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_26, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(26, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_27, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(27, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_28, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(28, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_29, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(29, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_30, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(30, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_31, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(31, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_32, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(32, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_33, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(33, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_34, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(34, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_35, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(35, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_36, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(36, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_37, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(37, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_38, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(38, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_39, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(39, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_40, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(40, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_41, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(41, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_42, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(42, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_43, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(43, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_44, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(44, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_45, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(45, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_46, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(46, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_47, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(47, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_48, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(48, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_49, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(49, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_50, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(50, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_51, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(51, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_52, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(52, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_53, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(53, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_54, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(54, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_55, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(55, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_56, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(56, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_57, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(57, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_58, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(58, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_59, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(59, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_60, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(60, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_61, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(61, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_62, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(62, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_63, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(63, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_64, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(64, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_65, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(65, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_66, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(66, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_67, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(67, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_68, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(68, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_69, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(69, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_70, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(70, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_71, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(71, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_72, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(72, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_73, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(73, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_74, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(74, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_75, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(75, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_76, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(76, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_77, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(77, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_78, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(78, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_79, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(79, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_80, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(80, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_81, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(81, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_82, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(82, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_83, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(83, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_84, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(84, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_85, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(85, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_86, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(86, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_87, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(87, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_88, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(88, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_89, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(89, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_90, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(90, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_91, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(91, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_92, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(92, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_93, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(93, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_94, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(94, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_95, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(95, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_96, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(96, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_97, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(97, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_98, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(98, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_99, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(99, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_100, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(100, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_101, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(101, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_102, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(102, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_103, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(103, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_104, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(104, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_105, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(105, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_106, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(106, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_107, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(107, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_108, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(108, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_109, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(109, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_110, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(110, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_111, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(111, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_112, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(112, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_113, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(113, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_114, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(114, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_115, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(115, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_116, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(116, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_117, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(117, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_118, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(118, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_119, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(119, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_120, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(120, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_121, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(121, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_122, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(122, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_123, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(123, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_124, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(124, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_125, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(125, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_126, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(126, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_127, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(127, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_128, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(128, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_129, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(129, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_130, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(130, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_131, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(131, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_132, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(132, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_133, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(133, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_134, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(134, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_135, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(135, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_136, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(136, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_137, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(137, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_138, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(138, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_139, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(139, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_140, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(140, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_141, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(141, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_142, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(142, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_143, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(143, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_144, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(144, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_145, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(145, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_146, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(146, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_147, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(147, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_148, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(148, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_149, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(149, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_150, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(150, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_151, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(151, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_152, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(152, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_153, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(153, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_154, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(154, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_155, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(155, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_156, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(156, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_157, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(157, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_158, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(158, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_159, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(159, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_160, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(160, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_161, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(161, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_162, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(162, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_163, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(163, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_164, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(164, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_165, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(165, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_166, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(166, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_167, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(167, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_168, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(168, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_169, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(169, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_170, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(170, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_171, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(171, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_172, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(172, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_173, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(173, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_174, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(174, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_175, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(175, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_176, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(176, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_177, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(177, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_178, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(178, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_179, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(179, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_180, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(180, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_181, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(181, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_182, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(182, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_183, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(183, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_184, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(184, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_185, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(185, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_186, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(186, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_187, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(187, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_188, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(188, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_189, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(189, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_190, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(190, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_191, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(191, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_192, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(192, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_193, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(193, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_194, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(194, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_195, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(195, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_196, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(196, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_197, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(197, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_198, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(198, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_199, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(199, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_200, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(200, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_201, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(201, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_202, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(202, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_203, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(203, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_204, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(204, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_205, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(205, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_206, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(206, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_207, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(207, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_208, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(208, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_209, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(209, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_210, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(210, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_211, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(211, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_212, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(212, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_213, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(213, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_214, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(214, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_215, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(215, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_216, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(216, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_217, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(217, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_218, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(218, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_219, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(219, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_220, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(220, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_221, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(221, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_222, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(222, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_223, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(223, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_224, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(224, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_225, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(225, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_226, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(226, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_227, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(227, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_228, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(228, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_229, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(229, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_230, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(230, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_231, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(231, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_232, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(232, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_233, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(233, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_234, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(234, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_235, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(235, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_236, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(236, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_237, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(237, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_238, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(238, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_239, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(239, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_240, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(240, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_241, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(241, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_242, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(242, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_243, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(243, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_244, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(244, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_245, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(245, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_246, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(246, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_247, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(247, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_248, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(248, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_249, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(249, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_250, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(250, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_251, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(251, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_252, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(252, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_253, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(253, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_254, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(254, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_255, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(255, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_256, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(256, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_257, SNT_PP_SEQ_FOLD_LEFT_F)(op, op(257, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
# else
#    define SNT_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_2, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(2, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_3, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(3, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_4, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(4, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_5, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(5, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_6, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(6, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_7, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(7, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_8, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(8, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_9, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(9, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_10, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(10, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_11, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(11, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_12, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(12, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_13, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(13, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_14, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(14, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_15, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(15, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_16, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(16, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_17, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(17, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_18, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(18, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_19, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(19, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_20, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(20, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_21, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(21, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_22, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(22, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_23, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(23, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_24, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(24, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_25, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(25, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_26, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(26, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_27, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(27, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_28, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(28, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_29, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(29, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_30, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(30, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_31, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(31, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_32, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(32, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_33, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(33, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_34, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(34, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_35, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(35, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_36, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(36, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_37, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(37, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_38, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(38, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_39, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(39, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_40, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(40, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_41, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(41, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_42, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(42, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_43, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(43, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_44, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(44, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_45, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(45, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_46, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(46, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_47, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(47, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_48, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(48, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_49, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(49, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_50, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(50, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_51, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(51, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_52, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(52, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_53, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(53, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_54, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(54, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_55, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(55, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_56, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(56, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_57, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(57, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_58, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(58, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_59, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(59, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_60, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(60, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_61, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(61, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_62, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(62, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_63, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(63, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_64, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(64, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_65, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(65, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_66, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(66, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_67, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(67, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_68, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(68, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_69, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(69, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_70, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(70, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_71, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(71, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_72, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(72, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_73, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(73, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_74, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(74, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_75, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(75, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_76, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(76, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_77, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(77, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_78, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(78, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_79, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(79, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_80, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(80, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_81, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(81, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_82, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(82, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_83, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(83, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_84, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(84, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_85, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(85, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_86, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(86, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_87, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(87, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_88, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(88, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_89, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(89, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_90, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(90, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_91, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(91, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_92, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(92, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_93, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(93, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_94, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(94, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_95, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(95, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_96, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(96, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_97, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(97, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_98, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(98, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_99, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(99, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_100, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(100, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_101, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(101, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_102, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(102, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_103, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(103, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_104, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(104, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_105, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(105, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_106, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(106, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_107, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(107, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_108, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(108, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_109, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(109, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_110, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(110, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_111, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(111, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_112, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(112, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_113, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(113, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_114, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(114, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_115, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(115, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_116, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(116, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_117, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(117, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_118, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(118, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_119, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(119, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_120, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(120, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_121, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(121, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_122, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(122, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_123, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(123, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_124, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(124, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_125, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(125, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_126, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(126, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_127, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(127, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_128, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(128, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_129, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(129, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_130, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(130, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_131, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(131, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_132, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(132, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_133, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(133, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_134, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(134, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_135, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(135, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_136, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(136, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_137, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(137, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_138, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(138, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_139, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(139, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_140, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(140, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_141, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(141, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_142, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(142, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_143, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(143, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_144, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(144, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_145, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(145, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_146, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(146, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_147, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(147, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_148, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(148, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_149, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(149, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_150, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(150, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_151, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(151, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_152, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(152, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_153, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(153, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_154, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(154, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_155, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(155, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_156, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(156, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_157, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(157, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_158, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(158, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_159, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(159, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_160, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(160, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_161, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(161, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_162, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(162, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_163, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(163, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_164, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(164, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_165, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(165, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_166, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(166, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_167, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(167, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_168, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(168, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_169, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(169, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_170, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(170, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_171, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(171, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_172, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(172, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_173, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(173, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_174, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(174, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_175, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(175, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_176, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(176, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_177, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(177, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_178, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(178, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_179, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(179, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_180, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(180, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_181, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(181, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_182, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(182, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_183, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(183, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_184, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(184, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_185, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(185, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_186, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(186, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_187, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(187, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_188, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(188, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_189, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(189, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_190, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(190, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_191, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(191, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_192, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(192, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_193, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(193, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_194, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(194, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_195, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(195, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_196, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(196, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_197, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(197, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_198, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(198, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_199, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(199, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_200, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(200, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_201, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(201, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_202, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(202, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_203, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(203, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_204, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(204, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_205, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(205, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_206, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(206, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_207, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(207, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_208, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(208, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_209, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(209, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_210, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(210, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_211, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(211, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_212, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(212, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_213, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(213, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_214, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(214, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_215, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(215, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_216, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(216, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_217, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(217, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_218, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(218, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_219, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(219, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_220, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(220, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_221, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(221, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_222, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(222, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_223, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(223, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_224, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(224, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_225, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(225, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_226, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(226, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_227, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(227, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_228, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(228, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_229, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(229, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_230, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(230, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_231, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(231, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_232, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(232, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_233, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(233, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_234, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(234, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_235, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(235, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_236, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(236, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_237, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(237, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_238, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(238, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_239, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(239, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_240, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(240, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_241, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(241, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_242, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(242, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_243, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(243, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_244, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(244, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_245, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(245, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_246, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(246, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_247, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(247, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_248, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(248, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_249, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(249, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_250, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(250, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_251, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(251, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_252, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(252, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_253, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(253, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_254, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(254, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_255, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(255, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_256, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(256, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
#    define SNT_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, sz) SNT_PP_IF(SNT_PP_DEC(sz), SNT_PP_SEQ_FOLD_LEFT_I_257, SNT_PP_SEQ_FOLD_LEFT_F)(op, op##(257, st, SNT_PP_SEQ_HEAD(ss)), SNT_PP_SEQ_TAIL(ss), SNT_PP_DEC(sz))
# endif
#
# else
#
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_SEQ == 256
# define SNT_PP_SEQ_FOLD_LEFT SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_, SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_SEQ_FOLD_LEFT_P, 256)))
# elif SNT_PP_LIMIT_SEQ == 512
# define SNT_PP_SEQ_FOLD_LEFT SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_, SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_SEQ_FOLD_LEFT_P, 512)))
# elif SNT_PP_LIMIT_SEQ == 1024
# define SNT_PP_SEQ_FOLD_LEFT SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_, SNT_PP_DEC(SNT_PP_AUTO_REC(SNT_PP_SEQ_FOLD_LEFT_P, 1024)))
# else
# error Incorrect value for the SNT_PP_LIMIT_SEQ limit
# endif
#
# define SNT_PP_SEQ_FOLD_LEFT_P(n) SNT_PP_SEQ_FOLD_LEFT_P_DEC(SNT_PP_DEC(n))
# define SNT_PP_SEQ_FOLD_LEFT_P_DEC(n) SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_CHECK_, SNT_PP_CAT(SNT_PP_SEQ_FOLD_LEFT_I_,n)(SNT_PP_SEQ_FOLD_LEFT_O, SNT_PP_NIL, (nil), 1))
# define SNT_PP_SEQ_FOLD_LEFT_O(s, st, _) st
#
# if SNT_PP_LIMIT_SEQ == 256
# define SNT_PP_SEQ_FOLD_LEFT_257(op, st, ss) SNT_PP_ERROR(0x0005)
# define SNT_PP_SEQ_FOLD_LEFT_I_257(op, st, ss, sz) SNT_PP_ERROR(0x0005)
# elif SNT_PP_LIMIT_SEQ == 512
# define SNT_PP_SEQ_FOLD_LEFT_513(op, st, ss) SNT_PP_ERROR(0x0005)
# define SNT_PP_SEQ_FOLD_LEFT_I_513(op, st, ss, sz) SNT_PP_ERROR(0x0005)
# elif SNT_PP_LIMIT_SEQ == 1024
# define SNT_PP_SEQ_FOLD_LEFT_1025(op, st, ss) SNT_PP_ERROR(0x0005)
# define SNT_PP_SEQ_FOLD_LEFT_I_1025(op, st, ss, sz) SNT_PP_ERROR(0x0005)
# endif
#
# define SNT_PP_SEQ_FOLD_LEFT_CHECK_SNT_PP_NIL 1
#
# define SNT_PP_SEQ_FOLD_LEFT_F(op, st, ss, sz) st
#
# if SNT_PP_LIMIT_SEQ == 256
# include <sentient/preprocessor/seq/limits/fold_left_256.h>
# elif SNT_PP_LIMIT_SEQ == 512
# include <sentient/preprocessor/seq/limits/fold_left_256.h>
# include <sentient/preprocessor/seq/limits/fold_left_512.h>
# elif SNT_PP_LIMIT_SEQ == 1024
# include <sentient/preprocessor/seq/limits/fold_left_256.h>
# include <sentient/preprocessor/seq/limits/fold_left_512.h>
# include <sentient/preprocessor/seq/limits/fold_left_1024.h>
# endif
#
# endif
#
# endif
