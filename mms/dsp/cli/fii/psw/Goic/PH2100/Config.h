%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.28 $
 *   $Author: dcitron $
 *     $Date: 2016/09/12 05:22:30 $
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
#ifdef DEVICE
#       define DEV      _DEVICE_=DEVICE
#else
#       define DEV
#endif
echo Loading config files...
#ifdef UP
        CP(Goic/Main.cfg _CLASS_=CLASS _UP_=UP DEV OPT,CFGDEVICE/Main.cfg)
#else
        CP(Goic/Main.cfg _CLASS_=CLASS DEV OPT,CFGDEVICE/Main.cfg)
#endif

CP(Goic/English/MsgBox.cfg OPT,CFGDEVICE/MsgBox.cfg)
CP(Goic/CLASS/LANGUAGE/Actions.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Actions.cfg)
CP(Goic/LANGUAGE/Ok.cfg OPT,CFGDEVICE/Ok.cfg)
CP(Goic/LANGUAGE/Status.cfg OPT,CFGDEVICE/Status.cfg)
CP(Goic/LANGUAGE/Material.cfg OPT,CFGDEVICE/Material.cfg)
CP(Goic/LANGUAGE/Down.cfg OPT,CFGDEVICE/Down.cfg)
CP(Goic/LANGUAGE/Delay.cfg OPT,CFGDEVICE/Delay.cfg)
CP(Goic/LANGUAGE/Standby.cfg OPT,CFGDEVICE/Standby.cfg)
CP(Goic/LANGUAGE/Prestart.cfg   OPT,CFGDEVICE/Prestart.cfg)
CP(Goic/CLASS/LANGUAGE/Split.cfg OPT,CFGDEVICE/Split.cfg)
CP(Goic/common/yesNo.cfg, CFGDEVICE/yesNo.cfg )

CP(Goic/common/Macro_utils.cfg OPT,CFGDEVICE/Macro_utils.cfg)

