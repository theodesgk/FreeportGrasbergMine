/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Slip.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Configure slip speed and buffer size.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef SLIPSPEED
#	define SLIPSPEED 38400
#endif
#ifndef SLIPNET
#	define SLIPNET 192.168.201.0
#endif
CP(Cfg/Args.cfg speed SLIPSPEED ipaddr SLIPNET,CFGDEVICE/Slip.cfg)
