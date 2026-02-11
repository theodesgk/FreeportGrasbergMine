/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Modem.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2002/10/08 20:35:53 $
 *    $State: Exp $
 *   Purpose: Load radio modem configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/ModemType.h>
#if !defined(NO_MODEM)
#ifndef CHAN
#	define CHAN 1
#endif
#ifndef RPNET
#	define RPNET 172.17.0.0
#endif
#ifdef RPID
	Rp id:RPID set
	/*
	 * Set the number of backoff slots to 0 on BRG to decrease transmit
	 * latency.
	 */
#	if RPID == 0
	Rp slots:0 set
#	endif
#endif
#if defined(HAS_BOOT_MODEM)
	echo Using MODEM boot flash modem...
#	ifdef CELL
		CP(Cfg/Rp.cfg RPNET _MODEM_=MODEM _CELL_=CELL,CFGDEVICE/Rp.cfg)
#	else
		CP(Cfg/Rp.cfg RPNET _MODEM_=MODEM,CFGDEVICE/Rp.cfg)
#	endif
#else
#	ifndef MODEM
#		define MODEM tait1200
#		define MODEM_SPEED 1200
#	endif
	echo Loading MODEM modem configuration...
#	if #modem(dual)
		CP(Dsp/MODEM.dem,CFGDEVICE/MODEM.dem)
		CP(Dsp/MODEM.mod,CFGDEVICE/MODEM.mod)
#	else
		CP(Dsp/MODEM.dsp,CFGDEVICE/MODEM.dsp)
#	endif
	CP(Cfg/Rp.cfg RPNET _MODEM_=MODEM,CFGDEVICE/Rp.cfg)
#endif
#endif
