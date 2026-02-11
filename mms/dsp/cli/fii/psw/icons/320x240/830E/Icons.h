#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems  1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.11 $
 *   $Author: dcitron $
 *     $Date: 2014/03/07 07:36:39 $
 *    $State: Exp $
 *   Purpose: Load all truck specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
#if #arch(pe)	
	cp net/icons/SCREEN/truck/down_newui.EXT     ICONDEVICE/down.EXT
        ln ICONDEVICE/down.EXT			     down1.EXT
        ln ICONDEVICE/down.EXT                       down2.EXT
        ln ICONDEVICE/down.EXT                       down3.EXT
   	cp net/icons/SCREEN/truck/ready_newui.EXT    ICONDEVICE/ready.EXT
        ln ICONDEVICE/ready.EXT		  	     ready1.EXT
        ln ICONDEVICE/ready.EXT                      ready2.EXT
        ln ICONDEVICE/ready.EXT                      ready3.EXT
   	cp net/icons/SCREEN/truck/standby_newui.EXT  ICONDEVICE/standby.EXT
        ln ICONDEVICE/standby.EXT		     standby1.EXT
        ln ICONDEVICE/standby.EXT                    standby2.EXT
        ln ICONDEVICE/standby.EXT                    standby3.EXT
   	cp net/icons/SCREEN/truck/delay_newui.EXT    ICONDEVICE/delay.EXT
	ln ICONDEVICE/delay.EXT			     delay1.EXT
        ln ICONDEVICE/delay.EXT                      delay2.EXT
        ln ICONDEVICE/delay.EXT                      delay3.EXT
        ln ICONDEVICE/logo.EXT			     logo1.EXT
        ln ICONDEVICE/logo.EXT                       logo2.EXT
        ln ICONDEVICE/logo.EXT                       logo3.EXT
#else
	cp net/icons/800x600/truck/down.EXT     ICONDEVICE/down.EXT
   	cp net/icons/800x600/truck/ready.EXT    ICONDEVICE/ready.EXT
   	cp net/icons/800x600/truck/standby.EXT  ICONDEVICE/standby.EXT
   	cp net/icons/800x600/truck/delay.EXT    ICONDEVICE/delay.EXT
#endif
#ifdef NEWUI
#  define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#  include NEWUI_COMMON
   cp net/icons/SCREEN/truck/empty_newui.EXT    ICONDEVICE/empty.EXT
   cp net/icons/SCREEN/truck/empty_newui_1.EXT   ICONDEVICE/empty_1.EXT
   cp net/icons/SCREEN/truck/empty_newui_2.EXT   ICONDEVICE/empty_2.EXT
   cp net/icons/SCREEN/truck/loading_newui.EXT  ICONDEVICE/loading.EXT
   cp net/icons/SCREEN/truck/loading_newui_1.EXT ICONDEVICE/loading_1.EXT
   cp net/icons/SCREEN/truck/loading_newui_2.EXT ICONDEVICE/loading_2.EXT
   cp net/icons/SCREEN/truck/hauling_newui.EXT  ICONDEVICE/hauling.EXT
   cp net/icons/SCREEN/truck/hauling_newui_1.EXT ICONDEVICE/hauling_1.EXT
   cp net/icons/SCREEN/truck/hauling_newui_2.EXT ICONDEVICE/hauling_2.EXT
   cp net/icons/SCREEN/truck/dumping_newui.EXT  ICONDEVICE/dumping.EXT
   cp net/icons/SCREEN/truck/dumping_newui_1.EXT ICONDEVICE/dumping_1.EXT
   cp net/icons/SCREEN/truck/dumping_newui_2.EXT ICONDEVICE/dumping_2.EXT
   cp net/icons/SCREEN/truck/waiting_newui.EXT  ICONDEVICE/waiting.EXT
   cp net/icons/SCREEN/truck/waiting_newui_1.EXT ICONDEVICE/waiting_1.EXT
   cp net/icons/SCREEN/truck/waiting_newui_2.EXT ICONDEVICE/waiting_2.EXT
#else
#  if #arch(pe)
     cp net/icons/SCREEN/CLASS/standby.EXT ICONDEVICE/tiedown.EXT
#  else
     ln ICONDEVICE/standby.EXT      tiedown.EXT
#  endif
   cp net/icons/800x600/truck/empty.EXT    ICONDEVICE/empty.EXT
   cp net/icons/800x600/truck/empty1.EXT   ICONDEVICE/empty1.EXT
   cp net/icons/800x600/truck/empty2.EXT   ICONDEVICE/empty2.EXT
   cp net/icons/800x600/truck/empty3.EXT   ICONDEVICE/empty3.EXT
   cp net/icons/800x600/truck/loading.EXT  ICONDEVICE/loading.EXT
   cp net/icons/800x600/truck/loading1.EXT ICONDEVICE/loading1.EXT
   cp net/icons/800x600/truck/loading2.EXT ICONDEVICE/loading2.EXT
   cp net/icons/800x600/truck/loading3.EXT ICONDEVICE/loading3.EXT
   cp net/icons/800x600/truck/hauling.EXT  ICONDEVICE/hauling.EXT
   cp net/icons/800x600/truck/hauling1.EXT ICONDEVICE/hauling1.EXT
   cp net/icons/800x600/truck/hauling2.EXT ICONDEVICE/hauling2.EXT
   cp net/icons/800x600/truck/hauling3.EXT ICONDEVICE/hauling3.EXT
   cp net/icons/800x600/truck/dumping.EXT  ICONDEVICE/dumping.EXT
   cp net/icons/800x600/truck/dumping1.EXT ICONDEVICE/dumping1.EXT
   cp net/icons/800x600/truck/dumping2.EXT ICONDEVICE/dumping2.EXT
   cp net/icons/800x600/truck/dumping3.EXT ICONDEVICE/dumping3.EXT
   cp net/icons/800x600/truck/waiting.EXT  ICONDEVICE/waiting.EXT
   cp net/icons/800x600/truck/waiting1.EXT ICONDEVICE/waiting1.EXT
   cp net/icons/800x600/truck/waiting2.EXT ICONDEVICE/waiting2.EXT
   cp net/icons/800x600/truck/waiting3.EXT ICONDEVICE/waiting3.EXT
#endif
