// https://docs.qmk.fm/#/feature_unicode

// čárka    (I)  acute
// háček    (V)  caron
// kroužek  (O)  ring above

#ifndef CZECH_H
#define CZECH_H

enum czech_letters 
{
	AIL, AIH,
	CVL, CVH,
	DVL, DVH,
	EIL, EIH,
	EVL, EVH,
	IIL, IIH,
	NVL, NVH,
	OIL, OIH,
	RVL, RVH,
	SVL, SVH,
	TVL, TVH,
	UIL, UIH,
	UOL, UOH,
	YIL, YIH,
	ZVL, ZVH
};

const uint32_t PROGMEM unicode_map[] = 
{                     //     UTF-8  ALTGR
	[AIL] = 0x00E1,   // á   00E1   160
	[AIH] = 0x00C1,   // Á   00C1   181
	[CVL] = 0x010D,   // č   010D   159
	[CVH] = 0x010C,   // Č   010C   172
	[DVL] = 0x010F,   // ď   010F   212
	[DVH] = 0x010E,   // Ď   010E   210
	[EIL] = 0x00E9,   // é   00E9   130
	[EIH] = 0x00C9,   // É   00C9   144
	[EVL] = 0x011B,   // ě   011B   216
	[EVH] = 0x011A,   // Ě   011A   183
	[IIL] = 0x00ED,   // í   00ED   161
	[IIH] = 0x00CD,   // Í   00CD   214
	[NVL] = 0x0148,   // ň   0148   229
	[NVH] = 0x0147,   // Ň   0147   213
	[OIL] = 0x00F3,   // ó   00F3   162
	[OIH] = 0x00D3,   // Ó   00D3   224
	[RVL] = 0x0159,   // ř   0159   253
	[RVH] = 0x0158,   // Ř   0158   252
	[SVL] = 0x0161,   // š   0161   231
	[SVH] = 0x0160,   // Š   0160   230
	[TVL] = 0x0165,   // ť   0165   156
	[TVH] = 0x0164,   // Ť   0164   155
	[UIL] = 0x00FA,   // ú   00FA   163
	[UIH] = 0x00DA,   // Ú   00DA   233
	[UOL] = 0x016F,   // ů   016F   133
	[UOH] = 0x016E,   // Ů   016E   222
	[YIL] = 0x00FD,   // ý   00FD   236
	[YIH] = 0x00DD,   // Ý   00DD   237
	[ZVL] = 0x017E,   // ž   017E   167
	[ZVH] = 0x017D,   // Ž   017D   166
};

#define _CZ_AI  XP(AIL, AIH)
#define _CZ_CV  XP(CVL, CVH)
#define _CZ_DV  XP(DVL, DVH)
#define _CZ_EI  XP(EIL, EIH)
#define _CZ_EV  XP(EVL, EVH)
#define _CZ_II  XP(IIL, IIH)
#define _CZ_NV  XP(NVL, NVH)
#define _CZ_OI  XP(OIL, OIH)
#define _CZ_RV  XP(RVL, RVH)
#define _CZ_SV  XP(SVL, SVH)
#define _CZ_TV  XP(TVL, TVH)
#define _CZ_UI  XP(UIL, UIH)
#define _CZ_UO  XP(UOL, UOH)
#define _CZ_YI  XP(YIL, YIH)
#define _CZ_ZV  XP(ZVL, ZVH)

#endif
