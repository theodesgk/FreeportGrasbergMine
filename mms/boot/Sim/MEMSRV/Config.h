/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/11/18 23:04:47 $
 *    $State: Exp $
 *   Purpose: Load standalone Vims Simulator configuration files.
 *            
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
        echo MEMSRVSim can only be an option (config file)
#else
	CP(MineCare/MEMSRV/MEMSRVSim.cfg, CFGDEVICE/MEMSRVSim.cfg)
#endif
