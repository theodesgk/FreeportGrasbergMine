/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.14 $
 *   $Author: dcitron $
 *     $Date: 2013/10/03 07:03:29 $
 *    $State: Exp $
 *   Purpose: Load configuration files for Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * This is an example of how we might include the truck's Config.h
 * while loading CLASS=ColorForeman.  It depends on having the `std'
 * link defined in the /psw/boot/Goic directory.  Note that we must
 * redefine CLASS while including this file since it also used the
 * CLASS macro.
 */
#if #arg1(ug)
#include <Goic/foreman-ug/Config.h>
#else
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
#ifdef OPTIONS
#	define OPT	_OPTIONS_=OPTIONS
#else
#	define OPT
#endif
echo Loading config files...
#ifdef UP
	CP(Goic/Main.cfg _CLASS_=CLASS _UP_=UP OPT,CFGDEVICE/Main.cfg)
#else
	CP(Goic/Main.cfg _CLASS_=CLASS OPT,CFGDEVICE/Main.cfg)
#endif
CP(Goic/English/MsgBox.cfg OPT,CFGDEVICE/MsgBox.cfg)
CP(Goic/LANGUAGE/Kp.cfg OPT,CFGDEVICE/Kp.cfg)
CP(Goic/LANGUAGE/Ok.cfg OPT,CFGDEVICE/Ok.cfg)
CP(Goic/CLASS/LANGUAGE/Locs.cfg OPT,CFGDEVICE/Locs.cfg)
CP(Goic/CLASS/LANGUAGE/Macro.cfg _LANGUAGE_=LANGUAGE OPT,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/LANGUAGE/Shovels.cfg OPT,CFGDEVICE/Shovels.cfg)
CP(Goic/CLASS/LANGUAGE/Options.cfg OPT,CFGDEVICE/Options.cfg)
CP(Goic/CLASS/LANGUAGE/Trucks.cfg OPT,CFGDEVICE/Trucks.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/w0.cfg OPT,CFGDEVICE/w0.cfg)
CP(Goic/LANGUAGE/w0.Comm.cfg OPT,    CFGDEVICE/w0.Comm.cfg )
CP(Goic/common/yesNo.cfg, CFGDEVICE/yesNo.cfg )
CP(Goic/CLASS/LANGUAGE/w0.mb.cfg OPT,CFGDEVICE/w0.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w0.Text.cfg OPT,CFGDEVICE/w0.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v1.cfg OPT,CFGDEVICE/w0.v1.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v2.cfg OPT,CFGDEVICE/w0.v2.cfg)
CP(Goic/CLASS/LANGUAGE/w0.v3.cfg OPT,CFGDEVICE/w0.v3.cfg)
CP(Goic/CLASS/LANGUAGE/w1.cfg OPT,CFGDEVICE/w1.cfg)
CP(Goic/CLASS/LANGUAGE/w1.mb.cfg OPT,CFGDEVICE/w1.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w1.Text.cfg OPT,CFGDEVICE/w1.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w1.lp.cfg OPT,CFGDEVICE/w1.lp.cfg)
CP(Goic/CLASS/LANGUAGE/w2.cfg OPT,CFGDEVICE/w2.cfg)
CP(Goic/CLASS/LANGUAGE/w2.mb.cfg OPT,CFGDEVICE/w2.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w2.Text.cfg OPT,CFGDEVICE/w2.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w4.cfg OPT,CFGDEVICE/w4.cfg)
CP(Goic/CLASS/LANGUAGE/w4.mb.cfg OPT,CFGDEVICE/w4.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w4.Text.cfg OPT,CFGDEVICE/w4.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w3.cfg OPT,CFGDEVICE/w3.cfg)
CP(Goic/CLASS/LANGUAGE/w3.mb.cfg OPT,CFGDEVICE/w3.mb.cfg)
CP(Goic/CLASS/LANGUAGE/w3.Text.cfg OPT,CFGDEVICE/w3.Text.cfg)
CP(Goic/CLASS/LANGUAGE/w5.cfg OPT,CFGDEVICE/w5.cfg)
CP(Goic/CLASS/LANGUAGE/w5.mb.cfg OPT,CFGDEVICE/w5.mb.cfg)
CP(icons/640x480/logo.icon,ICONDEVICE/snapshot.icon)
#include <Cfg/Mainini.h>
cp net/fonts/320x240/USAscx10.font              CFGDEVICE/USAscx10.font
cp net/fonts/320x240/USAscx12.font              CFGDEVICE/USAscx12.font
cp net/fonts/320x240/USAscx14.font              CFGDEVICE/USAscx14.font
cp net/fonts/320x240/USAscx16.font              CFGDEVICE/USAscx16.font
cp net/fonts/320x240/USAscx24.font              CFGDEVICE/USAscx24.font
CP(Goic/LANGUAGE/ScrnCntrl.cfg OPT,             CFGDEVICE/ScrnCntrl.cfg )
CP(Goic/LANGUAGE/ScrnCntrl.mb.cfg OPT,          CFGDEVICE/ScrnCntrl.mb.cfg )
#CP(Goic/LANGUAGE/w0.ScrnCntrl.cfg OPT,         CFGDEVICE/w0.ScrnCntrl.cfg )
cp net/Goic/CLASS/LANGUAGE/w0.ScrnCntrl.cfg     CFGDEVICE/w0.ScrnCntrl.cfg
##ln net/Goic/CLASS/LANGUAGE/w0.ScrnCntrl.cfg wk.ScrnCntrl.cfg
CP(Goic/LANGUAGE/ScrnCntrl.Flash.cfg OPT,       CFGDEVICE/ScrnCntrl.Flash.cfg )
CP(Goic/LANGUAGE/FlashCntrl.cfg OPT,            CFGDEVICE/FlashCntrl.cfg )
CP(Goic/LANGUAGE/Kp2.cfg OPT,                   CFGDEVICE/Kp2.cfg )
CP(Goic/LANGUAGE/Ku.cfg OPT,                    CFGDEVICE/Ku.cfg )
CP(Goic/LANGUAGE/Ks.cfg OPT,                    CFGDEVICE/Ks.cfg )
CP(Goic/LANGUAGE/Kn.cfg OPT,                    CFGDEVICE/Kn.cfg )
CP(Goic/LANGUAGE/Material.cfg OPT,              CFGDEVICE/Material.cfg )
CP(Goic/LANGUAGE/Material2.cfg OPT,             CFGDEVICE/Material2.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/Material2.cfg OPT,             CFGDEVICE/Material3.cfg )
CP(Goic/LANGUAGE/Material2.cfg OPT,             CFGDEVICE/Material4.cfg )
CP(Goic/LANGUAGE/Material2.cfg OPT,             CFGDEVICE/Material5.cfg )
CP(Goic/LANGUAGE/Material2.cfg OPT,             CFGDEVICE/Material6.cfg )
#else
ln CFGDEVICE/Material2.cfg Material3.cfg
ln CFGDEVICE/Material2.cfg Material4.cfg
ln CFGDEVICE/Material2.cfg Material5.cfg
ln CFGDEVICE/Material2.cfg Material6.cfg
#endif
CP(Goic/LANGUAGE/Prestart.cfg   OPT,            CFGDEVICE/Prestart.cfg)
CP(Goic/LANGUAGE/Prior.cfg OPT,                    CFGDEVICE/Prior.cfg )
CP(Goic/LANGUAGE/MPrior.cfg OPT,                    CFGDEVICE/MPrior.cfg )
CP(Goic/LANGUAGE/DPrior.cfg OPT,                    CFGDEVICE/DPrior.cfg )
#if #arg1(advanced)
CP(Goic/CLASS/LANGUAGE/Action1Adv.cfg OPT,         CFGDEVICE/Action1.cfg )
CP(Goic/CLASS/LANGUAGE/Action2Adv.cfg OPT,         CFGDEVICE/Action2.cfg )
CP(Goic/CLASS/LANGUAGE/ActionLAdv.cfg OPT,         CFGDEVICE/ActionL.cfg )
CP(Goic/CLASS/LANGUAGE/ActionAAdv.cfg OPT,         CFGDEVICE/ActionA.cfg )
#ifdef NEXTGEN
CP(Goic/CLASS/LANGUAGE/OtherAdv_nextgen.cfg OPT,	        CFGDEVICE/Other.cfg )
#else
CP(Goic/CLASS/LANGUAGE/OtherAdv.cfg OPT,	        CFGDEVICE/Other.cfg )
#endif
#else
CP(Goic/CLASS/LANGUAGE/Action1.cfg OPT,         CFGDEVICE/Action1.cfg )
CP(Goic/CLASS/LANGUAGE/Action2.cfg OPT,         CFGDEVICE/Action2.cfg )
CP(Goic/CLASS/LANGUAGE/ActionL.cfg OPT,         CFGDEVICE/ActionL.cfg )
CP(Goic/CLASS/LANGUAGE/ActionA.cfg OPT,         CFGDEVICE/ActionA.cfg )
#ifdef NEXTGEN
CP(Goic/CLASS/LANGUAGE/Other_nextgen.cfg OPT,	        CFGDEVICE/Other.cfg )
#else
CP(Goic/CLASS/LANGUAGE/Other.cfg OPT,	        CFGDEVICE/Other.cfg )
#endif
#endif
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Shovels.cfg OPT,CFGDEVICE/Shovels2.cfg)
CP(Goic/CLASS/LANGUAGE/Shovels.cfg OPT,CFGDEVICE/Shovels3.cfg)
CP(Goic/CLASS/LANGUAGE/Trucks.cfg OPT,CFGDEVICE/Trucks2.cfg)
CP(Goic/CLASS/LANGUAGE/Trucks.cfg OPT,CFGDEVICE/Trucks3.cfg)
CP(Goic/CLASS/LANGUAGE/Trucks.cfg OPT,CFGDEVICE/Trucks4.cfg)
#else
ln CFGDEVICE/Trucks.cfg Trucks2.cfg
ln CFGDEVICE/Trucks.cfg Trucks3.cfg
ln CFGDEVICE/Trucks.cfg Trucks4.cfg
ln CFGDEVICE/Shovels.cfg Shovels2.cfg
ln CFGDEVICE/Shovels.cfg Shovels3.cfg
#endif
CP(Goic/CLASS/LANGUAGE/EqAux.cfg OPT,	        CFGDEVICE/Aux.cfg )
CP(Goic/CLASS/LANGUAGE/Region.cfg OPT,	        CFGDEVICE/Region.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Region.cfg OPT,	        CFGDEVICE/Region2.cfg )
CP(Goic/CLASS/LANGUAGE/Region.cfg OPT,	        CFGDEVICE/Blends.cfg )
CP(Goic/CLASS/LANGUAGE/Region.cfg OPT,	        CFGDEVICE/Blends2.cfg )
#else
ln CFGDEVICE/Region.cfg Region2.cfg
ln CFGDEVICE/Region.cfg Blends.cfg
ln CFGDEVICE/Region.cfg Blends2.cfg
#endif
CP(Goic/CLASS/LANGUAGE/Lock.cfg OPT,	        CFGDEVICE/Lock.cfg )
CP(Goic/CLASS/LANGUAGE/Bar.cfg OPT,	        CFGDEVICE/Bar.cfg )
CP(Goic/CLASS/LANGUAGE/Unbar.cfg OPT,	        CFGDEVICE/Unbar.cfg )
CP(Goic/CLASS/LANGUAGE/Load.cfg OPT,	        CFGDEVICE/Load.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Load.cfg OPT,	        CFGDEVICE/Load2.cfg )
CP(Goic/CLASS/LANGUAGE/Load.cfg OPT,	        CFGDEVICE/Load3.cfg )
CP(Goic/CLASS/LANGUAGE/Load.cfg OPT,	        CFGDEVICE/Load4.cfg )
#else
ln CFGDEVICE/Load.cfg Load2.cfg
ln CFGDEVICE/Load.cfg Load3.cfg
ln CFGDEVICE/Load.cfg Load4.cfg
#endif
CP(Goic/CLASS/LANGUAGE/ManAsn.cfg OPT,	        CFGDEVICE/ManAsn.cfg )
CP(Goic/CLASS/LANGUAGE/Info.cfg OPT,	        CFGDEVICE/Info.cfg )
CP(Goic/CLASS/LANGUAGE/Bcast.cfg OPT,	        CFGDEVICE/Bcast.cfg )
CP(Goic/Screen.cfg OPT,                         CFGDEVICE/Screen.cfg )
CP(Goic/LANGUAGE/Status.cfg OPT,                CFGDEVICE/Status.cfg )
CP(Goic/CLASS/LANGUAGE/Ready.cfg OPT,	        CFGDEVICE/Ready.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Ready.cfg OPT,	        CFGDEVICE/Ready1_.cfg )
CP(Goic/CLASS/LANGUAGE/Ready.cfg OPT,	        CFGDEVICE/Ready2_.cfg )
CP(Goic/CLASS/LANGUAGE/Ready.cfg OPT,	        CFGDEVICE/ReadyA_.cfg )
#else
ln CFGDEVICE/Ready.cfg Ready1_.cfg
ln CFGDEVICE/Ready.cfg Ready2_.cfg
ln CFGDEVICE/Ready.cfg ReadyA_.cfg
#endif
CP(Goic/CLASS/LANGUAGE/ReadyL_.cfg OPT,	        CFGDEVICE/ReadyL_.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready2.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready1_2.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready2_2.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyL_2.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyA_2.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready1_3.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready2_3.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyL_3.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyA_3.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready1_4.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready2_4.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyL_4.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyA_4.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready1_5.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready2_5.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyL_5.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyA_5.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready1_6.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/Ready2_6.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyL_6.cfg )
CP(Goic/LANGUAGE/Ready2.cfg OPT,                CFGDEVICE/ReadyA_6.cfg )
#else
ln CFGDEVICE/Ready2.cfg Ready1_2.cfg
ln CFGDEVICE/Ready2.cfg Ready2_2.cfg
ln CFGDEVICE/Ready2.cfg ReadyL_2.cfg
ln CFGDEVICE/Ready2.cfg ReadyA_2.cfg
ln CFGDEVICE/Ready2.cfg Ready1_3.cfg
ln CFGDEVICE/Ready2.cfg Ready2_3.cfg
ln CFGDEVICE/Ready2.cfg ReadyL_3.cfg
ln CFGDEVICE/Ready2.cfg ReadyA_3.cfg
ln CFGDEVICE/Ready2.cfg Ready1_4.cfg
ln CFGDEVICE/Ready2.cfg Ready2_4.cfg
ln CFGDEVICE/Ready2.cfg ReadyL_4.cfg
ln CFGDEVICE/Ready2.cfg ReadyA_4.cfg 
ln CFGDEVICE/Ready2.cfg Ready1_5.cfg
ln CFGDEVICE/Ready2.cfg Ready2_5.cfg
ln CFGDEVICE/Ready2.cfg ReadyL_5.cfg
ln CFGDEVICE/Ready2.cfg ReadyA_5.cfg
ln CFGDEVICE/Ready2.cfg Ready1_6.cfg
ln CFGDEVICE/Ready2.cfg Ready2_6.cfg
ln CFGDEVICE/Ready2.cfg ReadyL_6.cfg
ln CFGDEVICE/Ready2.cfg ReadyA_6.cfg
#endif
CP(Goic/CLASS/LANGUAGE/Down.cfg OPT,	        CFGDEVICE/Down.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Down.cfg OPT,	        CFGDEVICE/Down1_.cfg )
CP(Goic/CLASS/LANGUAGE/Down.cfg OPT,	        CFGDEVICE/Down2_.cfg )
CP(Goic/CLASS/LANGUAGE/Down.cfg OPT,	        CFGDEVICE/DownA_.cfg )
#else
ln CFGDEVICE/Down.cfg Down1_.cfg
ln CFGDEVICE/Down.cfg Down2_.cfg
ln CFGDEVICE/Down.cfg DownA_.cfg
#endif
CP(Goic/CLASS/LANGUAGE/DownL_.cfg OPT,	        CFGDEVICE/DownL_.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down2.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down1_2.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down2_2.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownL_2.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownA_2.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down1_3.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down2_3.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownL_3.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownA_3.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down1_4.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down2_4.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownL_4.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownA_4.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down1_5.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down2_5.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownL_5.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownA_5.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down1_6.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/Down2_6.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownL_6.cfg )
CP(Goic/LANGUAGE/Down2.cfg OPT,                 CFGDEVICE/DownA_6.cfg )
#else
ln CFGDEVICE/Down2.cfg Down1_2.cfg
ln CFGDEVICE/Down2.cfg Down2_2.cfg
ln CFGDEVICE/Down2.cfg DownL_2.cfg
ln CFGDEVICE/Down2.cfg DownA_2.cfg
ln CFGDEVICE/Down2.cfg Down1_3.cfg
ln CFGDEVICE/Down2.cfg Down2_3.cfg
ln CFGDEVICE/Down2.cfg DownL_3.cfg
ln CFGDEVICE/Down2.cfg DownA_3.cfg
ln CFGDEVICE/Down2.cfg Down1_4.cfg
ln CFGDEVICE/Down2.cfg Down2_4.cfg
ln CFGDEVICE/Down2.cfg DownL_4.cfg
ln CFGDEVICE/Down2.cfg DownA_4.cfg
ln CFGDEVICE/Down2.cfg Down1_5.cfg
ln CFGDEVICE/Down2.cfg Down2_5.cfg
ln CFGDEVICE/Down2.cfg DownL_5.cfg
ln CFGDEVICE/Down2.cfg DownA_5.cfg
ln CFGDEVICE/Down2.cfg Down1_6.cfg
ln CFGDEVICE/Down2.cfg Down2_6.cfg
ln CFGDEVICE/Down2.cfg DownL_6.cfg
ln CFGDEVICE/Down2.cfg DownA_6.cfg
#endif
CP(Goic/CLASS/LANGUAGE/Delay.cfg OPT,	        CFGDEVICE/Delay.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Delay.cfg OPT,	        CFGDEVICE/Delay1_.cfg )
CP(Goic/CLASS/LANGUAGE/Delay.cfg OPT,	        CFGDEVICE/Delay2_.cfg )
CP(Goic/CLASS/LANGUAGE/Delay.cfg OPT,	        CFGDEVICE/DelayA_.cfg )
#else
ln CFGDEVICE/Delay.cfg Delay1_.cfg
ln CFGDEVICE/Delay.cfg Delay2_.cfg
ln CFGDEVICE/Delay.cfg DelayA_.cfg
#endif
CP(Goic/CLASS/LANGUAGE/DelayL_.cfg OPT,	        CFGDEVICE/DelayL_.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay2.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay1_2.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay2_2.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayL_2.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayA_2.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay1_3.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay2_3.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayL_3.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayA_3.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay1_4.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay2_4.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayL_4.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayA_4.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay1_5.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay2_5.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayL_5.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayA_5.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay1_6.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/Delay2_6.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayL_6.cfg )
CP(Goic/LANGUAGE/Delay2.cfg OPT,                CFGDEVICE/DelayA_6.cfg )
#else
ln CFGDEVICE/Delay2.cfg Delay1_2.cfg
ln CFGDEVICE/Delay2.cfg Delay2_2.cfg
ln CFGDEVICE/Delay2.cfg DelayL_2.cfg
ln CFGDEVICE/Delay2.cfg DelayA_2.cfg
ln CFGDEVICE/Delay2.cfg Delay1_3.cfg
ln CFGDEVICE/Delay2.cfg Delay2_3.cfg
ln CFGDEVICE/Delay2.cfg DelayL_3.cfg
ln CFGDEVICE/Delay2.cfg DelayA_3.cfg
ln CFGDEVICE/Delay2.cfg Delay1_4.cfg
ln CFGDEVICE/Delay2.cfg Delay2_4.cfg
ln CFGDEVICE/Delay2.cfg DelayL_4.cfg
ln CFGDEVICE/Delay2.cfg DelayA_4.cfg
ln CFGDEVICE/Delay2.cfg Delay1_5.cfg
ln CFGDEVICE/Delay2.cfg Delay2_5.cfg
ln CFGDEVICE/Delay2.cfg DelayL_5.cfg
ln CFGDEVICE/Delay2.cfg DelayA_5.cfg
ln CFGDEVICE/Delay2.cfg Delay1_6.cfg
ln CFGDEVICE/Delay2.cfg Delay2_6.cfg
ln CFGDEVICE/Delay2.cfg DelayL_6.cfg
ln CFGDEVICE/Delay2.cfg DelayA_6.cfg
#endif
CP(Goic/CLASS/LANGUAGE/Standby.cfg OPT,	        CFGDEVICE/Standby.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/Standby.cfg OPT,	        CFGDEVICE/Standby1_.cfg )
CP(Goic/CLASS/LANGUAGE/Standby.cfg OPT,	        CFGDEVICE/Standby2_.cfg )
CP(Goic/CLASS/LANGUAGE/Standby.cfg OPT,	        CFGDEVICE/StandbyA_.cfg )
#else
ln CFGDEVICE/Standby.cfg Standby1_.cfg
ln CFGDEVICE/Standby.cfg Standby2_.cfg
ln CFGDEVICE/Standby.cfg StandbyA_.cfg
#endif
CP(Goic/CLASS/LANGUAGE/StandbyL_.cfg OPT,	        CFGDEVICE/StandbyL_.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby2.cfg )
#if #arch(pe)
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby1_2.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby2_2.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyL_2.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyA_2.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby1_3.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby2_3.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyL_3.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyA_3.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby1_4.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby2_4.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyL_4.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyA_4.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby1_5.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby2_5.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyL_5.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyA_5.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby1_6.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/Standby2_6.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyL_6.cfg )
CP(Goic/LANGUAGE/Standby2.cfg OPT,              CFGDEVICE/StandbyA_6.cfg )
#else
ln CFGDEVICE/Standby2.cfg Standby1_2.cfg
ln CFGDEVICE/Standby2.cfg Standby2_2.cfg
ln CFGDEVICE/Standby2.cfg StandbyL_2.cfg
ln CFGDEVICE/Standby2.cfg StandbyA_2.cfg
ln CFGDEVICE/Standby2.cfg Standby1_3.cfg
ln CFGDEVICE/Standby2.cfg Standby2_3.cfg
ln CFGDEVICE/Standby2.cfg StandbyL_3.cfg
ln CFGDEVICE/Standby2.cfg StandbyA_3.cfg
ln CFGDEVICE/Standby2.cfg Standby1_4.cfg
ln CFGDEVICE/Standby2.cfg Standby2_4.cfg
ln CFGDEVICE/Standby2.cfg StandbyL_4.cfg
ln CFGDEVICE/Standby2.cfg StandbyA_4.cfg
ln CFGDEVICE/Standby2.cfg Standby1_5.cfg
ln CFGDEVICE/Standby2.cfg Standby2_5.cfg
ln CFGDEVICE/Standby2.cfg StandbyL_5.cfg
ln CFGDEVICE/Standby2.cfg StandbyA_5.cfg
ln CFGDEVICE/Standby2.cfg Standby1_6.cfg
ln CFGDEVICE/Standby2.cfg Standby2_6.cfg
ln CFGDEVICE/Standby2.cfg StandbyL_6.cfg
ln CFGDEVICE/Standby2.cfg StandbyA_6.cfg
#endif
CP(Goic/CLASS/LANGUAGE/LUnit.cfg OPT,           CFGDEVICE/LUnit.cfg )
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
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit.cfg )
#if #arch(pe)
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit12.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit13.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit14.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit15.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit16.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit17.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit18.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit19.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit20.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit21.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit22.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit122.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit132.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit142.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit152.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit162.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit172.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit182.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit192.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit202.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit212.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit222.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit123.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit133.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit143.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit153.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit163.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit173.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit183.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit193.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit203.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit213.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit223.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit124.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit134.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit144.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit154.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit164.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit174.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit184.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit194.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit204.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit214.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit224.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit125.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit135.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit145.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit155.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit165.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit175.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit185.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit195.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit205.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit215.cfg )
CP(Goic/CLASS/LANGUAGE/AUnit.cfg OPT,	        CFGDEVICE/AUnit225.cfg )
#else
ln CFGDEVICE/AUnit.cfg AUnit12.cfg
ln CFGDEVICE/AUnit.cfg AUnit13.cfg
ln CFGDEVICE/AUnit.cfg AUnit14.cfg
ln CFGDEVICE/AUnit.cfg AUnit15.cfg
ln CFGDEVICE/AUnit.cfg AUnit16.cfg
ln CFGDEVICE/AUnit.cfg AUnit17.cfg
ln CFGDEVICE/AUnit.cfg AUnit18.cfg
ln CFGDEVICE/AUnit.cfg AUnit19.cfg
ln CFGDEVICE/AUnit.cfg AUnit20.cfg
ln CFGDEVICE/AUnit.cfg AUnit21.cfg
ln CFGDEVICE/AUnit.cfg AUnit22.cfg
ln CFGDEVICE/AUnit.cfg AUnit122.cfg
ln CFGDEVICE/AUnit.cfg AUnit132.cfg
ln CFGDEVICE/AUnit.cfg AUnit142.cfg
ln CFGDEVICE/AUnit.cfg AUnit152.cfg
ln CFGDEVICE/AUnit.cfg AUnit162.cfg
ln CFGDEVICE/AUnit.cfg AUnit172.cfg
ln CFGDEVICE/AUnit.cfg AUnit182.cfg
ln CFGDEVICE/AUnit.cfg AUnit192.cfg
ln CFGDEVICE/AUnit.cfg AUnit202.cfg
ln CFGDEVICE/AUnit.cfg AUnit212.cfg 
ln CFGDEVICE/AUnit.cfg AUnit222.cfg
ln CFGDEVICE/AUnit.cfg AUnit123.cfg
ln CFGDEVICE/AUnit.cfg AUnit133.cfg
ln CFGDEVICE/AUnit.cfg AUnit143.cfg
ln CFGDEVICE/AUnit.cfg AUnit153.cfg
ln CFGDEVICE/AUnit.cfg AUnit163.cfg
ln CFGDEVICE/AUnit.cfg AUnit173.cfg
ln CFGDEVICE/AUnit.cfg AUnit183.cfg
ln CFGDEVICE/AUnit.cfg AUnit193.cfg
ln CFGDEVICE/AUnit.cfg AUnit203.cfg
ln CFGDEVICE/AUnit.cfg AUnit213.cfg
ln CFGDEVICE/AUnit.cfg AUnit223.cfg
ln CFGDEVICE/AUnit.cfg AUnit124.cfg
ln CFGDEVICE/AUnit.cfg AUnit134.cfg
ln CFGDEVICE/AUnit.cfg AUnit144.cfg
ln CFGDEVICE/AUnit.cfg AUnit154.cfg
ln CFGDEVICE/AUnit.cfg AUnit164.cfg
ln CFGDEVICE/AUnit.cfg AUnit174.cfg
ln CFGDEVICE/AUnit.cfg AUnit184.cfg
ln CFGDEVICE/AUnit.cfg AUnit194.cfg
ln CFGDEVICE/AUnit.cfg AUnit204.cfg
ln CFGDEVICE/AUnit.cfg AUnit214.cfg
ln CFGDEVICE/AUnit.cfg AUnit224.cfg
ln CFGDEVICE/AUnit.cfg AUnit125.cfg
ln CFGDEVICE/AUnit.cfg AUnit135.cfg
ln CFGDEVICE/AUnit.cfg AUnit145.cfg 
ln CFGDEVICE/AUnit.cfg AUnit155.cfg
ln CFGDEVICE/AUnit.cfg AUnit165.cfg
ln CFGDEVICE/AUnit.cfg AUnit175.cfg
ln CFGDEVICE/AUnit.cfg AUnit185.cfg
ln CFGDEVICE/AUnit.cfg AUnit195.cfg
ln CFGDEVICE/AUnit.cfg AUnit205.cfg
ln CFGDEVICE/AUnit.cfg AUnit215.cfg
ln CFGDEVICE/AUnit.cfg AUnit225.cfg
#endif
#include <Cfg/Options.h>
#endif
