#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.10 $
 *   $Author: dcitron $
 *     $Date: 2014/03/14 05:52:25 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
#if #arch(pe)
  cp net/icons/800x600/ug_loader/down_newui.EXT          ICONDEVICE/down.EXT
  ln ICONDEVICE/down.EXT                       down_1.EXT
  ln ICONDEVICE/down.EXT                       down_2.EXT
  ln ICONDEVICE/down.EXT                       down_3.EXT
  cp net/icons/800x600/ug_loader/ready_newui.EXT         ICONDEVICE/ready.EXT
  ln ICONDEVICE/ready.EXT                      ready_1.EXT
  ln ICONDEVICE/ready.EXT                      ready_2.EXT
  ln ICONDEVICE/ready.EXT                      ready_3.EXT
  cp net/icons/800x600/ug_loader/standby_newui.EXT       ICONDEVICE/standby.EXT
  ln ICONDEVICE/standby.EXT                    standby_1.EXT
  ln ICONDEVICE/standby.EXT                    standby_2.EXT
  ln ICONDEVICE/standby.EXT                    standby_3.EXT
  cp net/icons/800x600/ug_loader/delay_newui.EXT         ICONDEVICE/delay.EXT
  ln ICONDEVICE/delay.EXT                      delay_1.EXT
  ln ICONDEVICE/delay.EXT                      delay_2.EXT
  ln ICONDEVICE/delay.EXT                      delay_3.EXT
  ln ICONDEVICE/logo.EXT                       logo_1.EXT
  ln ICONDEVICE/logo.EXT                       logo_2.EXT
  ln ICONDEVICE/logo.EXT                       logo_3.EXT
  cp net/icons/800x600/ug_loader/standby_newui.EXT       ICONDEVICE/tiedown.EXT
  ln ICONDEVICE/tiedown.EXT                       tiedown_1.EXT
  ln ICONDEVICE/tiedown.EXT                       tiedown_2.EXT
  ln ICONDEVICE/tiedown.EXT                       tiedown_3.EXT
#else
  cp net/icons/800x600/ug_loader/down.EXT    ICONDEVICE/down.EXT
  cp net/icons/800x600/ug_loader/ready.EXT   ICONDEVICE/ready.EXT
  cp net/icons/800x600/ug_loader/standby.EXT ICONDEVICE/standby.EXT
  cp net/icons/800x600/ug_loader/delay.EXT   ICONDEVICE/delay.EXT
    ln ICONDEVICE/standby.EXT tiedown.EXT
#endif

#ifdef NEWUI
# define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
# include NEWUI_COMMON
  cp net/icons/800x600/ug_loader/empty_newui.EXT         ICONDEVICE/empty.EXT
  cp net/icons/800x600/ug_loader/empty_newui_1.EXT       ICONDEVICE/empty_1.EXT
  cp net/icons/800x600/ug_loader/empty_newui_2.EXT       ICONDEVICE/empty_2.EXT
  cp net/icons/800x600/ug_loader/empty_newui.EXT         ICONDEVICE/waiting.EXT
  cp net/icons/800x600/ug_loader/empty_newui_1.EXT       ICONDEVICE/waiting_1.EXT
  cp net/icons/800x600/ug_loader/empty_newui_2.EXT       ICONDEVICE/waiting_2.EXT
  cp net/icons/800x600/ug_loader/full_newui.EXT          ICONDEVICE/full.EXT
  cp net/icons/800x600/ug_loader/full_newui_1.EXT        ICONDEVICE/full_1.EXT
  cp net/icons/800x600/ug_loader/full_newui_2.EXT        ICONDEVICE/full_2.EXT
  cp net/icons/800x600/ug_loader/dumping_newui.EXT       ICONDEVICE/dumping.EXT
  cp net/icons/800x600/ug_loader/dumping_newui_1.EXT     ICONDEVICE/dumping_1.EXT
  cp net/icons/800x600/ug_loader/dumping_newui_2.EXT     ICONDEVICE/dumping_2.EXT
  cp net/icons/800x600/ug_loader/tramloading_newui.EXT   ICONDEVICE/tramloading.EXT
  cp net/icons/800x600/ug_loader/tramloading_newui_1.EXT ICONDEVICE/tramloading_1.EXT
  cp net/icons/800x600/ug_loader/tramloading_newui_2.EXT ICONDEVICE/tramloading_2.EXT
  cp net/icons/800x600/ug_loader/ldtruck_newui.EXT       ICONDEVICE/loading.EXT
  cp net/icons/800x600/ug_loader/ldtruck_newui_1.EXT     ICONDEVICE/loading_1.EXT
  cp net/icons/800x600/ug_loader/ldtruck_newui_2.EXT     ICONDEVICE/loading_2.EXT
  cp net/icons/800x600/ug_loader/waiting_newui.EXT       ICONDEVICE/waiting.EXT
  cp net/icons/800x600/ug_loader/waiting_newui_1.EXT     ICONDEVICE/waiting_1.EXT
  cp net/icons/800x600/ug_loader/waiting_newui_2.EXT     ICONDEVICE/waiting_2.EXT
#else
  cp net/icons/800x600/ug_loader/loading.EXT ICONDEVICE/tramloading.EXT
  cp net/icons/800x600/ug_loader/empty.EXT   ICONDEVICE/empty.EXT
  cp net/icons/800x600/ug_loader/full.EXT    ICONDEVICE/full.EXT
  cp net/icons/800x600/ug_loader/ldtruck.EXT ICONDEVICE/loading.EXT
  cp net/icons/800x600/ug_loader/dumping.EXT ICONDEVICE/dumping.EXT
#endif
