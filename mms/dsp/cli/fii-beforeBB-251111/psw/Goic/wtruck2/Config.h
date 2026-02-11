%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2013/10/03 07:03:29 $
 *    $State: Exp $
 *   Purpose: Load configuration files for LHD Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */
echo Loading wtruck files...
rm CFGDEVICE/WinMgr.cfg
rm CFGDEVICE/Macro.cfg
rm CFGDEVICE/Actions.cfg
CP(Goic/English/MsgBox.cfg OPT,CFGDEVICE/MsgBox.cfg)
CP(Goic/wtruck/LANGUAGE/Macro.cfg OPT,CFGDEVICE/Macro.cfg)
CP(Goic/wtruck/LANGUAGE/Actions.cfg OPT,CFGDEVICE/Actions.cfg)
CP(Goic/wtruck/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/wtruck/LANGUAGE/Wind.cfg OPT,CFGDEVICE/Wind.cfg)
CP(Goic/wtruck/LANGUAGE/Direction.cfg OPT,CFGDEVICE/Direction.cfg)
CP(Goic/wtruck/LANGUAGE/Sky.cfg OPT,CFGDEVICE/Sky.cfg)
CP(Goic/wtruck/LANGUAGE/Precip.cfg OPT,CFGDEVICE/Precip.cfg)
CP(Goic/wtruck/LANGUAGE/Spray.cfg OPT,CFGDEVICE/Spray.cfg)
CP(Goic/wtruck/LANGUAGE/Spray2.cfg OPT,CFGDEVICE/Spray2.cfg)
CP(Goic/wtruck/LANGUAGE/Spray2.cfg OPT,CFGDEVICE/Spray3.cfg)
CP(Goic/wtruck/LANGUAGE/Spray2.cfg OPT,CFGDEVICE/Spray4.cfg)
CP(Goic/wtruck/LANGUAGE/KpMinus.cfg OPT,CFGDEVICE/KpMinus.cfg)
CP(Goic/wtruck/LANGUAGE/w1.cfg OPT,CFGDEVICE/w1.cfg)
CP(Goic/wtruck/LANGUAGE/w1.mb.cfg OPT,CFGDEVICE/w1.mb.cfg)


