/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1999
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: olson $
 *     $Date: 2002/10/23 00:07:58 $
 *    $State: Exp $
 *   Purpose: Configuration script for Replicator and ReplicatorController
 * * * * * * * * * * * * * * * * * * *
 */
#if #appname(Mpr)
CP(ReplicatorController,APPDEVICE/ReplicatorController)
#elif #appname(Hub)
CP(ReplicatorProxy,APPDEVICE/ReplicatorProxy)
#else
CP(Replicator,APPDEVICE/Replicator)
#endif
