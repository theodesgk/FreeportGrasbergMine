%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.9 $
 *   $Author: dcitron $
 *     $Date: 2013/10/03 07:03:29 $
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
        CP(Goic/Main.cfg _CLASS_=CLASS _UP_=UP OPT,CFGDEVICE/Main.cfg)
#else
        CP(Goic/Main.cfg _CLASS_=CLASS OPT,CFGDEVICE/Main.cfg)
#endif

CP(Goic/Screen.cfg      OPT,         CFGDEVICE/Screen.cfg)
CP(Goic/English/MsgBox.cfg OPT,      CFGDEVICE/MsgBox.cfg)
CP(Goic/LANGUAGE/Ku.cfg OPT,         CFGDEVICE/Ku.cfg )
CP(Goic/LANGUAGE/Ks.cfg OPT,         CFGDEVICE/Ks.cfg )
CP(Goic/LANGUAGE/Kn.cfg OPT,         CFGDEVICE/Kn.cfg )
CP(Goic/LANGUAGE/Kp2.cfg OPT,        CFGDEVICE/Kp2.cfg)
CP(Goic/LANGUAGE/Kp.cfg OPT,         CFGDEVICE/Kp.cfg)
CP(Goic/LANGUAGE/Ok.cfg OPT,         CFGDEVICE/Ok.cfg)
CP(Goic/LANGUAGE/Info.cfg OPT,       CFGDEVICE/Info.cfg)
CP(Goic/LANGUAGE/ScrnCntrl.cfg OPT,      CFGDEVICE/ScrnCntrl.cfg )
CP(Goic/LANGUAGE/ScrnCntrl.mb.cfg OPT,   CFGDEVICE/ScrnCntrl.mb.cfg )
CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/w0.ScrnCntrl.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/wk.ScrnCntrl.cfg )
#else
ln CFGDEVICE/w0.ScrnCntrl.cfg wk.ScrnCntrl.cfg
#endif
CP(Goic/LANGUAGE/ScrnCntrl.Flash.cfg OPT,   CFGDEVICE/ScrnCntrl.Flash.cfg )
CP(Goic/LANGUAGE/FlashCntrl.cfg OPT,      CFGDEVICE/FlashCntrl.cfg )
CP(Goic/LANGUAGE/w0.Clock.cfg OPT,   CFGDEVICE/w0.Clock.cfg )
CP(Goic/LANGUAGE/w0.Comm.cfg OPT,    CFGDEVICE/w0.Comm.cfg )
CP(Goic/common/yesNo.cfg, CFGDEVICE/yesNo.cfg )
CP(Goic/LANGUAGE/w0.Kill.cfg OPT,   CFGDEVICE/w0.Kill.cfg )
CP(Goic/LANGUAGE/Material.cfg       OPT,CFGDEVICE/Material.cfg)
CP(Goic/LANGUAGE/Prestart.cfg   OPT,CFGDEVICE/Prestart.cfg)
CP(Goic/LANGUAGE/Status.cfg OPT,CFGDEVICE/Status.cfg)
CP(Goic/LANGUAGE/Delay.cfg OPT,CFGDEVICE/Delay.cfg)
CP(Goic/LANGUAGE/Delay2.cfg     OPT,CFGDEVICE/Delay2.cfg)
#if #arch(pe)
CP(Goic/LANGUAGE/Delay2.cfg     OPT,CFGDEVICE/Delay3.cfg)
CP(Goic/LANGUAGE/Delay2.cfg     OPT,CFGDEVICE/Delay4.cfg)
CP(Goic/LANGUAGE/Delay2.cfg     OPT,CFGDEVICE/Delay5.cfg)
CP(Goic/LANGUAGE/Delay2.cfg     OPT,CFGDEVICE/Delay6.cfg)
#else
ln CFGDEVICE/Delay2.cfg Delay3.cfg
ln CFGDEVICE/Delay2.cfg Delay4.cfg
ln CFGDEVICE/Delay2.cfg Delay5.cfg
ln CFGDEVICE/Delay2.cfg Delay6.cfg
#endif
CP(Goic/LANGUAGE/Ready.cfg     OPT,CFGDEVICE/Ready.cfg)
CP(Goic/LANGUAGE/Ready2.cfg     OPT,CFGDEVICE/Ready2.cfg)
#if #arch(pe)
CP(Goic/LANGUAGE/Ready2.cfg     OPT,CFGDEVICE/Ready3.cfg)
CP(Goic/LANGUAGE/Ready2.cfg     OPT,CFGDEVICE/Ready4.cfg)
CP(Goic/LANGUAGE/Ready2.cfg     OPT,CFGDEVICE/Ready5.cfg)
CP(Goic/LANGUAGE/Ready2.cfg     OPT,CFGDEVICE/Ready6.cfg)
#else
ln CFGDEVICE/Ready2.cfg Ready3.cfg
ln CFGDEVICE/Ready2.cfg Ready4.cfg
ln CFGDEVICE/Ready2.cfg Ready5.cfg
ln CFGDEVICE/Ready2.cfg Ready6.cfg
#endif
CP(Goic/LANGUAGE/Down.cfg OPT,CFGDEVICE/Down.cfg)
CP(Goic/LANGUAGE/Down2.cfg     OPT,CFGDEVICE/Down2.cfg)
#if #arch(pe)
CP(Goic/LANGUAGE/Down2.cfg     OPT,CFGDEVICE/Down3.cfg)
CP(Goic/LANGUAGE/Down2.cfg     OPT,CFGDEVICE/Down4.cfg)
CP(Goic/LANGUAGE/Down2.cfg     OPT,CFGDEVICE/Down5.cfg)
CP(Goic/LANGUAGE/Down2.cfg     OPT,CFGDEVICE/Down6.cfg)
#else
ln CFGDEVICE/Down2.cfg Down3.cfg
ln CFGDEVICE/Down2.cfg Down4.cfg
ln CFGDEVICE/Down2.cfg Down5.cfg
ln CFGDEVICE/Down2.cfg Down6.cfg
#endif
CP(Goic/LANGUAGE/Standby.cfg OPT,CFGDEVICE/Standby.cfg)
CP(Goic/LANGUAGE/Standby2.cfg     OPT,CFGDEVICE/Standby2.cfg)
#if #arch(pe)
CP(Goic/LANGUAGE/Standby2.cfg     OPT,CFGDEVICE/Standby3.cfg)
CP(Goic/LANGUAGE/Standby2.cfg     OPT,CFGDEVICE/Standby4.cfg)
CP(Goic/LANGUAGE/Standby2.cfg     OPT,CFGDEVICE/Standby5.cfg)
CP(Goic/LANGUAGE/Standby2.cfg     OPT,CFGDEVICE/Standby6.cfg)
#else
ln CFGDEVICE/Standby2.cfg Standby3.cfg
ln CFGDEVICE/Standby2.cfg Standby4.cfg
ln CFGDEVICE/Standby2.cfg Standby5.cfg
ln CFGDEVICE/Standby2.cfg Standby6.cfg
#endif
CP(Goic/LANGUAGE/w0.v3.cfg     OPT,CFGDEVICE/w0.v3.cfg)
CP(Goic/LANGUAGE/TestInstall.cfg     OPT,CFGDEVICE/TestInstall.cfg)
CP(Goic/LANGUAGE/Location.cfg     OPT,CFGDEVICE/Location.cfg)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks.cfg)
#if #arch(pe)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks2.cfg)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks3.cfg)
CP(Goic/LANGUAGE/Tasks.cfg     OPT,CFGDEVICE/Tasks4.cfg)
#else
ln CFGDEVICE/Tasks.cfg Tasks2.cfg
ln CFGDEVICE/Tasks.cfg Tasks3.cfg
ln CFGDEVICE/Tasks.cfg Tasks4.cfg
#endif
CP(Goic/LANGUAGE/Options.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Options.cfg)
CP(Goic/CLASS/LANGUAGE/Macro.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/LANGUAGE/Actions.cfg OPT,CFGDEVICE/Actions.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/w0.cfg OPT,CFGDEVICE/w0.cfg)
CP(Goic/CLASS/LANGUAGE/w0.mb.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/w0.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Icon.cfg OPT,CFGDEVICE/w0.Icon.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Text.cfg OPT,CFGDEVICE/w0.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v1.cfg OPT,CFGDEVICE/w0.v1.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v2.cfg OPT,CFGDEVICE/w0.v2.cfg)

