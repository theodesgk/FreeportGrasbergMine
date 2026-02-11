%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.5 $
 *   $Author: gsousa $
 *     $Date: 2018/08/13 20:21:42 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
#ifdef NEWUI
   cp net/icons/SCREEN/fuelbay/down_newui.EXT      ICONDEVICE/down.EXT
   ln ICONDEVICE/down.EXT  down1.EXT
   ln ICONDEVICE/down.EXT  down2.EXT
   ln ICONDEVICE/down.EXT  down3.EXT
   cp net/icons/SCREEN/fuelbay/ready_newui.EXT     ICONDEVICE/ready.EXT
   ln ICONDEVICE/ready.EXT ready1.EXT
   ln ICONDEVICE/ready.EXT ready2.EXT
   ln ICONDEVICE/ready.EXT ready3.EXT
   cp net/icons/SCREEN/fuelbay/delay_newui.EXT     ICONDEVICE/delay.EXT
   ln ICONDEVICE/delay.EXT delay1.EXT
   ln ICONDEVICE/delay.EXT delay2.EXT
   ln ICONDEVICE/delay.EXT delay3.EXT
   cp net/icons/SCREEN/fuelbay/standby_newui.EXT   ICONDEVICE/standby.EXT
   ln ICONDEVICE/standby.EXT standby1.EXT
   ln ICONDEVICE/standby.EXT standby2.EXT
   ln ICONDEVICE/standby.EXT standby3.EXT
   cp net/icons/SCREEN/fuelbay/spare_newui.EXT     ICONDEVICE/spare.EXT
   ln ICONDEVICE/spare.EXT spare1.EXT   
   ln ICONDEVICE/spare.EXT spare2.EXT
   ln ICONDEVICE/spare.EXT spare3.EXT
   ln ICONDEVICE/logo.EXT  logo1.EXT
   ln ICONDEVICE/logo.EXT  logo2.EXT
   ln ICONDEVICE/logo.EXT  logo3.EXT
#define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#include NEWUI_COMMON
        CP(icons/SCREEN/auxil/MenAtWork_newui.EXT,ICONDEVICE/Working.EXT)
        CP(icons/SCREEN/auxil/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
ln ICONDEVICE/standby.EXT tiedown.EXT
ln ICONDEVICE/ready.EXT watertrk.EXT
#endif
