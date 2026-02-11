%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: GspPort.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2002/10/19 00:20:07 $
 *    $State: Exp $
 *   Purpose: Check GSP port to insure it's used only once.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(hub) || #arch(hubcan)
#	define GSPPORT scc1a
#	if #port(scc1a)
#		assert GSPPORT(busy)
#	else
#		assert port(scc1a)
#		define GSPIPADDR	192.168.201.2
#	endif
#elif #arch(mlink)
/*
 * Masterlink hubs support two GSP ports in addition to the SLIP serial port.
 * Assign cpu3 to the first interface; xil2 to the second interface.
 *
 * Note that only the first Masterlink GSP port (cpu3) supports RS422, RS485, and
 * CTS/RTS handshaking.  The second serial port (xil2) supports 3-wire asyncronous
 * RS233 interfaces only.
 */
#	if !#port(cpu3)
#		define GSPPORT	cpu3
#		assert port(cpu3)
#		define GSPIPADDR	192.168.201.2
#	elif !#port(xil2)
#		define GSPPORT xil2
#		assert port(xil2)
#		define GSPIPADDR	192.168.201.4
#	else
#		assert GSPPORT(busy)
#	endif
#elif #arch(cgc)
#	define GSPPORT	cpu3
#	if #port(cpu3)
#		assert GSPPORT(busy)
#	else
#		assert port(cpu3)
#		define GSPIPADDR	192.168.201.2
#	endif
#elif #arch(gsp) || #arch(gspcan)
#	define GSPPORT scc0a
#	if #port(scc0a)
#		assert GSPPORT(busy)
#	else
#		assert port(scc0a)
#		define GSPIPADDR	192.168.201.2
#	endif
#else
#	assert GSPPORT(busy)
#endif
