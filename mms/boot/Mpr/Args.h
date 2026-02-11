/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2003/07/28 18:03:48 $
 *    $State: Exp $
 *   Purpose: Load script for MP Router application.
 * * * * * * * * * * * * * * * * * * *
 */
#unassert module
#assert args(OK)
#if #arg1(slip) || #arg1(Slip)
#	assert up(Slip)
#	assert module(Slip)
#	define NET_0	_UP_=Slip
#elif #arg1(ether) || #arg1(Ether)
#	if !#class(bridge)
#		assert class(router)
#	endif
#	assert up(Ether)
#	assert module(Ether)
#	define NET_0	_UP_=Ether
#elif #arg1(prism) || #arg1(Prism)
#	assert up(Prism)
#	assert module(Prism)
#	define NET_0	_UP_=Prism
#	define PRISMMODE APCLIENT
#elif #arg1(loop) || #arg1(Loop)
#	assert up(Loop)
#	assert module(Loop)
#	define NET_0	_UP_=Loop
#elif #arg1(can) || #arg1(Can)
#	assert up(Can)
#	assert module(Can)
#	define NET_0	_UP_=Can
#elif #arg1(radio) || #arg1(Rp)
#	assert up(Rp)
#	assert module(Rp)
#	define NET_0	_UP_=Rp
#elif #arg1(wit) || #arg1(Wit)
#	assert up(Wit)
#	assert module(Wit)
#	define NET_0	_UP_=Wit
#elif #arg1(SlipMp)
#	assert up(Slip)
#	assert module(SlipMp)
#	define NET_0	_UP_=SlipMp
#elif #arg1(tmp) || #arg1(TMp)
#	assert up(TMp)
#	assert module(TMp)
#	define NET_0	_UP_=TMp
#else
#	unassert args(OK)
#endif
#if #arg2(slip) || #arg2(Slip)
#	assert module(Slip)
#	define NET_1	MOD1=Slip NET1=Slip
#elif #arg2(ether) || #arg2(Ether)
#	if !#class(bridge)
#		assert class(router)
#	endif
#	assert module(Ether)
#	define NET_1	MOD1=Ethernet NET1=Ethernet
#elif #arg2(prism) || #arg2(Prism)
#	assert module(Prism)
#	if #arg1(prism) || #arg1(Prism)
#		define NET_1	MOD1=PrismNet NET1=Prism
#		assert class(repeater)
#	else
#		define NET_1	MOD1=PrismNet NET1=Prism
#		define PRISMMODE APSERVER
#	endif
#elif #arg2(loop) || #arg2(Loop)
#	assert module(Master)
#	define NET_1	MOD1=Loop NET1=Master
#elif #arg2(can) || #arg2(Can)
#	assert module(Can)
#	define NET_1	MOD1=Can NET1=Can
#elif #arg2(wit) || #arg2(Wit)
#	assert module(Wit)
#	define NET_1	MOD1=Wit NET1=Wit
#elif #arg2(SlipMp)
#	assert module(SlipMp)
#	define NET_1	MOD1=SlipMp NET1=SlipMp
#elif #arg2(tmp) || #arg2(TMp)
#	assert module(TMp)
#	define NET_1	MOD1=TMp NET1=TMp
#elif #arg2(stas) || #arg2(Stas)
#	assert module(Stas)
#	define NET_1	MOD1=SlipMp NET1=Stas
#elif #arg2(ucell) || #arg2(Ucell)
#	assert module(Ucell)
#	define NET_1	MOD1=Ucell NET1=Ucell
#elif #arg2(radio) || #arg2(Rp)
#	assert module(Rp)
#	define NET_1	MOD1=Rp NET1=Rp
#else
#	unassert args(OK)
#endif
#ifdef ARG3
#if #arg3(slip) || #arg3(Slip)
#	assert module(Slip)
#	define NET_2	MOD2=Slip NET2=Slip
#elif #arg3(ether) || #arg3(Ether)
#	if !#class(bridge)
#		assert class(router)
#	endif
#	assert module(Ether)
#	define NET_2	MOD2=Ethernet NET2=Ethernet
#elif #arg3(prism) || #arg3(Prism)
#	assert module(Prism)
#	define PRISMMODE APSERVER
#	define NET_2	MOD2=PrismNet NET2=Prism
#elif #arg3(loop) || #arg3(Loop)
#	assert module(Master)
#	define NET_2	MOD2=Loop NET2=Master
#elif #arg3(can) || #arg3(Can)
#	assert module(Can)
#	define NET_2	MOD2=Can NET2=Can
#elif #arg3(wit) || #arg3(Wit)
#	assert module(Wit)
#	define NET_2	MOD2=Wit NET2=Wit
#elif #arg3(SlipMp)
#	assert module(SlipMp)
#	define NET_2	MOD2=SlipMp NET2=SlipMp
#elif #arg3(tmp) || #arg3(TMp)
#	assert module(TMp)
#	define NET_2	MOD2=TMp NET2=TMp
#elif #arg3(stas) || #arg3(Stas)
#	assert module(Stas)
#	define NET_2	MOD2=SlipMp NET2=Stas
#elif #arg3(ucell) || #arg3(Ucell)
#	assert module(Ucell)
#	define NET_2	MOD2=Ucell NET2=Ucell
#elif #arg3(radio) || #arg3(Rp)
#	assert module(Rp)
#	define NET_2	MOD2=Rp NET2=Rp
#else
#	unassert args(OK)
#endif
#endif
#if !(#class(router) || #class(bridge) || #class(repeater))
#	assert class(bridge)
#endif
#if !#args(OK)
	echo 'usage:	Mpr/All up down1 [down2]'
	echo '		Create a multi-protocol router routing multiple networks,'
	echo '		where up, down1, and down2 are the following:'
	echo '	Slip	SLIP point-to-point asynchronous RS232 network'
	echo '	Ether	802.3 Ethernet LAN'
	echo '	Prism	802.11 wireless LAN'
	echo '	Loop	Synchronous token ring network'
	echo '	Can	Multi-drop CAN bus network'
	echo '	Rp	Narrow band UHF network'
	echo '	Bb	Compatibility mode black-box network (only for down2)'
	echo '	Wit	Spread-spectrum WIT radio network'
	echo '	SlipMp	Multi-point asynchronous SLIP network'
	echo '	TMp	Trellis Multi-point Protocol (Paradyne) modem network'
	echo '	Stas	STAS spread-spectrum radio network'
	echo '	Ucell	Narrow band UHF microcell radio network'
#elif !#up(Slip) && !#up(Ether) && ID <= 15
	echo '>>> Addresses lower than 15 are reserved ONLY for backbone access points!'
#	unassert args(OK)
#endif
