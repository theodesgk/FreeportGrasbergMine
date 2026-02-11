/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/01/12 21:30:59 $
 *    $State: Exp $
 *   Purpose: Load standalone Vims Simulator configuration files.
 *            
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
        echo VimsSim can only be an option (config file)
#else
#ifndef MODEL
#	define MODEL
#endif
	CP(MineCare/Vims/VimsSim.cfg _MODEL_=MODEL, CFGDEVICE/VimsSim.cfg)
#endif
