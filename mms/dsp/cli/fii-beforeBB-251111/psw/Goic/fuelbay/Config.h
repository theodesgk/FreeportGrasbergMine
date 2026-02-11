%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.6 $
 *   $Author: gsousa $
 *     $Date: 2016/12/15 12:26:08 $
 *    $State: Exp $
 *   Purpose: Load configuration files for LHD Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef LANGUAGE
#       define LANGUAGE English
#endif
#ifdef OPTIONS
#       define OPT      _OPTIONS_=OPTIONS
#else
#       define OPT
#endif

echo Loading config files...
#ifdef UP
        CP(Goic/Main.cfg _CLASS_=CLASS _UP_=UP,CFGDEVICE/Main.cfg)
#else
        CP(Goic/Main.cfg _CLASS_=CLASS,CFGDEVICE/Main.cfg)
#endif

CP(Goic/Screen.cfg      OPT,         CFGDEVICE/Screen.cfg)
CP(Goic/English/MsgBox.cfg OPT,      CFGDEVICE/MsgBox.cfg)
CP(Goic/LANGUAGE/Ok.cfg OPT,         CFGDEVICE/Ok.cfg)
CP(Goic/LANGUAGE/Kp.cfg OPT,         CFGDEVICE/Kp.cfg)
CP(Goic/LANGUAGE/Ku.cfg OPT,         CFGDEVICE/Ku.cfg )
CP(Goic/LANGUAGE/Ks.cfg OPT,         CFGDEVICE/Ks.cfg )
CP(Goic/LANGUAGE/Kn.cfg OPT,         CFGDEVICE/Kn.cfg )
CP(Goic/LANGUAGE/Kp2.cfg OPT,        CFGDEVICE/Kp2.cfg)
CP(Goic/LANGUAGE/ScrnCntrl.cfg OPT,      CFGDEVICE/ScrnCntrl.cfg )
CP(Goic/LANGUAGE/ScrnCntrl.mb.cfg OPT,   CFGDEVICE/ScrnCntrl.mb.cfg )
CP(Goic/LANGUAGE/ScrnCntrl.Flash.cfg OPT,   CFGDEVICE/ScrnCntrl.Flash.cfg )
CP(Goic/LANGUAGE/FlashCntrl.cfg OPT,      CFGDEVICE/FlashCntrl.cfg )
CP(Goic/LANGUAGE/Options.cfg OPT,CFGDEVICE/Options.cfg)
CP(Goic/LANGUAGE/Prestart.cfg   OPT,CFGDEVICE/Prestart.cfg)

CP(Goic/CLASS/LANGUAGE/Macro.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/w0.cfg OPT,CFGDEVICE/w0.cfg)
CP(Goic/CLASS/LANGUAGE/w0.mb.cfg OPT,CFGDEVICE/w0.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Text.cfg OPT,CFGDEVICE/w0.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v1.cfg OPT,CFGDEVICE/w0.v1.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v2.cfg OPT,CFGDEVICE/w0.v2.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v3.cfg     OPT,CFGDEVICE/w0.v3.cfg)
CP(Goic/CLASS/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/w0.ScrnCntrl.cfg )
CP(Goic/CLASS/LANGUAGE/Fluid.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Fluid.cfg)
CP(Goic/CLASS/LANGUAGE/Fluid.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Fluid2.cfg)
CP(Goic/CLASS/LANGUAGE/Fluid.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Fluid3.cfg)

#ifdef ARG1
#	define ARG_FILE <ARG1/Config.h>
#	define ARG_NAME ARG1
#	include ARG_FILE
#	undef	ARG_FILE
#	undef	ARG_NAME
#endif

#include <Cfg/Options.h>
#include <Cfg/Mainini.h>