CP(Goic/CLASS/LANGUAGE/Wind.cfg OPT,CFGDEVICE/Wind.cfg)
CP(Goic/CLASS/LANGUAGE/Direction.cfg OPT,CFGDEVICE/Direction.cfg)
CP(Goic/CLASS/LANGUAGE/Sky.cfg OPT,CFGDEVICE/Sky.cfg)
CP(Goic/CLASS/LANGUAGE/Precip.cfg OPT,CFGDEVICE/Precip.cfg)
CP(Goic/CLASS/LANGUAGE/Spray.cfg OPT,CFGDEVICE/Spray.cfg)
CP(Goic/CLASS/LANGUAGE/Spray2.cfg OPT,CFGDEVICE/Spray2.cfg)
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Spray2.cfg OPT,CFGDEVICE/Spray3.cfg)
CP(Goic/CLASS/LANGUAGE/Spray2.cfg OPT,CFGDEVICE/Spray4.cfg)
#else
ln CFGDEVICE/Spray2.cfg Spray3.cfg
ln CFGDEVICE/Spray2.cfg Spray4.cfg
#endif
CP(Goic/CLASS/LANGUAGE/KpMinus.cfg OPT,CFGDEVICE/KpMinus.cfg)
CP(Goic/CLASS/LANGUAGE/w1.cfg OPT,CFGDEVICE/w1.cfg)
CP(Goic/CLASS/LANGUAGE/w1.mb.cfg OPT,CFGDEVICE/w1.mb.cfg)

#include <Cfg/Options.h>
#include <Cfg/Mainini.h>

