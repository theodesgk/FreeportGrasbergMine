%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: UpPort.h,v $
 * $Revision: 1.6 $
 *   $Author: dcitron $
 *     $Date: 2014/07/15 16:03:16 $
 *    $State: Exp $
 *   Purpose: Define upstream port and make appropriate
 *            assertions to avoid conflicts.
 * * * * * * * * * * * * * * * * * * *
 */
#if #up(none)
	up	none
#elif #up(Ether) || (#up(Dual) && #arch(ptxb))
	up	Ethernet name:eth0
#	assert	module(Ether)
#elif #up(Prism) || (#up(Dual) && #arch(ptx))
	up	PrismNet name:wan0
#elif #up(Stas)
#	include <Main/GspPort.h>
	up	SlipMp	name:Stas port:GSPPORT hdwe:rs485
#	assert	module(Slip)
#elif #up(Gsp)
#	include <Main/GspPort.h>
	up	Slip	name:Gsp port:GSPPORT hdwe:rs232
#	assert	module(Slip)
#elif #up(Slip)
	up	Slip
#	assert	port(cpu)
#	assert	module(Slip)
#elif #up(Rp)
	up	Rp
#	assert	port(scc0a)
#	assert	module(Rp)
#elif #up(CanB)
	up	Can port:canb
#	assert	module(Can)
#elif #up(Can) || #up(CanA) || #arch(gspcan) || #arch(goiccan) || #arch(hubcan)
	up	Can
#	assert	up(Can)
#	assert	module(Can)
#elif #up(TMp)
	up	TMp
#	assert	module(TMp)
#elif #up(Wit)
	up	Wit
#	assert	module(Wit)
#elif #arch(cgc) && (#arch(r2c) || #arch(r3c) || #arch(b100c) || #arch(b101c) || #arch(b102c) || #arch(r2k))
	up	Can
#	assert	up(Can)
#	assert	module(Can)
#elif #arch(pe)
#    if #up(SlipMp)
	up	SlipMp name:SlipMp
#    else
	up	none
#    endif
#else
	up	Loop
#	assert	up(Loop)
#	assert	port(scc0b)
#	assert	module(Loop)
#endif
#include <Cfg/Ssn.h>
