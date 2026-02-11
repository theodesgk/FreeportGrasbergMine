#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.12 $
 *   $Author: dcitron $
 *     $Date: 2012/04/19 07:35:40 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(pe)	
   cp net/icons/SCREEN/loader/down_newui.EXT     ICONDEVICE/down.EXT
   cp net/icons/SCREEN/loader/ready_newui.EXT    ICONDEVICE/ready.EXT
   cp net/icons/SCREEN/loader/standby_newui.EXT  ICONDEVICE/standby.EXT
   cp net/icons/SCREEN/loader/delay_newui.EXT    ICONDEVICE/delay.EXT
#else
   cp net/icons/800x600/loader/down.EXT     ICONDEVICE/down.EXT
   cp net/icons/800x600/loader/ready.EXT    ICONDEVICE/ready.EXT
   cp net/icons/800x600/loader/standby.EXT  ICONDEVICE/standby.EXT
   cp net/icons/800x600/loader/delay.EXT    ICONDEVICE/delay.EXT
#endif
#include <icons/misc/Icons.h>
#ifdef NEWUI
#  define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#  include NEWUI_COMMON
   cp net/icons/SCREEN/loader/empty_newui.EXT    ICONDEVICE/empty.EXT
   cp net/icons/SCREEN/loader/empty_newui_1.EXT    ICONDEVICE/empty_1.EXT
   cp net/icons/SCREEN/loader/empty_newui_2.EXT    ICONDEVICE/empty_2.EXT
   cp net/icons/SCREEN/loader/empty_newui.EXT    ICONDEVICE/waiting.EXT
   cp net/icons/SCREEN/loader/empty_newui_1.EXT    ICONDEVICE/waiting_1.EXT
   cp net/icons/SCREEN/loader/empty_newui_2.EXT    ICONDEVICE/waiting_2.EXT
   cp net/icons/SCREEN/loader/full_newui.EXT     ICONDEVICE/full.EXT
   cp net/icons/SCREEN/loader/full_newui_1.EXT     ICONDEVICE/full_1.EXT
   cp net/icons/SCREEN/loader/full_newui_2.EXT     ICONDEVICE/full_2.EXT
   cp net/icons/SCREEN/loader/dumping_newui.EXT  ICONDEVICE/dumping.EXT
   cp net/icons/SCREEN/loader/dumping_newui_1.EXT  ICONDEVICE/dumping_1.EXT
   cp net/icons/SCREEN/loader/dumping_newui_2.EXT  ICONDEVICE/dumping_2.EXT
   cp net/icons/SCREEN/loader/tramloading_newui.EXT  ICONDEVICE/tramloading.EXT
   cp net/icons/SCREEN/loader/tramloading_newui_1.EXT  ICONDEVICE/tramloading_1.EXT
   cp net/icons/SCREEN/loader/tramloading_newui_2.EXT  ICONDEVICE/tramloading_2.EXT
   cp net/icons/SCREEN/loader/ldtruck_newui.EXT  ICONDEVICE/loading.EXT
   cp net/icons/SCREEN/loader/ldtruck_newui_1.EXT  ICONDEVICE/loading_1.EXT
   cp net/icons/SCREEN/loader/ldtruck_newui_2.EXT  ICONDEVICE/loading_2.EXT
   cp net/icons/SCREEN/loader/waiting_newui.EXT  ICONDEVICE/waiting.EXT
   cp net/icons/SCREEN/loader/waiting_newui_1.EXT  ICONDEVICE/waiting_1.EXT
   cp net/icons/SCREEN/loader/waiting_newui_2.EXT  ICONDEVICE/waiting_2.EXT
#else
   cp net/icons/800x600/loader/loading.EXT  ICONDEVICE/tramloading.EXT
   cp net/icons/800x600/loader/empty.EXT    ICONDEVICE/empty.EXT
   cp net/icons/800x600/loader/full.EXT     ICONDEVICE/full.EXT
   cp net/icons/800x600/loader/ldtruck.EXT  ICONDEVICE/loading.EXT
   cp net/icons/800x600/loader/dumping.EXT  ICONDEVICE/dumping.EXT
#endif
ln ICONDEVICE/standby.EXT tiedown.EXT
