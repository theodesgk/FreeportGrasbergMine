/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.4 $
 *   $Author: dcitron $
 *     $Date: 2012/01/19 22:37:49 $
 *    $State: Exp $
 *   Purpose: Load script for Hub's application partition.
 * * * * * * * * * * * * * * * * * * *
 */
echo Loading Port Embedded files ....
mkdir APPDEVICE
#if #arch(pe.java)
LD(pe.jar,APPDEVICE/pe.jar)
LD(oms.jar,APPDEVICE/oms.jar)
LD(spooler.jar,APPDEVICE/spooler.jar)
LD(persistence.jar,APPDEVICE/persistence.jar)
LD(threadpool.jar,APPDEVICE/threadpool.jar)
LD(util.jar,APPDEVICE/util.jar)
LD(uoemint.jar,APPDEVICE/uoemint.jar)
LD(minecare.jar,APPDEVICE/minecare.jar)
LD(blockvector.jar,APPDEVICE/blockvector.jar)
#endif
