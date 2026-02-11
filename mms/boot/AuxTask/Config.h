%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: dcitron $
 *     $Date: 2014/03/10 08:06:32 $
 *    $State: Exp $
 *   Purpose: Load configuration files for LHD Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */
#if defined NEWUI && !defined UGUI
CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/Tasks.cfg)
CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/Tasks2.cfg)
CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/Tasks3.cfg)
CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/Tasks4.cfg)
#else
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks.cfg)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks2.cfg)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks3.cfg)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks4.cfg)
#endif
