/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Loop.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Generic Loop for master and slave.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef LOOPSPEED
#	define LOOPSPEED 38400
#endif
#ifndef LOOPNET
#	define LOOPNET 192.168.202.0
#endif
#if #arch(angus)
	CP(Cfg/Args.cfg port scc2a speed LOOPSPEED ipaddr LOOPNET,CFGDEVICE/Loop.cfg)
#else
	CP(Cfg/Args.cfg speed LOOPSPEED ipaddr LOOPNET,CFGDEVICE/Loop.cfg)
#endif
ln CFGDEVICE/Loop.cfg Master.cfg
