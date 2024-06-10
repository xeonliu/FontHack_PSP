/*
 * This Header File Contains Fuctions Imported By the fontfuck Library.
 * Should be consistant with ftttlib.S (28 functions exported by original sceLibFont Library)
 * Total 28 Functions
 */
#ifndef SCEFTTT_H_
#define SCEFTTT_H_

int sceFtttFlush(int fontHandle);
int sceFtttFindOptimumFont(int fontLibHandle, int fontStylePtr, int errorCodePtr);
int sceFtttGetFontInfo(int fontHandle, int *fontInfoPtr);
int sceFtttGetNumFontList(int fontLibHandle, int errorCodePtr);
int sceFtttCalcMemorySize(int fontLibHandle, int fontStylePtr, int errorCodePtr);
int sceFtttClose(int fontHandle);
int sceFtttPointToPixelV(int fontLibHandle, int fontPointsV, int errorCodePtr);
int sceFtttPointToPixelH(int fontLibHandle, int fontPointsH, int errorCodePtr);
int sceFtttSetResolution(int fontLibHandle, int hRes, int vRes);
int sceFtttGetShadowImageRect(int fontHandle, int charCode, int shadowRectPtr);
int sceFtttGetFontInfoByIndexNumber(int fontLibHandle, int fontInfoPtr, int fontIndex);
int sceFtttGetShadowGlyphImage(int fontHandle, int charCode, int shadowGlyphImagePtr);
int sceFtttDoneLib(int fontLibHandle);
int sceFtttOpenUserFile(int fontLibHandle, int fileNameAddr, int mode, int errorCodePtr);
int sceFtttGetCharImageRect(int fontHandle, int charCode, int charRectPtr);
int sceFtttGetShadowGlyphImage_Clip(int fontHandle, int charCode, int shadowGlyphImagePtr, int clipXPos, int clipYPos, int clipWidth, int clipHeight);
int sceFtttNewLib(int paramsPtr, int errorCodePtr);
int sceFtttFindFont(int fontLibHandle, int fontStylePtr, int errorCodePtr);
int sceFtttPixelToPointH(int fontLibHandle, int fontPixelsH, int errorCodePtr);
int sceFtttGetCharGlyphImage(int fontHandle, int charCode, int glyphImagePtr);
int sceFtttOpen(int fontLibHandle, int index, int mode, int errorCodePtr);
int sceFtttGetShadowInfo(int fontHandle, int charCode, int shadowCharInfoPtr);
int sceFtttOpenUserMemory(int fontLibHandle, int memoryFontPtr, int memoryFontLength, int errorCodePtr);
int sceFtttGetFontList(int fontLibHandle, int fontStylePtr, int numFonts);
int sceFtttGetCharGlyphImage_Clip(int fontHandle, int charCode, int glyphImagePtr, int clipXPos, int clipYPos, int clipWidth, int clipHeight);
int sceFtttGetCharInfo(int fontHandle, int charCode, int charInfoPtr);
int sceFtttSetAltCharacterCode(int fontLibHandle, int charCode);
int sceFtttPixelToPointV(int fontLibHandle, int fontPixelsV, int errorCodePtr);

#endif /* SCEFTTT_H_ */
