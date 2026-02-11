%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.11 $
 *   $Author: dcitron $
 *     $Date: 2014/03/07 07:36:39 $
 *    $State: Exp $
 *   Purpose: Load all drill-specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(pe)
	cp net/icons/SCREEN/drill/down_newui.EXT     ICONDEVICE/down.EXT
        ln ICONDEVICE/down.EXT                       down1.EXT
        ln ICONDEVICE/down.EXT                       down2.EXT
        ln ICONDEVICE/down.EXT                       down3.EXT
	cp net/icons/SCREEN/drill/ready_newui.EXT    ICONDEVICE/ready.EXT
        ln ICONDEVICE/ready.EXT                      ready1.EXT
        ln ICONDEVICE/ready.EXT                      ready2.EXT
        ln ICONDEVICE/ready.EXT                      ready3.EXT
	cp net/icons/SCREEN/drill/delay_newui.EXT    ICONDEVICE/delay.EXT
        ln ICONDEVICE/delay.EXT                      delay1.EXT
        ln ICONDEVICE/delay.EXT                      delay2.EXT
        ln ICONDEVICE/delay.EXT                      delay3.EXT
	cp net/icons/SCREEN/drill/standby_newui.EXT  ICONDEVICE/standby.EXT
        ln ICONDEVICE/standby.EXT                    standby1.EXT
        ln ICONDEVICE/standby.EXT                    standby2.EXT
        ln ICONDEVICE/standby.EXT                    standby3.EXT
	cp net/icons/SCREEN/drill/standby_newui.EXT  ICONDEVICE/tiedown.EXT
	cp net/icons/SCREEN/drill/drilling_newui.EXT ICONDEVICE/drilling.EXT
        ln ICONDEVICE/drilling.EXT                    drilling1.EXT
        ln ICONDEVICE/drilling.EXT                    drilling2.EXT
        ln ICONDEVICE/drilling.EXT                    drilling3.EXT
	cp net/icons/SCREEN/drill/moving_newui.EXT   ICONDEVICE/moving.EXT
        ln ICONDEVICE/moving.EXT                    moving1.EXT
        ln ICONDEVICE/moving.EXT                    moving2.EXT
        ln ICONDEVICE/moving.EXT                    moving3.EXT
	ln ICONDEVICE/logo.EXT			     logo1.EXT
        ln ICONDEVICE/logo.EXT                       logo2.EXT
        ln ICONDEVICE/logo.EXT                       logo3.EXT
#else
	cp net/icons/800x600/drill/down.EXT     ICONDEVICE/down.EXT
	cp net/icons/800x600/drill/ready.EXT    ICONDEVICE/ready.EXT
	cp net/icons/800x600/drill/delay.EXT    ICONDEVICE/delay.EXT
	cp net/icons/800x600/drill/standby.EXT  ICONDEVICE/standby.EXT
	ln ICONDEVICE/standby.icon tiedown.EXT
	cp net/icons/800x600/drill/drilling.EXT ICONDEVICE/drilling.EXT
	cp net/icons/800x600/drill/moving.EXT   ICONDEVICE/moving.EXT
#endif
#ifdef NEWUI
#	include <icons/misc/Icons.h>
#	define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#	include NEWUI_COMMON
        CP(icons/SCREEN/auxil/MenAtWork_newui.EXT,ICONDEVICE/Working.EXT)
        CP(icons/SCREEN/auxil/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
#else
#	if #arch(pe)
   	cp net/icons/800x600/drill/actions.EXT   ICONDEVICE/actions.EXT
   	cp net/icons/800x600/drill/status.EXT    ICONDEVICE/status.EXT
   	cp net/icons/800x600/drill/config.EXT    ICONDEVICE/config.EXT
   	cp net/icons/800x600/drill/info.EXT      ICONDEVICE/info.EXT
   	cp net/icons/800x600/drill/contrast.EXT  ICONDEVICE/contrast.EXT
   	cp net/icons/800x600/drill/emergency.EXT ICONDEVICE/emergency.EXT
   	cp net/icons/800x600/drill/main.EXT      ICONDEVICE/main.EXT
#	endif
#endif
