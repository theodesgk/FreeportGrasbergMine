%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.21 $
 *   $Author: dcitron $
 *     $Date: 2016/09/12 05:22:29 $
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
#ifdef DELITE
#	define LITE _DELITE_=DELITE
#else
#	define LITE
#endif

echo Loading config files...
#ifdef UP
        CP(Goic/Main.cfg _CLASS_=CLASS _UP_=UP OPT,CFGDEVICE/Main.cfg)
#else
        CP(Goic/Main.cfg _CLASS_=CLASS OPT,CFGDEVICE/Main.cfg)
#endif

CP(Goic/Screen.cfg      OPT,         CFGDEVICE/Screen.cfg)
CP(Goic/English/MsgBox.cfg OPT,      CFGDEVICE/MsgBox.cfg)
CP(Goic/LANGUAGE/Ok.cfg OPT,         CFGDEVICE/Ok.cfg)
CP(Goic/LANGUAGE/Info.cfg OPT,       CFGDEVICE/Info.cfg)
CP(Goic/LANGUAGE/Prestart.cfg   OPT,CFGDEVICE/Prestart.cfg)
CP(Goic/LANGUAGE/ScrnCntrl.cfg OPT,      CFGDEVICE/ScrnCntrl.cfg )
CP(Goic/LANGUAGE/ScrnCntrl.mb.cfg OPT,   CFGDEVICE/ScrnCntrl.mb.cfg )
CP(Goic/CLASS/LANGUAGE/Actions.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Actions.cfg)
CP(Goic/common/yesNo.cfg, CFGDEVICE/yesNo.cfg )

/* NEWUI should only be loaded on PTX */
#ifdef NEWUI
/* Any files that have hard coded English use dictionary entries so
   it is not necessary to have redundant copies or links for other languages
*/
#define LANG    _LANGUAGE_=LANGUAGE
#ifdef PORTRAIT
#       define ORIENT   _PORTRAIT_=PORTRAIT
#else
#       define ORIENT
#endif
#if #class(truck) || #class(ug_truck)
#       define APP      truck
#endif
#if #class(excav) || #class(loaderlp) || #class(ug_loader)
#       define APP      excav
#endif
#if #class(auxil) || #class(graderlp) || #class(dozerlp)
#       define APP      auxil
#endif
#if #class(wtruck)
#       define APP      wtruck
#endif
#if #class(crusher)
#       define APP      crusher
#endif
#define LSTR    _APP_=APP LANG OPT ORIENT _UGUI_=yes
CP(Goic/CLASS/English/WinMgr_newui.cfg LSTR,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/Macro_newui.cfg LSTR,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/English/w0_newui.cfg LSTR,CFGDEVICE/w0.cfg)
CP(Goic/CLASS/LANGUAGE/w0.mb_newui.cfg LSTR,CFGDEVICE/w0.mb.cfg)
CP(Goic/English/w0.Icon_newui.cfg LSTR,CFGDEVICE/w0.Icon.cfg)
CP(Goic/English/w0.Text_newui.cfg LSTR,CFGDEVICE/w0.Text.cfg)
CP(Goic/English/w0.v1_newui.cfg LSTR,CFGDEVICE/w0.v1.cfg)
CP(Goic/English/w0.v2_newui.cfg LSTR,CFGDEVICE/w0.v2.cfg)
CP(Goic/English/w0.v3_newui.cfg     LSTR,CFGDEVICE/w0.v3.cfg)
CP(Goic/English/w0.v4_newui.cfg     LSTR,CFGDEVICE/w0.v4.cfg)
CP(Goic/English/w0.ScrnCntrl_newui.cfg LSTR,   CFGDEVICE/w0.ScrnCntrl.cfg )
CP(Goic/English/w0.Clock_newui.cfg LSTR,   CFGDEVICE/w0.Clock.cfg )
CP(Goic/English/Options_newui.cfg LSTR,CFGDEVICE/Options.cfg)
CP(Goic/English/w0.RView_newui.cfg LSTR,CFGDEVICE/w0.RView.cfg)
CP(Goic/English/Kp_newui.cfg LSTR,CFGDEVICE/Kp.cfg)
CP(Goic/English/Kp2_newui.cfg LSTR,CFGDEVICE/Kp2.cfg)
CP(Goic/English/Kp3_newui.cfg LSTR,CFGDEVICE/Kp3.cfg)
#  ifdef PORTRAIT
   CP(Goic/English/Prestart_portrait.cfg LSTR,CFGDEVICE/Prestart.cfg)
#  endif
#else
CP(Goic/CLASS/LANGUAGE/Macro.cfg _LANGUAGE_=LANGUAGE LITE OPT,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/w0.cfg OPT,CFGDEVICE/w0.cfg)
CP(Goic/CLASS/LANGUAGE/w0.mb.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/w0.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Icon.cfg OPT,CFGDEVICE/w0.Icon.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Text.cfg OPT,CFGDEVICE/w0.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v1.cfg OPT,CFGDEVICE/w0.v1.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v2.cfg OPT,CFGDEVICE/w0.v2.cfg)
CP(Goic/LANGUAGE/w0.v3.cfg     OPT,CFGDEVICE/w0.v3.cfg)
CP(Goic/LANGUAGE/Options.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Options.cfg)
CP(Goic/LANGUAGE/w0.Clock.cfg OPT,   CFGDEVICE/w0.Clock.cfg )
CP(Goic/LANGUAGE/w0.Comm.cfg OPT,    CFGDEVICE/w0.Comm.cfg )
CP(Goic/LANGUAGE/w0.Kill.cfg OPT,   CFGDEVICE/w0.Kill.cfg )
CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/w0.ScrnCntrl.cfg )
CP(Goic/LANGUAGE/Ku.cfg OPT,         CFGDEVICE/Ku.cfg )
CP(Goic/LANGUAGE/Ks.cfg OPT,         CFGDEVICE/Ks.cfg )
CP(Goic/LANGUAGE/Kn.cfg OPT,         CFGDEVICE/Kn.cfg )
CP(Goic/LANGUAGE/Kp2.cfg OPT,        CFGDEVICE/Kp2.cfg)
CP(Goic/LANGUAGE/Kp.cfg OPT,         CFGDEVICE/Kp.cfg)
#endif

#if #arch(pe)
CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/wk.ScrnCntrl.cfg )
#else
ln CFGDEVICE/w0.ScrnCntrl.cfg wk.ScrnCntrl.cfg
#endif
CP(Goic/LANGUAGE/ScrnCntrl.Flash.cfg OPT,   CFGDEVICE/ScrnCntrl.Flash.cfg )
CP(Goic/LANGUAGE/FlashCntrl.cfg OPT,      CFGDEVICE/FlashCntrl.cfg )
CP(Goic/LANGUAGE/Material.cfg       OPT,CFGDEVICE/Material.cfg)
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

#ifdef ARG1
#	define ARG_FILE <ARG1/Config.h>
#	define ARG_NAME ARG1
#	include ARG_FILE
#	undef	ARG_FILE
#	undef	ARG_NAME
#endif

#include <Cfg/Options.h>
#include <Cfg/Mainini.h>
