/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1999
 *               All Rights Reserved
 *  $RCSfile: OMS.h,v $
 * $Revision: 1.4 $
 *   $Author: latum $
 *     $Date: 2005/06/03 22:58:55 $
 *    $State: Exp $
 *   Purpose: Instantiate the OMS network object, Nfs object,
 *	      and miscellanous other objects which get instantiated
 * 	      after all the network drivers.
 * * * * * * * * * * * * * * * * * * *
 */
object	OMS
module	Nfs
object	Nfs name:net
module	File
object	File path:y
