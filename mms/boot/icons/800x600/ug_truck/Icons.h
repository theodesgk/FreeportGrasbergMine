#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems  1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.13 $
 *   $Author: dcitron $
 *     $Date: 2014/03/14 05:52:25 $
 *    $State: Exp $
 *   Purpose: Load all truck specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
#if #arch(pe)	
  cp net/icons/800x600/ug_truck/down_newui.EXT      ICONDEVICE/down.EXT
  ln ICONDEVICE/down.EXT                       down_1.EXT
  ln ICONDEVICE/down.EXT                       down_2.EXT
  ln ICONDEVICE/down.EXT                       down_3.EXT
  cp net/icons/800x600/ug_truck/ready_newui.EXT     ICONDEVICE/ready.EXT
  ln ICONDEVICE/ready.EXT                      ready_1.EXT
  ln ICONDEVICE/ready.EXT                      ready_2.EXT
  ln ICONDEVICE/ready.EXT                      ready_3.EXT
  cp net/icons/800x600/ug_truck/Standby_newui.EXT   ICONDEVICE/standby.EXT
  ln ICONDEVICE/standby.EXT                    standby_1.EXT
  ln ICONDEVICE/standby.EXT                    standby_2.EXT
  ln ICONDEVICE/standby.EXT                    standby_3.EXT
  cp net/icons/800x600/ug_truck/delay_newui.EXT     ICONDEVICE/delay.EXT
  ln ICONDEVICE/delay.EXT                      delay_1.EXT
  ln ICONDEVICE/delay.EXT                      delay_2.EXT
  ln ICONDEVICE/delay.EXT                      delay_3.EXT
  ln ICONDEVICE/logo.EXT                       logo_1.EXT
  ln ICONDEVICE/logo.EXT                       logo_2.EXT
  ln ICONDEVICE/logo.EXT                       logo_3.EXT
  cp net/icons/SCREEN/CLASS/Standby_newui.EXT       ICONDEVICE/tiedown.EXT
  ln ICONDEVICE/tiedown.EXT                       tiedown_1.EXT
  ln ICONDEVICE/tiedown.EXT                       tiedown_2.EXT
  ln ICONDEVICE/tiedown.EXT                       tiedown_3.EXT
#else
  cp net/icons/800x600/ug_truck/down.EXT    ICONDEVICE/down.EXT
  cp net/icons/800x600/ug_truck/ready.EXT   ICONDEVICE/ready.EXT
  cp net/icons/800x600/ug_truck/Standby.EXT ICONDEVICE/standby.EXT
  cp net/icons/800x600/ug_truck/delay.EXT   ICONDEVICE/delay.EXT
#endif
#ifdef NEWUI
# define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
# include NEWUI_COMMON
  cp net/icons/800x600/ug_truck/empty_newui.EXT     ICONDEVICE/empty.EXT
  cp net/icons/800x600/ug_truck/empty_newui_1.EXT   ICONDEVICE/empty_1.EXT
  cp net/icons/800x600/ug_truck/empty_newui_2.EXT   ICONDEVICE/empty_2.EXT
  cp net/icons/800x600/ug_truck/loading_newui.EXT   ICONDEVICE/loading.EXT
  cp net/icons/800x600/ug_truck/loading_newui_1.EXT ICONDEVICE/loading_1.EXT
  cp net/icons/800x600/ug_truck/loading_newui_2.EXT ICONDEVICE/loading_2.EXT
  cp net/icons/800x600/ug_truck/hauling_newui.EXT   ICONDEVICE/hauling.EXT
  cp net/icons/800x600/ug_truck/hauling_newui_1.EXT ICONDEVICE/hauling_1.EXT
  cp net/icons/800x600/ug_truck/hauling_newui_2.EXT ICONDEVICE/hauling_2.EXT
  cp net/icons/800x600/ug_truck/dumping_newui.EXT   ICONDEVICE/dumping.EXT
  cp net/icons/800x600/ug_truck/dumping_newui_1.EXT ICONDEVICE/dumping_1.EXT
  cp net/icons/800x600/ug_truck/dumping_newui_2.EXT ICONDEVICE/dumping_2.EXT
  cp net/icons/800x600/ug_truck/waiting_newui.EXT   ICONDEVICE/waiting.EXT
  cp net/icons/800x600/ug_truck/waiting_newui_1.EXT ICONDEVICE/waiting_1.EXT
  cp net/icons/800x600/ug_truck/waiting_newui_2.EXT ICONDEVICE/waiting_2.EXT
#else
  ln ICONDEVICE/standby.EXT tiedown.EXT
  cp net/icons/800x600/ug_truck/arrive_chute.EXT ICONDEVICE/load_chute.EXT
  cp net/icons/800x600/ug_truck/load_chute.EXT   ICONDEVICE/arrive_chute.EXT
  cp net/icons/800x600/ug_truck/empty.EXT        ICONDEVICE/empty.EXT
  cp net/icons/800x600/ug_truck/empty1.EXT       ICONDEVICE/empty1.EXT
  cp net/icons/800x600/ug_truck/empty2.EXT       ICONDEVICE/empty2.EXT
  cp net/icons/800x600/ug_truck/empty3.EXT       ICONDEVICE/empty3.EXT
  cp net/icons/800x600/ug_truck/loading.EXT      ICONDEVICE/loading.EXT
  cp net/icons/800x600/ug_truck/loading1.EXT     ICONDEVICE/loading1.EXT
  cp net/icons/800x600/ug_truck/loading2.EXT     ICONDEVICE/loading2.EXT
  cp net/icons/800x600/ug_truck/loading3.EXT     ICONDEVICE/loading3.EXT
  cp net/icons/800x600/ug_truck/hauling.EXT      ICONDEVICE/hauling.EXT
  cp net/icons/800x600/ug_truck/hauling1.EXT     ICONDEVICE/hauling1.EXT
  cp net/icons/800x600/ug_truck/hauling2.EXT     ICONDEVICE/hauling2.EXT
  cp net/icons/800x600/ug_truck/hauling3.EXT     ICONDEVICE/hauling3.EXT
  cp net/icons/800x600/ug_truck/dumping.EXT      ICONDEVICE/dumping.EXT
  cp net/icons/800x600/ug_truck/dumping1.EXT     ICONDEVICE/dumping1.EXT
  cp net/icons/800x600/ug_truck/dumping2.EXT     ICONDEVICE/dumping2.EXT
  cp net/icons/800x600/ug_truck/dumping3.EXT     ICONDEVICE/dumping3.EXT
  cp net/icons/800x600/ug_truck/waiting.EXT      ICONDEVICE/waiting.EXT
  cp net/icons/800x600/ug_truck/waiting1.EXT     ICONDEVICE/waiting1.EXT
  cp net/icons/800x600/ug_truck/waiting2.EXT     ICONDEVICE/waiting2.EXT
  cp net/icons/800x600/ug_truck/waiting3.EXT     ICONDEVICE/waiting3.EXT
#endif
