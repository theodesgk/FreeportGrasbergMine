/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.4 $
 *   $Author: zambetis $
 *     $Date: 2009/05/07 21:19:15 $
 *    $State: Exp $
 *   Purpose: Load Backhoe configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo Backhoe can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#		define DEV _DEVICE_=DEVICE

#		ifdef BACKHOESIM
#			define SIM _BACKHOESIM_=BACKHOESIM
			CP(Backhoe/sim/BACKHOESIM/bktsim.cfg DEV, CFGDEVICE/bktsim.cfg)
			CP(Backhoe/sim/BACKHOESIM/possim.cfg DEV, CFGDEVICE/possim.cfg)
			CP(Backhoe/sim/BACKHOESIM/possim.script DEV, CFGDEVICE/possim.script)
			CP(Backhoe/sim/BACKHOESIM/materials.cfg DEV, CFGDEVICE/materials.cfg)
#		else
#			define SIM
#			CP(Backhoe/materials.cfg DEV, CFGDEVICE/materials.cfg)
#		endif

/* easiest way to instantiate the simulator objects is to tell one of the
 * backhoe component objects to instantiate them, instead of passing a new
 * argument to the generic Main.cfg. The logical choice is hp.sideview
 */
		CP(Backhoe/hp.sideview.cfg DEV SIM, CFGDEVICE/hp.sideview.cfg)
		CP(Backhoe/terrain.cfg DEV, CFGDEVICE/terrain.cfg)
		CP(Backhoe/backhoe.cfg DEV, CFGDEVICE/backhoe.cfg)
		CP(Backhoe/bucket.cfg DEV, CFGDEVICE/bucket.cfg)
#	else
#		echo Backhoe is only an option on the CGC
#	endif
#endif
