/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2008/07/28 20:18:08 $
 *    $State: Exp $
 *   Purpose: Load script for Graphical Operator Interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
LD(Gui,APPDEVICE/Gui)
#include <App/Options.h>
#if #option(StoreForward)
#include <Spooler/App.h>
#endif
