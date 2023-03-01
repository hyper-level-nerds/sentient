//
// Copyright (c) 2016-2019 Jin (jaehwanspin@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/hyper-level-nerds/sentient
//

# ifndef SENTIENT_PREPROCESSOR_ARITHMETIC_DEC_H
# define SENTIENT_PREPROCESSOR_ARITHMETIC_DEC_H
#
# include <sentient/preprocessor/config/config.h>
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_STRICT()
#
# /* SNT_PP_DEC */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_DEC(x) SNT_PP_DEC_I(x)
# else
#    define SNT_PP_DEC(x) SNT_PP_DEC_OO((x))
#    define SNT_PP_DEC_OO(par) SNT_PP_DEC_I ## par
# endif
#
# define SNT_PP_DEC_I(x) SNT_PP_DEC_ ## x
#
# define SNT_PP_DEC_0 0
# define SNT_PP_DEC_1 0
# define SNT_PP_DEC_2 1
# define SNT_PP_DEC_3 2
# define SNT_PP_DEC_4 3
# define SNT_PP_DEC_5 4
# define SNT_PP_DEC_6 5
# define SNT_PP_DEC_7 6
# define SNT_PP_DEC_8 7
# define SNT_PP_DEC_9 8
# define SNT_PP_DEC_10 9
# define SNT_PP_DEC_11 10
# define SNT_PP_DEC_12 11
# define SNT_PP_DEC_13 12
# define SNT_PP_DEC_14 13
# define SNT_PP_DEC_15 14
# define SNT_PP_DEC_16 15
# define SNT_PP_DEC_17 16
# define SNT_PP_DEC_18 17
# define SNT_PP_DEC_19 18
# define SNT_PP_DEC_20 19
# define SNT_PP_DEC_21 20
# define SNT_PP_DEC_22 21
# define SNT_PP_DEC_23 22
# define SNT_PP_DEC_24 23
# define SNT_PP_DEC_25 24
# define SNT_PP_DEC_26 25
# define SNT_PP_DEC_27 26
# define SNT_PP_DEC_28 27
# define SNT_PP_DEC_29 28
# define SNT_PP_DEC_30 29
# define SNT_PP_DEC_31 30
# define SNT_PP_DEC_32 31
# define SNT_PP_DEC_33 32
# define SNT_PP_DEC_34 33
# define SNT_PP_DEC_35 34
# define SNT_PP_DEC_36 35
# define SNT_PP_DEC_37 36
# define SNT_PP_DEC_38 37
# define SNT_PP_DEC_39 38
# define SNT_PP_DEC_40 39
# define SNT_PP_DEC_41 40
# define SNT_PP_DEC_42 41
# define SNT_PP_DEC_43 42
# define SNT_PP_DEC_44 43
# define SNT_PP_DEC_45 44
# define SNT_PP_DEC_46 45
# define SNT_PP_DEC_47 46
# define SNT_PP_DEC_48 47
# define SNT_PP_DEC_49 48
# define SNT_PP_DEC_50 49
# define SNT_PP_DEC_51 50
# define SNT_PP_DEC_52 51
# define SNT_PP_DEC_53 52
# define SNT_PP_DEC_54 53
# define SNT_PP_DEC_55 54
# define SNT_PP_DEC_56 55
# define SNT_PP_DEC_57 56
# define SNT_PP_DEC_58 57
# define SNT_PP_DEC_59 58
# define SNT_PP_DEC_60 59
# define SNT_PP_DEC_61 60
# define SNT_PP_DEC_62 61
# define SNT_PP_DEC_63 62
# define SNT_PP_DEC_64 63
# define SNT_PP_DEC_65 64
# define SNT_PP_DEC_66 65
# define SNT_PP_DEC_67 66
# define SNT_PP_DEC_68 67
# define SNT_PP_DEC_69 68
# define SNT_PP_DEC_70 69
# define SNT_PP_DEC_71 70
# define SNT_PP_DEC_72 71
# define SNT_PP_DEC_73 72
# define SNT_PP_DEC_74 73
# define SNT_PP_DEC_75 74
# define SNT_PP_DEC_76 75
# define SNT_PP_DEC_77 76
# define SNT_PP_DEC_78 77
# define SNT_PP_DEC_79 78
# define SNT_PP_DEC_80 79
# define SNT_PP_DEC_81 80
# define SNT_PP_DEC_82 81
# define SNT_PP_DEC_83 82
# define SNT_PP_DEC_84 83
# define SNT_PP_DEC_85 84
# define SNT_PP_DEC_86 85
# define SNT_PP_DEC_87 86
# define SNT_PP_DEC_88 87
# define SNT_PP_DEC_89 88
# define SNT_PP_DEC_90 89
# define SNT_PP_DEC_91 90
# define SNT_PP_DEC_92 91
# define SNT_PP_DEC_93 92
# define SNT_PP_DEC_94 93
# define SNT_PP_DEC_95 94
# define SNT_PP_DEC_96 95
# define SNT_PP_DEC_97 96
# define SNT_PP_DEC_98 97
# define SNT_PP_DEC_99 98
# define SNT_PP_DEC_100 99
# define SNT_PP_DEC_101 100
# define SNT_PP_DEC_102 101
# define SNT_PP_DEC_103 102
# define SNT_PP_DEC_104 103
# define SNT_PP_DEC_105 104
# define SNT_PP_DEC_106 105
# define SNT_PP_DEC_107 106
# define SNT_PP_DEC_108 107
# define SNT_PP_DEC_109 108
# define SNT_PP_DEC_110 109
# define SNT_PP_DEC_111 110
# define SNT_PP_DEC_112 111
# define SNT_PP_DEC_113 112
# define SNT_PP_DEC_114 113
# define SNT_PP_DEC_115 114
# define SNT_PP_DEC_116 115
# define SNT_PP_DEC_117 116
# define SNT_PP_DEC_118 117
# define SNT_PP_DEC_119 118
# define SNT_PP_DEC_120 119
# define SNT_PP_DEC_121 120
# define SNT_PP_DEC_122 121
# define SNT_PP_DEC_123 122
# define SNT_PP_DEC_124 123
# define SNT_PP_DEC_125 124
# define SNT_PP_DEC_126 125
# define SNT_PP_DEC_127 126
# define SNT_PP_DEC_128 127
# define SNT_PP_DEC_129 128
# define SNT_PP_DEC_130 129
# define SNT_PP_DEC_131 130
# define SNT_PP_DEC_132 131
# define SNT_PP_DEC_133 132
# define SNT_PP_DEC_134 133
# define SNT_PP_DEC_135 134
# define SNT_PP_DEC_136 135
# define SNT_PP_DEC_137 136
# define SNT_PP_DEC_138 137
# define SNT_PP_DEC_139 138
# define SNT_PP_DEC_140 139
# define SNT_PP_DEC_141 140
# define SNT_PP_DEC_142 141
# define SNT_PP_DEC_143 142
# define SNT_PP_DEC_144 143
# define SNT_PP_DEC_145 144
# define SNT_PP_DEC_146 145
# define SNT_PP_DEC_147 146
# define SNT_PP_DEC_148 147
# define SNT_PP_DEC_149 148
# define SNT_PP_DEC_150 149
# define SNT_PP_DEC_151 150
# define SNT_PP_DEC_152 151
# define SNT_PP_DEC_153 152
# define SNT_PP_DEC_154 153
# define SNT_PP_DEC_155 154
# define SNT_PP_DEC_156 155
# define SNT_PP_DEC_157 156
# define SNT_PP_DEC_158 157
# define SNT_PP_DEC_159 158
# define SNT_PP_DEC_160 159
# define SNT_PP_DEC_161 160
# define SNT_PP_DEC_162 161
# define SNT_PP_DEC_163 162
# define SNT_PP_DEC_164 163
# define SNT_PP_DEC_165 164
# define SNT_PP_DEC_166 165
# define SNT_PP_DEC_167 166
# define SNT_PP_DEC_168 167
# define SNT_PP_DEC_169 168
# define SNT_PP_DEC_170 169
# define SNT_PP_DEC_171 170
# define SNT_PP_DEC_172 171
# define SNT_PP_DEC_173 172
# define SNT_PP_DEC_174 173
# define SNT_PP_DEC_175 174
# define SNT_PP_DEC_176 175
# define SNT_PP_DEC_177 176
# define SNT_PP_DEC_178 177
# define SNT_PP_DEC_179 178
# define SNT_PP_DEC_180 179
# define SNT_PP_DEC_181 180
# define SNT_PP_DEC_182 181
# define SNT_PP_DEC_183 182
# define SNT_PP_DEC_184 183
# define SNT_PP_DEC_185 184
# define SNT_PP_DEC_186 185
# define SNT_PP_DEC_187 186
# define SNT_PP_DEC_188 187
# define SNT_PP_DEC_189 188
# define SNT_PP_DEC_190 189
# define SNT_PP_DEC_191 190
# define SNT_PP_DEC_192 191
# define SNT_PP_DEC_193 192
# define SNT_PP_DEC_194 193
# define SNT_PP_DEC_195 194
# define SNT_PP_DEC_196 195
# define SNT_PP_DEC_197 196
# define SNT_PP_DEC_198 197
# define SNT_PP_DEC_199 198
# define SNT_PP_DEC_200 199
# define SNT_PP_DEC_201 200
# define SNT_PP_DEC_202 201
# define SNT_PP_DEC_203 202
# define SNT_PP_DEC_204 203
# define SNT_PP_DEC_205 204
# define SNT_PP_DEC_206 205
# define SNT_PP_DEC_207 206
# define SNT_PP_DEC_208 207
# define SNT_PP_DEC_209 208
# define SNT_PP_DEC_210 209
# define SNT_PP_DEC_211 210
# define SNT_PP_DEC_212 211
# define SNT_PP_DEC_213 212
# define SNT_PP_DEC_214 213
# define SNT_PP_DEC_215 214
# define SNT_PP_DEC_216 215
# define SNT_PP_DEC_217 216
# define SNT_PP_DEC_218 217
# define SNT_PP_DEC_219 218
# define SNT_PP_DEC_220 219
# define SNT_PP_DEC_221 220
# define SNT_PP_DEC_222 221
# define SNT_PP_DEC_223 222
# define SNT_PP_DEC_224 223
# define SNT_PP_DEC_225 224
# define SNT_PP_DEC_226 225
# define SNT_PP_DEC_227 226
# define SNT_PP_DEC_228 227
# define SNT_PP_DEC_229 228
# define SNT_PP_DEC_230 229
# define SNT_PP_DEC_231 230
# define SNT_PP_DEC_232 231
# define SNT_PP_DEC_233 232
# define SNT_PP_DEC_234 233
# define SNT_PP_DEC_235 234
# define SNT_PP_DEC_236 235
# define SNT_PP_DEC_237 236
# define SNT_PP_DEC_238 237
# define SNT_PP_DEC_239 238
# define SNT_PP_DEC_240 239
# define SNT_PP_DEC_241 240
# define SNT_PP_DEC_242 241
# define SNT_PP_DEC_243 242
# define SNT_PP_DEC_244 243
# define SNT_PP_DEC_245 244
# define SNT_PP_DEC_246 245
# define SNT_PP_DEC_247 246
# define SNT_PP_DEC_248 247
# define SNT_PP_DEC_249 248
# define SNT_PP_DEC_250 249
# define SNT_PP_DEC_251 250
# define SNT_PP_DEC_252 251
# define SNT_PP_DEC_253 252
# define SNT_PP_DEC_254 253
# define SNT_PP_DEC_255 254
# define SNT_PP_DEC_256 255
# define SNT_PP_DEC_257 256
#
# else
#
# /* SNT_PP_DEC */
#
# if ~SNT_PP_CONFIG_FLAGS() & SNT_PP_CONFIG_MWCC()
#    define SNT_PP_DEC(x) SNT_PP_DEC_I(x)
# else
#    define SNT_PP_DEC(x) SNT_PP_DEC_OO((x))
#    define SNT_PP_DEC_OO(par) SNT_PP_DEC_I ## par
# endif
#
# define SNT_PP_DEC_I(x) SNT_PP_DEC_ ## x
#
# include <sentient/preprocessor/config/limits.h>
#
# if SNT_PP_LIMIT_MAG == 256
# include <sentient/preprocessor/arithmetic/limits/dec_256.h>
# elif SNT_PP_LIMIT_MAG == 512
# include <sentient/preprocessor/arithmetic/limits/dec_256.h>
# include <sentient/preprocessor/arithmetic/limits/dec_512.h>
# elif SNT_PP_LIMIT_MAG == 1024
# include <sentient/preprocessor/arithmetic/limits/dec_256.h>
# include <sentient/preprocessor/arithmetic/limits/dec_512.h>
# include <sentient/preprocessor/arithmetic/limits/dec_1024.h>
# else
# error Incorrect value for the SNT_PP_LIMIT_MAG limit
# endif
#
# endif
#
# endif