/* NEWUI should only be loaded on PTX */
#ifdef NEWUI
/* any files paths that are hard coded with English use dictionary entries so we
   don't have to have redundant files or links for other languages
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
#if #class(excav) || #class(loaderlp) || #class(ug_loader)
#       define APP      PH2100
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
CP(Goic/CLASS/wInfo.cfg LSTR,CFGDEVICE/wInfo.cfg)
#  ifdef PORTRAIT
   CP(Goic/English/Prestart_portrait.cfg LSTR,CFGDEVICE/Prestart.cfg)
   CP(Goic/CLASS/wInfo_portrait.cfg LSTR,CFGDEVICE/wInfo.cfg)
#  endif
#else
CP(Goic/CLASS/LANGUAGE/Macro.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/w0.cfg OPT,CFGDEVICE/w0.cfg)
CP(Goic/CLASS/LANGUAGE/w0.mb.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/w0.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Icon.cfg OPT,CFGDEVICE/w0.Icon.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Matl.cfg OPT,CFGDEVICE/w0.Matl.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Text.cfg OPT,CFGDEVICE/w0.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v1.cfg OPT,CFGDEVICE/w0.v1.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v2.cfg OPT,CFGDEVICE/w0.v2.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v3.cfg OPT,CFGDEVICE/w0.v3.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Clock.cfg OPT,   CFGDEVICE/w0.Clock.cfg )
CP(Goic/LANGUAGE/w0.Comm.cfg OPT,    CFGDEVICE/w0.Comm.cfg )
CP(Goic/CLASS/LANGUAGE/w0.v4.cfg OPT,   CFGDEVICE/w0.v4.cfg )
CP(Goic/LANGUAGE/Options.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Options.cfg)
CP(Goic/LANGUAGE/w0.Kill.cfg OPT,   CFGDEVICE/w0.Kill.cfg )
CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/w0.ScrnCntrl.cfg )
CP(Goic/LANGUAGE/Ku.cfg OPT,         CFGDEVICE/Ku.cfg )
CP(Goic/LANGUAGE/Ks.cfg OPT,         CFGDEVICE/Ks.cfg )
CP(Goic/LANGUAGE/Kn.cfg OPT,         CFGDEVICE/Kn.cfg )
CP(Goic/LANGUAGE/Kp2.cfg OPT,        CFGDEVICE/Kp2.cfg)
CP(Goic/LANGUAGE/Kp.cfg OPT,         CFGDEVICE/Kp.cfg )
CP(Goic/CLASS/wInfo.cfg OPT,       CFGDEVICE/wInfo.cfg)
#endif

#include <Cfg/Options.h>
#include <Cfg/Mainini.h>
CP(Goic/Screen.cfg OPT, CFGDEVICE/Screen.cfg)
CP(Goic/LANGUAGE/ScrnCntrl.cfg OPT,      CFGDEVICE/ScrnCntrl.cfg )
CP(Goic/LANGUAGE/ScrnCntrl.mb.cfg OPT,   CFGDEVICE/ScrnCntrl.mb.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,   CFGDEVICE/wk.ScrnCntrl.cfg )
#else
ln CFGDEVICE/w0.ScrnCntrl.cfg wk.ScrnCntrl.cfg
#endif
CP(Goic/LANGUAGE/ScrnCntrl.Flash.cfg OPT,   CFGDEVICE/ScrnCntrl.Flash.cfg )
CP(Goic/LANGUAGE/FlashCntrl.cfg OPT,      CFGDEVICE/FlashCntrl.cfg )
CP(Goic/LANGUAGE/Material2.cfg       OPT,CFGDEVICE/Material2.cfg)
#if #arch(pe)
#  ifdef PORTRAIT
   CP(Goic/English/Material_portrait.cfg       OPT,CFGDEVICE/Material.cfg)
   CP(Goic/English/Material2_portrait.cfg       OPT,CFGDEVICE/Material2.cfg)
   CP(Goic/English/Material2_portrait.cfg       OPT,CFGDEVICE/Material3.cfg)
   CP(Goic/English/Material2_portrait.cfg       OPT,CFGDEVICE/Material4.cfg)
   CP(Goic/English/Material2_portrait.cfg       OPT,CFGDEVICE/Material5.cfg)
#  else
   CP(Goic/LANGUAGE/Material2.cfg       OPT,CFGDEVICE/Material3.cfg)
   CP(Goic/LANGUAGE/Material2.cfg       OPT,CFGDEVICE/Material4.cfg)
   CP(Goic/LANGUAGE/Material2.cfg       OPT,CFGDEVICE/Material5.cfg)
#  endif
#else
ln CFGDEVICE/Material2.cfg Material3.cfg
ln CFGDEVICE/Material2.cfg Material4.cfg
ln CFGDEVICE/Material2.cfg Material5.cfg
#endif
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
CP(Goic/LANGUAGE/Locs.cfg OPT,                  CFGDEVICE/Locs.cfg)
CP(Goic/LANGUAGE/Trucks.cfg OPT,                CFGDEVICE/Trucks.cfg)
#if #arch(pe)
#  ifdef PORTRAIT
   CP(Goic/English/Trucks_portrait.cfg OPT,                CFGDEVICE/Trucks.cfg)
   CP(Goic/English/Trucks_portrait.cfg OPT,                CFGDEVICE/Trucks2.cfg)
   CP(Goic/English/Trucks_portrait.cfg OPT,                CFGDEVICE/Trucks3.cfg)
   CP(Goic/English/Trucks_portrait.cfg OPT,                CFGDEVICE/Trucks4.cfg)
#  else
   CP(Goic/LANGUAGE/Trucks.cfg OPT,                CFGDEVICE/Trucks2.cfg)
   CP(Goic/LANGUAGE/Trucks.cfg OPT,                CFGDEVICE/Trucks3.cfg)
   CP(Goic/LANGUAGE/Trucks.cfg OPT,                CFGDEVICE/Trucks4.cfg)
#  endif
#else
ln CFGDEVICE/Trucks.cfg Trucks2.cfg
ln CFGDEVICE/Trucks.cfg Trucks3.cfg
ln CFGDEVICE/Trucks.cfg Trucks4.cfg
#endif
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit.cfg)
#if #arch(pe)
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit03.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit04.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit05.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit06.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit07.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit08.cfg )

CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit032.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit042.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit052.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit062.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit072.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit082.cfg )

CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit033.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit043.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit053.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit063.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit073.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit083.cfg )

CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit034.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit044.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit054.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit064.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit074.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit084.cfg )

CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit035.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit045.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit055.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit065.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit075.cfg )
CP(Goic/LANGUAGE/LUnit.cfg OPT,                 CFGDEVICE/LUnit085.cfg )
#else
ln CFGDEVICE/LUnit.cfg LUnit03.cfg
ln CFGDEVICE/LUnit.cfg LUnit04.cfg
ln CFGDEVICE/LUnit.cfg LUnit05.cfg
ln CFGDEVICE/LUnit.cfg LUnit06.cfg
ln CFGDEVICE/LUnit.cfg LUnit07.cfg
ln CFGDEVICE/LUnit.cfg LUnit08.cfg
ln CFGDEVICE/LUnit.cfg LUnit032.cfg
ln CFGDEVICE/LUnit.cfg LUnit042.cfg
ln CFGDEVICE/LUnit.cfg LUnit052.cfg
ln CFGDEVICE/LUnit.cfg LUnit062.cfg
ln CFGDEVICE/LUnit.cfg LUnit072.cfg
ln CFGDEVICE/LUnit.cfg LUnit082.cfg
ln CFGDEVICE/LUnit.cfg LUnit033.cfg
ln CFGDEVICE/LUnit.cfg LUnit043.cfg
ln CFGDEVICE/LUnit.cfg LUnit053.cfg
ln CFGDEVICE/LUnit.cfg LUnit063.cfg
ln CFGDEVICE/LUnit.cfg LUnit073.cfg
ln CFGDEVICE/LUnit.cfg LUnit083.cfg
ln CFGDEVICE/LUnit.cfg LUnit034.cfg
ln CFGDEVICE/LUnit.cfg LUnit044.cfg
ln CFGDEVICE/LUnit.cfg LUnit054.cfg
ln CFGDEVICE/LUnit.cfg LUnit064.cfg
ln CFGDEVICE/LUnit.cfg LUnit074.cfg
ln CFGDEVICE/LUnit.cfg LUnit084.cfg
ln CFGDEVICE/LUnit.cfg LUnit035.cfg
ln CFGDEVICE/LUnit.cfg LUnit045.cfg
ln CFGDEVICE/LUnit.cfg LUnit055.cfg
ln CFGDEVICE/LUnit.cfg LUnit065.cfg
ln CFGDEVICE/LUnit.cfg LUnit075.cfg
ln CFGDEVICE/LUnit.cfg LUnit085.cfg
#endif
