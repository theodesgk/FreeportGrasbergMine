/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2001
 *               All Rights Reserved
 *  $RCSfile: Ether.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2002/10/31 16:49:25 $
 *    $State: Exp $
 *   Purpose: Configure 802.3 Ethernet LAN interface.
 * * * * * * * * * * * * * * * * * * *
 */
#ifdef ETHERNET
	echo Using IP address ETHERNET for ethernet network...
	CP(Cfg/Args.cfg ipaddr ETHERNET,CFGDEVICE/eth0.cfg)
#endif
