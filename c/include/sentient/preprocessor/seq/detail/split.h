//
// Copyright (c) 2016-2019 Jin (jayjintheprogrammer@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_SEQ_DETAIL_SPLIT_H
# define SENTIENT_PREPROCESSOR_SEQ_DETAIL_SPLIT_H
#
# include <sentient/preprocessor/config/config.h>
#
# /* SNT_PP_SEQ_SPLIT */
#
# define SNT_PP_SEQ_SPLIT(n, seq) SNT_PP_SEQ_SPLIT_D(n, seq)
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_SEQ_SPLIT_D(n, seq) (SNT_PP_SEQ_SPLIT_ ## n seq)
# else
#    define SNT_PP_SEQ_SPLIT_D(n, seq) (SNT_PP_SEQ_SPLIT_ ## n ## seq)
# endif
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# define SNT_PP_SEQ_SPLIT_1(x) (x),
# define SNT_PP_SEQ_SPLIT_2(x) (x) SNT_PP_SEQ_SPLIT_1
# define SNT_PP_SEQ_SPLIT_3(x) (x) SNT_PP_SEQ_SPLIT_2
# define SNT_PP_SEQ_SPLIT_4(x) (x) SNT_PP_SEQ_SPLIT_3
# define SNT_PP_SEQ_SPLIT_5(x) (x) SNT_PP_SEQ_SPLIT_4
# define SNT_PP_SEQ_SPLIT_6(x) (x) SNT_PP_SEQ_SPLIT_5
# define SNT_PP_SEQ_SPLIT_7(x) (x) SNT_PP_SEQ_SPLIT_6
# define SNT_PP_SEQ_SPLIT_8(x) (x) SNT_PP_SEQ_SPLIT_7
# define SNT_PP_SEQ_SPLIT_9(x) (x) SNT_PP_SEQ_SPLIT_8
# define SNT_PP_SEQ_SPLIT_10(x) (x) SNT_PP_SEQ_SPLIT_9
# define SNT_PP_SEQ_SPLIT_11(x) (x) SNT_PP_SEQ_SPLIT_10
# define SNT_PP_SEQ_SPLIT_12(x) (x) SNT_PP_SEQ_SPLIT_11
# define SNT_PP_SEQ_SPLIT_13(x) (x) SNT_PP_SEQ_SPLIT_12
# define SNT_PP_SEQ_SPLIT_14(x) (x) SNT_PP_SEQ_SPLIT_13
# define SNT_PP_SEQ_SPLIT_15(x) (x) SNT_PP_SEQ_SPLIT_14
# define SNT_PP_SEQ_SPLIT_16(x) (x) SNT_PP_SEQ_SPLIT_15
# define SNT_PP_SEQ_SPLIT_17(x) (x) SNT_PP_SEQ_SPLIT_16
# define SNT_PP_SEQ_SPLIT_18(x) (x) SNT_PP_SEQ_SPLIT_17
# define SNT_PP_SEQ_SPLIT_19(x) (x) SNT_PP_SEQ_SPLIT_18
# define SNT_PP_SEQ_SPLIT_20(x) (x) SNT_PP_SEQ_SPLIT_19
# define SNT_PP_SEQ_SPLIT_21(x) (x) SNT_PP_SEQ_SPLIT_20
# define SNT_PP_SEQ_SPLIT_22(x) (x) SNT_PP_SEQ_SPLIT_21
# define SNT_PP_SEQ_SPLIT_23(x) (x) SNT_PP_SEQ_SPLIT_22
# define SNT_PP_SEQ_SPLIT_24(x) (x) SNT_PP_SEQ_SPLIT_23
# define SNT_PP_SEQ_SPLIT_25(x) (x) SNT_PP_SEQ_SPLIT_24
# define SNT_PP_SEQ_SPLIT_26(x) (x) SNT_PP_SEQ_SPLIT_25
# define SNT_PP_SEQ_SPLIT_27(x) (x) SNT_PP_SEQ_SPLIT_26
# define SNT_PP_SEQ_SPLIT_28(x) (x) SNT_PP_SEQ_SPLIT_27
# define SNT_PP_SEQ_SPLIT_29(x) (x) SNT_PP_SEQ_SPLIT_28
# define SNT_PP_SEQ_SPLIT_30(x) (x) SNT_PP_SEQ_SPLIT_29
# define SNT_PP_SEQ_SPLIT_31(x) (x) SNT_PP_SEQ_SPLIT_30
# define SNT_PP_SEQ_SPLIT_32(x) (x) SNT_PP_SEQ_SPLIT_31
# define SNT_PP_SEQ_SPLIT_33(x) (x) SNT_PP_SEQ_SPLIT_32
# define SNT_PP_SEQ_SPLIT_34(x) (x) SNT_PP_SEQ_SPLIT_33
# define SNT_PP_SEQ_SPLIT_35(x) (x) SNT_PP_SEQ_SPLIT_34
# define SNT_PP_SEQ_SPLIT_36(x) (x) SNT_PP_SEQ_SPLIT_35
# define SNT_PP_SEQ_SPLIT_37(x) (x) SNT_PP_SEQ_SPLIT_36
# define SNT_PP_SEQ_SPLIT_38(x) (x) SNT_PP_SEQ_SPLIT_37
# define SNT_PP_SEQ_SPLIT_39(x) (x) SNT_PP_SEQ_SPLIT_38
# define SNT_PP_SEQ_SPLIT_40(x) (x) SNT_PP_SEQ_SPLIT_39
# define SNT_PP_SEQ_SPLIT_41(x) (x) SNT_PP_SEQ_SPLIT_40
# define SNT_PP_SEQ_SPLIT_42(x) (x) SNT_PP_SEQ_SPLIT_41
# define SNT_PP_SEQ_SPLIT_43(x) (x) SNT_PP_SEQ_SPLIT_42
# define SNT_PP_SEQ_SPLIT_44(x) (x) SNT_PP_SEQ_SPLIT_43
# define SNT_PP_SEQ_SPLIT_45(x) (x) SNT_PP_SEQ_SPLIT_44
# define SNT_PP_SEQ_SPLIT_46(x) (x) SNT_PP_SEQ_SPLIT_45
# define SNT_PP_SEQ_SPLIT_47(x) (x) SNT_PP_SEQ_SPLIT_46
# define SNT_PP_SEQ_SPLIT_48(x) (x) SNT_PP_SEQ_SPLIT_47
# define SNT_PP_SEQ_SPLIT_49(x) (x) SNT_PP_SEQ_SPLIT_48
# define SNT_PP_SEQ_SPLIT_50(x) (x) SNT_PP_SEQ_SPLIT_49
# define SNT_PP_SEQ_SPLIT_51(x) (x) SNT_PP_SEQ_SPLIT_50
# define SNT_PP_SEQ_SPLIT_52(x) (x) SNT_PP_SEQ_SPLIT_51
# define SNT_PP_SEQ_SPLIT_53(x) (x) SNT_PP_SEQ_SPLIT_52
# define SNT_PP_SEQ_SPLIT_54(x) (x) SNT_PP_SEQ_SPLIT_53
# define SNT_PP_SEQ_SPLIT_55(x) (x) SNT_PP_SEQ_SPLIT_54
# define SNT_PP_SEQ_SPLIT_56(x) (x) SNT_PP_SEQ_SPLIT_55
# define SNT_PP_SEQ_SPLIT_57(x) (x) SNT_PP_SEQ_SPLIT_56
# define SNT_PP_SEQ_SPLIT_58(x) (x) SNT_PP_SEQ_SPLIT_57
# define SNT_PP_SEQ_SPLIT_59(x) (x) SNT_PP_SEQ_SPLIT_58
# define SNT_PP_SEQ_SPLIT_60(x) (x) SNT_PP_SEQ_SPLIT_59
# define SNT_PP_SEQ_SPLIT_61(x) (x) SNT_PP_SEQ_SPLIT_60
# define SNT_PP_SEQ_SPLIT_62(x) (x) SNT_PP_SEQ_SPLIT_61
# define SNT_PP_SEQ_SPLIT_63(x) (x) SNT_PP_SEQ_SPLIT_62
# define SNT_PP_SEQ_SPLIT_64(x) (x) SNT_PP_SEQ_SPLIT_63
# define SNT_PP_SEQ_SPLIT_65(x) (x) SNT_PP_SEQ_SPLIT_64
# define SNT_PP_SEQ_SPLIT_66(x) (x) SNT_PP_SEQ_SPLIT_65
# define SNT_PP_SEQ_SPLIT_67(x) (x) SNT_PP_SEQ_SPLIT_66
# define SNT_PP_SEQ_SPLIT_68(x) (x) SNT_PP_SEQ_SPLIT_67
# define SNT_PP_SEQ_SPLIT_69(x) (x) SNT_PP_SEQ_SPLIT_68
# define SNT_PP_SEQ_SPLIT_70(x) (x) SNT_PP_SEQ_SPLIT_69
# define SNT_PP_SEQ_SPLIT_71(x) (x) SNT_PP_SEQ_SPLIT_70
# define SNT_PP_SEQ_SPLIT_72(x) (x) SNT_PP_SEQ_SPLIT_71
# define SNT_PP_SEQ_SPLIT_73(x) (x) SNT_PP_SEQ_SPLIT_72
# define SNT_PP_SEQ_SPLIT_74(x) (x) SNT_PP_SEQ_SPLIT_73
# define SNT_PP_SEQ_SPLIT_75(x) (x) SNT_PP_SEQ_SPLIT_74
# define SNT_PP_SEQ_SPLIT_76(x) (x) SNT_PP_SEQ_SPLIT_75
# define SNT_PP_SEQ_SPLIT_77(x) (x) SNT_PP_SEQ_SPLIT_76
# define SNT_PP_SEQ_SPLIT_78(x) (x) SNT_PP_SEQ_SPLIT_77
# define SNT_PP_SEQ_SPLIT_79(x) (x) SNT_PP_SEQ_SPLIT_78
# define SNT_PP_SEQ_SPLIT_80(x) (x) SNT_PP_SEQ_SPLIT_79
# define SNT_PP_SEQ_SPLIT_81(x) (x) SNT_PP_SEQ_SPLIT_80
# define SNT_PP_SEQ_SPLIT_82(x) (x) SNT_PP_SEQ_SPLIT_81
# define SNT_PP_SEQ_SPLIT_83(x) (x) SNT_PP_SEQ_SPLIT_82
# define SNT_PP_SEQ_SPLIT_84(x) (x) SNT_PP_SEQ_SPLIT_83
# define SNT_PP_SEQ_SPLIT_85(x) (x) SNT_PP_SEQ_SPLIT_84
# define SNT_PP_SEQ_SPLIT_86(x) (x) SNT_PP_SEQ_SPLIT_85
# define SNT_PP_SEQ_SPLIT_87(x) (x) SNT_PP_SEQ_SPLIT_86
# define SNT_PP_SEQ_SPLIT_88(x) (x) SNT_PP_SEQ_SPLIT_87
# define SNT_PP_SEQ_SPLIT_89(x) (x) SNT_PP_SEQ_SPLIT_88
# define SNT_PP_SEQ_SPLIT_90(x) (x) SNT_PP_SEQ_SPLIT_89
# define SNT_PP_SEQ_SPLIT_91(x) (x) SNT_PP_SEQ_SPLIT_90
# define SNT_PP_SEQ_SPLIT_92(x) (x) SNT_PP_SEQ_SPLIT_91
# define SNT_PP_SEQ_SPLIT_93(x) (x) SNT_PP_SEQ_SPLIT_92
# define SNT_PP_SEQ_SPLIT_94(x) (x) SNT_PP_SEQ_SPLIT_93
# define SNT_PP_SEQ_SPLIT_95(x) (x) SNT_PP_SEQ_SPLIT_94
# define SNT_PP_SEQ_SPLIT_96(x) (x) SNT_PP_SEQ_SPLIT_95
# define SNT_PP_SEQ_SPLIT_97(x) (x) SNT_PP_SEQ_SPLIT_96
# define SNT_PP_SEQ_SPLIT_98(x) (x) SNT_PP_SEQ_SPLIT_97
# define SNT_PP_SEQ_SPLIT_99(x) (x) SNT_PP_SEQ_SPLIT_98
# define SNT_PP_SEQ_SPLIT_100(x) (x) SNT_PP_SEQ_SPLIT_99
# define SNT_PP_SEQ_SPLIT_101(x) (x) SNT_PP_SEQ_SPLIT_100
# define SNT_PP_SEQ_SPLIT_102(x) (x) SNT_PP_SEQ_SPLIT_101
# define SNT_PP_SEQ_SPLIT_103(x) (x) SNT_PP_SEQ_SPLIT_102
# define SNT_PP_SEQ_SPLIT_104(x) (x) SNT_PP_SEQ_SPLIT_103
# define SNT_PP_SEQ_SPLIT_105(x) (x) SNT_PP_SEQ_SPLIT_104
# define SNT_PP_SEQ_SPLIT_106(x) (x) SNT_PP_SEQ_SPLIT_105
# define SNT_PP_SEQ_SPLIT_107(x) (x) SNT_PP_SEQ_SPLIT_106
# define SNT_PP_SEQ_SPLIT_108(x) (x) SNT_PP_SEQ_SPLIT_107
# define SNT_PP_SEQ_SPLIT_109(x) (x) SNT_PP_SEQ_SPLIT_108
# define SNT_PP_SEQ_SPLIT_110(x) (x) SNT_PP_SEQ_SPLIT_109
# define SNT_PP_SEQ_SPLIT_111(x) (x) SNT_PP_SEQ_SPLIT_110
# define SNT_PP_SEQ_SPLIT_112(x) (x) SNT_PP_SEQ_SPLIT_111
# define SNT_PP_SEQ_SPLIT_113(x) (x) SNT_PP_SEQ_SPLIT_112
# define SNT_PP_SEQ_SPLIT_114(x) (x) SNT_PP_SEQ_SPLIT_113
# define SNT_PP_SEQ_SPLIT_115(x) (x) SNT_PP_SEQ_SPLIT_114
# define SNT_PP_SEQ_SPLIT_116(x) (x) SNT_PP_SEQ_SPLIT_115
# define SNT_PP_SEQ_SPLIT_117(x) (x) SNT_PP_SEQ_SPLIT_116
# define SNT_PP_SEQ_SPLIT_118(x) (x) SNT_PP_SEQ_SPLIT_117
# define SNT_PP_SEQ_SPLIT_119(x) (x) SNT_PP_SEQ_SPLIT_118
# define SNT_PP_SEQ_SPLIT_120(x) (x) SNT_PP_SEQ_SPLIT_119
# define SNT_PP_SEQ_SPLIT_121(x) (x) SNT_PP_SEQ_SPLIT_120
# define SNT_PP_SEQ_SPLIT_122(x) (x) SNT_PP_SEQ_SPLIT_121
# define SNT_PP_SEQ_SPLIT_123(x) (x) SNT_PP_SEQ_SPLIT_122
# define SNT_PP_SEQ_SPLIT_124(x) (x) SNT_PP_SEQ_SPLIT_123
# define SNT_PP_SEQ_SPLIT_125(x) (x) SNT_PP_SEQ_SPLIT_124
# define SNT_PP_SEQ_SPLIT_126(x) (x) SNT_PP_SEQ_SPLIT_125
# define SNT_PP_SEQ_SPLIT_127(x) (x) SNT_PP_SEQ_SPLIT_126
# define SNT_PP_SEQ_SPLIT_128(x) (x) SNT_PP_SEQ_SPLIT_127
# define SNT_PP_SEQ_SPLIT_129(x) (x) SNT_PP_SEQ_SPLIT_128
# define SNT_PP_SEQ_SPLIT_130(x) (x) SNT_PP_SEQ_SPLIT_129
# define SNT_PP_SEQ_SPLIT_131(x) (x) SNT_PP_SEQ_SPLIT_130
# define SNT_PP_SEQ_SPLIT_132(x) (x) SNT_PP_SEQ_SPLIT_131
# define SNT_PP_SEQ_SPLIT_133(x) (x) SNT_PP_SEQ_SPLIT_132
# define SNT_PP_SEQ_SPLIT_134(x) (x) SNT_PP_SEQ_SPLIT_133
# define SNT_PP_SEQ_SPLIT_135(x) (x) SNT_PP_SEQ_SPLIT_134
# define SNT_PP_SEQ_SPLIT_136(x) (x) SNT_PP_SEQ_SPLIT_135
# define SNT_PP_SEQ_SPLIT_137(x) (x) SNT_PP_SEQ_SPLIT_136
# define SNT_PP_SEQ_SPLIT_138(x) (x) SNT_PP_SEQ_SPLIT_137
# define SNT_PP_SEQ_SPLIT_139(x) (x) SNT_PP_SEQ_SPLIT_138
# define SNT_PP_SEQ_SPLIT_140(x) (x) SNT_PP_SEQ_SPLIT_139
# define SNT_PP_SEQ_SPLIT_141(x) (x) SNT_PP_SEQ_SPLIT_140
# define SNT_PP_SEQ_SPLIT_142(x) (x) SNT_PP_SEQ_SPLIT_141
# define SNT_PP_SEQ_SPLIT_143(x) (x) SNT_PP_SEQ_SPLIT_142
# define SNT_PP_SEQ_SPLIT_144(x) (x) SNT_PP_SEQ_SPLIT_143
# define SNT_PP_SEQ_SPLIT_145(x) (x) SNT_PP_SEQ_SPLIT_144
# define SNT_PP_SEQ_SPLIT_146(x) (x) SNT_PP_SEQ_SPLIT_145
# define SNT_PP_SEQ_SPLIT_147(x) (x) SNT_PP_SEQ_SPLIT_146
# define SNT_PP_SEQ_SPLIT_148(x) (x) SNT_PP_SEQ_SPLIT_147
# define SNT_PP_SEQ_SPLIT_149(x) (x) SNT_PP_SEQ_SPLIT_148
# define SNT_PP_SEQ_SPLIT_150(x) (x) SNT_PP_SEQ_SPLIT_149
# define SNT_PP_SEQ_SPLIT_151(x) (x) SNT_PP_SEQ_SPLIT_150
# define SNT_PP_SEQ_SPLIT_152(x) (x) SNT_PP_SEQ_SPLIT_151
# define SNT_PP_SEQ_SPLIT_153(x) (x) SNT_PP_SEQ_SPLIT_152
# define SNT_PP_SEQ_SPLIT_154(x) (x) SNT_PP_SEQ_SPLIT_153
# define SNT_PP_SEQ_SPLIT_155(x) (x) SNT_PP_SEQ_SPLIT_154
# define SNT_PP_SEQ_SPLIT_156(x) (x) SNT_PP_SEQ_SPLIT_155
# define SNT_PP_SEQ_SPLIT_157(x) (x) SNT_PP_SEQ_SPLIT_156
# define SNT_PP_SEQ_SPLIT_158(x) (x) SNT_PP_SEQ_SPLIT_157
# define SNT_PP_SEQ_SPLIT_159(x) (x) SNT_PP_SEQ_SPLIT_158
# define SNT_PP_SEQ_SPLIT_160(x) (x) SNT_PP_SEQ_SPLIT_159
# define SNT_PP_SEQ_SPLIT_161(x) (x) SNT_PP_SEQ_SPLIT_160
# define SNT_PP_SEQ_SPLIT_162(x) (x) SNT_PP_SEQ_SPLIT_161
# define SNT_PP_SEQ_SPLIT_163(x) (x) SNT_PP_SEQ_SPLIT_162
# define SNT_PP_SEQ_SPLIT_164(x) (x) SNT_PP_SEQ_SPLIT_163
# define SNT_PP_SEQ_SPLIT_165(x) (x) SNT_PP_SEQ_SPLIT_164
# define SNT_PP_SEQ_SPLIT_166(x) (x) SNT_PP_SEQ_SPLIT_165
# define SNT_PP_SEQ_SPLIT_167(x) (x) SNT_PP_SEQ_SPLIT_166
# define SNT_PP_SEQ_SPLIT_168(x) (x) SNT_PP_SEQ_SPLIT_167
# define SNT_PP_SEQ_SPLIT_169(x) (x) SNT_PP_SEQ_SPLIT_168
# define SNT_PP_SEQ_SPLIT_170(x) (x) SNT_PP_SEQ_SPLIT_169
# define SNT_PP_SEQ_SPLIT_171(x) (x) SNT_PP_SEQ_SPLIT_170
# define SNT_PP_SEQ_SPLIT_172(x) (x) SNT_PP_SEQ_SPLIT_171
# define SNT_PP_SEQ_SPLIT_173(x) (x) SNT_PP_SEQ_SPLIT_172
# define SNT_PP_SEQ_SPLIT_174(x) (x) SNT_PP_SEQ_SPLIT_173
# define SNT_PP_SEQ_SPLIT_175(x) (x) SNT_PP_SEQ_SPLIT_174
# define SNT_PP_SEQ_SPLIT_176(x) (x) SNT_PP_SEQ_SPLIT_175
# define SNT_PP_SEQ_SPLIT_177(x) (x) SNT_PP_SEQ_SPLIT_176
# define SNT_PP_SEQ_SPLIT_178(x) (x) SNT_PP_SEQ_SPLIT_177
# define SNT_PP_SEQ_SPLIT_179(x) (x) SNT_PP_SEQ_SPLIT_178
# define SNT_PP_SEQ_SPLIT_180(x) (x) SNT_PP_SEQ_SPLIT_179
# define SNT_PP_SEQ_SPLIT_181(x) (x) SNT_PP_SEQ_SPLIT_180
# define SNT_PP_SEQ_SPLIT_182(x) (x) SNT_PP_SEQ_SPLIT_181
# define SNT_PP_SEQ_SPLIT_183(x) (x) SNT_PP_SEQ_SPLIT_182
# define SNT_PP_SEQ_SPLIT_184(x) (x) SNT_PP_SEQ_SPLIT_183
# define SNT_PP_SEQ_SPLIT_185(x) (x) SNT_PP_SEQ_SPLIT_184
# define SNT_PP_SEQ_SPLIT_186(x) (x) SNT_PP_SEQ_SPLIT_185
# define SNT_PP_SEQ_SPLIT_187(x) (x) SNT_PP_SEQ_SPLIT_186
# define SNT_PP_SEQ_SPLIT_188(x) (x) SNT_PP_SEQ_SPLIT_187
# define SNT_PP_SEQ_SPLIT_189(x) (x) SNT_PP_SEQ_SPLIT_188
# define SNT_PP_SEQ_SPLIT_190(x) (x) SNT_PP_SEQ_SPLIT_189
# define SNT_PP_SEQ_SPLIT_191(x) (x) SNT_PP_SEQ_SPLIT_190
# define SNT_PP_SEQ_SPLIT_192(x) (x) SNT_PP_SEQ_SPLIT_191
# define SNT_PP_SEQ_SPLIT_193(x) (x) SNT_PP_SEQ_SPLIT_192
# define SNT_PP_SEQ_SPLIT_194(x) (x) SNT_PP_SEQ_SPLIT_193
# define SNT_PP_SEQ_SPLIT_195(x) (x) SNT_PP_SEQ_SPLIT_194
# define SNT_PP_SEQ_SPLIT_196(x) (x) SNT_PP_SEQ_SPLIT_195
# define SNT_PP_SEQ_SPLIT_197(x) (x) SNT_PP_SEQ_SPLIT_196
# define SNT_PP_SEQ_SPLIT_198(x) (x) SNT_PP_SEQ_SPLIT_197
# define SNT_PP_SEQ_SPLIT_199(x) (x) SNT_PP_SEQ_SPLIT_198
# define SNT_PP_SEQ_SPLIT_200(x) (x) SNT_PP_SEQ_SPLIT_199
# define SNT_PP_SEQ_SPLIT_201(x) (x) SNT_PP_SEQ_SPLIT_200
# define SNT_PP_SEQ_SPLIT_202(x) (x) SNT_PP_SEQ_SPLIT_201
# define SNT_PP_SEQ_SPLIT_203(x) (x) SNT_PP_SEQ_SPLIT_202
# define SNT_PP_SEQ_SPLIT_204(x) (x) SNT_PP_SEQ_SPLIT_203
# define SNT_PP_SEQ_SPLIT_205(x) (x) SNT_PP_SEQ_SPLIT_204
# define SNT_PP_SEQ_SPLIT_206(x) (x) SNT_PP_SEQ_SPLIT_205
# define SNT_PP_SEQ_SPLIT_207(x) (x) SNT_PP_SEQ_SPLIT_206
# define SNT_PP_SEQ_SPLIT_208(x) (x) SNT_PP_SEQ_SPLIT_207
# define SNT_PP_SEQ_SPLIT_209(x) (x) SNT_PP_SEQ_SPLIT_208
# define SNT_PP_SEQ_SPLIT_210(x) (x) SNT_PP_SEQ_SPLIT_209
# define SNT_PP_SEQ_SPLIT_211(x) (x) SNT_PP_SEQ_SPLIT_210
# define SNT_PP_SEQ_SPLIT_212(x) (x) SNT_PP_SEQ_SPLIT_211
# define SNT_PP_SEQ_SPLIT_213(x) (x) SNT_PP_SEQ_SPLIT_212
# define SNT_PP_SEQ_SPLIT_214(x) (x) SNT_PP_SEQ_SPLIT_213
# define SNT_PP_SEQ_SPLIT_215(x) (x) SNT_PP_SEQ_SPLIT_214
# define SNT_PP_SEQ_SPLIT_216(x) (x) SNT_PP_SEQ_SPLIT_215
# define SNT_PP_SEQ_SPLIT_217(x) (x) SNT_PP_SEQ_SPLIT_216
# define SNT_PP_SEQ_SPLIT_218(x) (x) SNT_PP_SEQ_SPLIT_217
# define SNT_PP_SEQ_SPLIT_219(x) (x) SNT_PP_SEQ_SPLIT_218
# define SNT_PP_SEQ_SPLIT_220(x) (x) SNT_PP_SEQ_SPLIT_219
# define SNT_PP_SEQ_SPLIT_221(x) (x) SNT_PP_SEQ_SPLIT_220
# define SNT_PP_SEQ_SPLIT_222(x) (x) SNT_PP_SEQ_SPLIT_221
# define SNT_PP_SEQ_SPLIT_223(x) (x) SNT_PP_SEQ_SPLIT_222
# define SNT_PP_SEQ_SPLIT_224(x) (x) SNT_PP_SEQ_SPLIT_223
# define SNT_PP_SEQ_SPLIT_225(x) (x) SNT_PP_SEQ_SPLIT_224
# define SNT_PP_SEQ_SPLIT_226(x) (x) SNT_PP_SEQ_SPLIT_225
# define SNT_PP_SEQ_SPLIT_227(x) (x) SNT_PP_SEQ_SPLIT_226
# define SNT_PP_SEQ_SPLIT_228(x) (x) SNT_PP_SEQ_SPLIT_227
# define SNT_PP_SEQ_SPLIT_229(x) (x) SNT_PP_SEQ_SPLIT_228
# define SNT_PP_SEQ_SPLIT_230(x) (x) SNT_PP_SEQ_SPLIT_229
# define SNT_PP_SEQ_SPLIT_231(x) (x) SNT_PP_SEQ_SPLIT_230
# define SNT_PP_SEQ_SPLIT_232(x) (x) SNT_PP_SEQ_SPLIT_231
# define SNT_PP_SEQ_SPLIT_233(x) (x) SNT_PP_SEQ_SPLIT_232
# define SNT_PP_SEQ_SPLIT_234(x) (x) SNT_PP_SEQ_SPLIT_233
# define SNT_PP_SEQ_SPLIT_235(x) (x) SNT_PP_SEQ_SPLIT_234
# define SNT_PP_SEQ_SPLIT_236(x) (x) SNT_PP_SEQ_SPLIT_235
# define SNT_PP_SEQ_SPLIT_237(x) (x) SNT_PP_SEQ_SPLIT_236
# define SNT_PP_SEQ_SPLIT_238(x) (x) SNT_PP_SEQ_SPLIT_237
# define SNT_PP_SEQ_SPLIT_239(x) (x) SNT_PP_SEQ_SPLIT_238
# define SNT_PP_SEQ_SPLIT_240(x) (x) SNT_PP_SEQ_SPLIT_239
# define SNT_PP_SEQ_SPLIT_241(x) (x) SNT_PP_SEQ_SPLIT_240
# define SNT_PP_SEQ_SPLIT_242(x) (x) SNT_PP_SEQ_SPLIT_241
# define SNT_PP_SEQ_SPLIT_243(x) (x) SNT_PP_SEQ_SPLIT_242
# define SNT_PP_SEQ_SPLIT_244(x) (x) SNT_PP_SEQ_SPLIT_243
# define SNT_PP_SEQ_SPLIT_245(x) (x) SNT_PP_SEQ_SPLIT_244
# define SNT_PP_SEQ_SPLIT_246(x) (x) SNT_PP_SEQ_SPLIT_245
# define SNT_PP_SEQ_SPLIT_247(x) (x) SNT_PP_SEQ_SPLIT_246
# define SNT_PP_SEQ_SPLIT_248(x) (x) SNT_PP_SEQ_SPLIT_247
# define SNT_PP_SEQ_SPLIT_249(x) (x) SNT_PP_SEQ_SPLIT_248
# define SNT_PP_SEQ_SPLIT_250(x) (x) SNT_PP_SEQ_SPLIT_249
# define SNT_PP_SEQ_SPLIT_251(x) (x) SNT_PP_SEQ_SPLIT_250
# define SNT_PP_SEQ_SPLIT_252(x) (x) SNT_PP_SEQ_SPLIT_251
# define SNT_PP_SEQ_SPLIT_253(x) (x) SNT_PP_SEQ_SPLIT_252
# define SNT_PP_SEQ_SPLIT_254(x) (x) SNT_PP_SEQ_SPLIT_253
# define SNT_PP_SEQ_SPLIT_255(x) (x) SNT_PP_SEQ_SPLIT_254
# define SNT_PP_SEQ_SPLIT_256(x) (x) SNT_PP_SEQ_SPLIT_255
#
# else
#
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_SEQ == 256
# include <sentient/preprocessor/seq/detail/limits/split_256.h>
# elif SNT_PP_LIMIT_SEQ == 512
# include <sentient/preprocessor/seq/detail/limits/split_256.h>
# include <sentient/preprocessor/seq/detail/limits/split_512.h>
# elif SNT_PP_LIMIT_SEQ == 1024
# include <sentient/preprocessor/seq/detail/limits/split_256.h>
# include <sentient/preprocessor/seq/detail/limits/split_512.h>
# include <sentient/preprocessor/seq/detail/limits/split_1024.h>
# else
# error Incorrect value for the SNT_PP_LIMIT_SEQ limit
# endif
#
# endif
#
# endif
