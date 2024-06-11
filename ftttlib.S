	.set noreorder

#include "pspstub.s"

	STUB_START "sceLibFttt",0x00090011,0x001C0005
	STUB_FUNC  0x02D7F94B,sceFtttFlush
	STUB_FUNC  0x099EF33C,sceFtttFindOptimumFont
	STUB_FUNC  0x0DA7535E,sceFtttGetFontInfo
	STUB_FUNC  0x27F6E642,sceFtttGetNumFontList
	STUB_FUNC  0x2F67356A,sceFtttCalcMemorySize
	STUB_FUNC  0x3AEA8CB6,sceFtttClose
	STUB_FUNC  0x3C4B7E82,sceFtttPointToPixelV
	STUB_FUNC  0x472694CD,sceFtttPointToPixelH
	STUB_FUNC  0x48293280,sceFtttSetResolution
	STUB_FUNC  0x48B06520,sceFtttGetShadowImageRect
	STUB_FUNC  0x5333322D,sceFtttGetFontInfoByIndexNumber
	STUB_FUNC  0x568BE516,sceFtttGetShadowGlyphImage
	STUB_FUNC  0x574B6FBC,sceFtttDoneLib
	STUB_FUNC  0x57FCB733,sceFtttOpenUserFile
	STUB_FUNC  0x5C3E4A9E,sceFtttGetCharImageRect
	STUB_FUNC  0x5DCF6858,sceFtttGetShadowGlyphImage_Clip
	STUB_FUNC  0x67F17ED7,sceFtttNewLib
	STUB_FUNC  0x681E61A7,sceFtttFindFont
	STUB_FUNC  0x74B21701,sceFtttPixelToPointH
	STUB_FUNC  0x980F4895,sceFtttGetCharGlyphImage
	STUB_FUNC  0xA834319D,sceFtttOpen
	STUB_FUNC  0xAA3DE7B5,sceFtttGetShadowInfo
	STUB_FUNC  0xBB8E7FE6,sceFtttOpenUserMemory
	STUB_FUNC  0xBC75D85B,sceFtttGetFontList
	STUB_FUNC  0xCA1E6945,sceFtttGetCharGlyphImage_Clip
	STUB_FUNC  0xDCC80C2F,sceFtttGetCharInfo
	STUB_FUNC  0xEE232411,sceFtttSetAltCharacterCode
	STUB_FUNC  0xF8F0752E,sceFtttPixelToPointV
	STUB_END
