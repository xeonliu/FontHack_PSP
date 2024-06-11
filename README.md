# PSP Fontfuck Library
This file is a reversed version of [TPU](https://github.com/tpunix)'s libfont.prx (fontfunk) library

Based on the libfont.prx binary, with reference to [hz86/mgspw](https://github.com/hz86/mgspw), a locolization plugin for Metal Gear Solid: Peace Walker

Constants and Struct Definitions are from PPSSPP & hz86/mgspw & Web.

# Build
1. Set up `PSPDEV` environment
2. Run `make`

# Usage
1. Replace the origin `libfont.prx` with the built one
2. Rename your custom font and put it at `USRDIR/fonts.pgf`
3. Get a replica of `oldfont.prx` and put it at `USRDIR/oldfont.prx`

# How to Get `oldfont.prx`
1. Decrypt the original `libfont.prx` in the game using [Linblow/pspdecrypt](https://github.com/Linblow/pspdecrypt)
2. Edit it in a hex editor. Find the `sceLibFont` string ( in `segment_2` )~~( in `.rodata`, referenced in `.lib.ent` )~~ and change it to `sceLibFttt`.
3. Rename it to `oldfont.prx`

# How does it work?
The only two things PSP Kernel use to identify a function exported by a moudule is its export name referenced in `.lib.ent` and the fucntion NID.

Thus we can create a moudule with the same export name and function NIDs to substitute the original module, and bridge between the game and original module by loading and calling functions in the original module as long as the original module's export name has been changed to an unused value.

# Description of Files
+ `ftttlib.h` & `ftttlib,S` contains information from the modified `oldfont.prx`

+ `exports.exp` is used to generate export entries of the fontfuck library.

+ `fontfuck.c` is the main file. It wraps and modifies the behavior of **3** functions in `sceLibFont`

# Test
+ The Library was tested on PSP Hardware.
+ `PPSSPP` artifacts in this [PR](https://github.com/hrydgard/ppsspp/pull/19115/checks) works fine.
+ `jpcsp` doesn't seem to work