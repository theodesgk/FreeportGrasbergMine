%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.10 $
 *   $Author: dcitron $
 *     $Date: 2012/04/19 07:35:40 $
 *    $State: Exp $
 *   Purpose: Load all excav specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
#if #arch(pe)	
   	cp net/icons/SCREEN/CLASS/delay_newui.EXT   ICONDEVICE/delay.EXT
   	cp net/icons/SCREEN/CLASS/down_newui.EXT    ICONDEVICE/down.EXT
   	cp net/icons/SCREEN/CLASS/ready_newui.EXT   ICONDEVICE/ready.EXT
   	cp net/icons/SCREEN/CLASS/standby_newui.EXT ICONDEVICE/standby.EXT
   	cp net/icons/SCREEN/CLASS/standby_newui.EXT ICONDEVICE/tiedown.EXT
#else
	cp net/icons/SCREEN/CLASS/delay.EXT   ICONDEVICE/delay.EXT
  	cp net/icons/SCREEN/CLASS/down.EXT    ICONDEVICE/down.EXT
  	cp net/icons/SCREEN/CLASS/ready.EXT   ICONDEVICE/ready.EXT
  	cp net/icons/SCREEN/CLASS/standby.EXT ICONDEVICE/standby.EXT
#endif
#ifdef NEWUI
#  define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#  include NEWUI_COMMON
   cp net/icons/SCREEN/CLASS/loading_newui.EXT   ICONDEVICE/loading.EXT
   cp net/icons/SCREEN/CLASS/loading_newui_1.EXT   ICONDEVICE/loading_1.EXT
   cp net/icons/SCREEN/CLASS/loading_newui_2.EXT   ICONDEVICE/loading_2.EXT
   cp net/icons/SCREEN/CLASS/waiting_newui.EXT   ICONDEVICE/waiting.EXT
   cp net/icons/SCREEN/CLASS/waiting_newui_1.EXT   ICONDEVICE/waiting_1.EXT
   cp net/icons/SCREEN/CLASS/waiting_newui_2.EXT   ICONDEVICE/waiting_2.EXT
#else    
   ln ICONDEVICE/standby.EXT      tiedown.EXT
   cp net/icons/SCREEN/CLASS/loading.EXT ICONDEVICE/loading.EXT
   cp net/icons/SCREEN/CLASS/left.EXT    ICONDEVICE/left.EXT
   cp net/icons/SCREEN/CLASS/right.EXT   ICONDEVICE/right.EXT
#endif
