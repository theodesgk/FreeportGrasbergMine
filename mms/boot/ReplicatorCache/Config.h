/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2003
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2003/06/27 23:47:16 $
 *    $State: Exp $
 *   Purpose: Configuration script for ReplicatorCache
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef SENDTO
#   if #module(Prism)
#   	define SENDTO wan0.-1
#   elif #module(Rp)
#	define SENDTO Rp.-1
#   else
#	define SENDTO none
#   endif
#endif
#ifndef TIMEOUT
#	define TIMEOUT
#endif
CP(ReplicatorCache/Replicator.cfg SENDTO TIMEOUT,CFGDEVICE/Replicator.cfg)
