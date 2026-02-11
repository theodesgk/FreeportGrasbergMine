/*
 *  * * * * * * * * * * * * * * * * * * *
 *   *  DISPATCH Real-Time Firmware Module
 *    * Copyright (c) Modular Mining Systems, 1982-1995
 *     *               All Rights Reserved
 *      *  $RCSfile: App.h,v $
 *       * $Revision: 1.1 $
 *        *   $Author: latum $
 *         *     $Date: 2008/01/15 20:24:17 $
 *          *    $State: Exp $
 *           *   Purpose: Generic GSP application partition load script.
 *            * * * * * * * * * * * * * * * * * * *
 *             */
#include <App/Device.h>
#ifndef ISOPTION
        LD(Macro,APPDEVICE/Macro)
#endif
	LD(LoadMetrics,APPDEVICE/LoadMetrics)
	
