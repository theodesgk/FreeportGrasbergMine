/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: Icon.h,v $
 * $Revision: 1.11 $
 *   $Author: zambetis $
 *     $Date: 2011/05/09 22:26:06 $
 *    $State: Exp $
 *   Purpose: Load script for Graphical Operator Interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/Device.h>
#if #arch(pe)
#	define EXT gif
/* we don't need to load the font file anymore. this is now handled
 * by a cab file
 *#	if #arch(ptx)
 *#		if #language(Hindi)
 *			CP(fonts/Hindi/mms_hindi_ptx.ttf,ICONDEVICE/mms_hindi_ptx.ttf)
 *#               endif
 *#       endif
 */
#else
#	define EXT icon
#	if #language(Russian)
#		if #arch(cgc) && ( #arch(r3l) || #arch(r3c) || #arch(r2l) || #arch(r2c))
			echo Loading Cyrillic fonts for small cgc
			CP(fonts/KOI8/helv-m-08.font,ICONDEVICE/Tiny.font)
			CP(fonts/KOI8/helv-m-12.font,ICONDEVICE/Small.font)
			CP(fonts/KOI8/helv-m-14.font,ICONDEVICE/Large.font)
#		elif #arch(cgc) && ( #arch(b100c) || #arch(b100l) || #arch(b101c) || #arch(b101l) || #arch(b102c) || #arch(b102l))
			echo Loading Cyrillic fonts for large cgc
			CP(fonts/KOI8/helv-m-14.font,ICONDEVICE/Tiny.font)
			CP(fonts/KOI8/helv-m-18.font,ICONDEVICE/Small.font)
			CP(fonts/KOI8/helv-m-34.font,ICONDEVICE/Large.font)
#		elif #arch(cgc) && #arch(r2k)
			echo Loading Cyrillic fonts for HiRes cgc
			CP(fonts/KOI8/helv-m-12.font,ICONDEVICE/Tiny.font)
			CP(fonts/KOI8/helv-m-18.font,ICONDEVICE/Small.font)
			CP(fonts/KOI8/helv-m-24.font,ICONDEVICE/Large.font)
#		endif
#	else
#		if #language(Hindi)
#			if #arch(cgc) && ( #arch(r3l) || #arch(r3c) || #arch(r2l) || #arch(r2c))
				CP(fonts/Hindi/Hindi-uni-small.font,ICONDEVICE/Hindi-uni.font)
#			else
				CP(fonts/Hindi/Hindi-uni.font,ICONDEVICE/Hindi-uni.font)
#			endif
#		endif
		CP(fonts/SCREEN/Small.font,ICONDEVICE/Small.font)
		CP(fonts/SCREEN/Large.font,ICONDEVICE/Large.font)
		CP(fonts/SCREEN/Tiny.font,ICONDEVICE/Tiny.font)
#	endif

	ln ICONDEVICE/Small.font default.font
	CP(icons/SCREEN/hand.cursor,ICONDEVICE/hand.cursor)
#	if ! #arch(cgc)
		CP(icons/SCREEN/root.icon,ICONDEVICE/root.icon)
#	endif

#endif

CP(icons/SCREEN/logo.EXT,ICONDEVICE/logo.EXT)

#define ICONS_H <icons/SCREEN/CLASS/Icons.h>
#include ICONS_H
#include <icons/Options.h> 
