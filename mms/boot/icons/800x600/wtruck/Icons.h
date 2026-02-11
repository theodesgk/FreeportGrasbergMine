%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.10 $
 *   $Author: dcitron $
 *     $Date: 2014/03/07 07:36:40 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
#if #arch(pe)
   cp net/icons/SCREEN/wtruck/down_newui.EXT      ICONDEVICE/down.EXT
   cp net/icons/SCREEN/wtruck/ready_newui.EXT     ICONDEVICE/ready.EXT
   cp net/icons/SCREEN/wtruck/delay_newui.EXT     ICONDEVICE/delay.EXT
   cp net/icons/SCREEN/wtruck/standby_newui.EXT   ICONDEVICE/standby.EXT
   cp net/icons/SCREEN/wtruck/spare_newui.EXT     ICONDEVICE/spare.EXT
   cp net/icons/SCREEN/wtruck/refill_newui.EXT    ICONDEVICE/refill.EXT
   cp net/icons/SCREEN/wtruck/spray_newui.EXT     ICONDEVICE/spray.EXT
   ln ICONDEVICE/down.EXT  down1.EXT
   ln ICONDEVICE/down.EXT  down2.EXT
   ln ICONDEVICE/down.EXT  down3.EXT
   ln ICONDEVICE/ready.EXT ready1.EXT
   ln ICONDEVICE/ready.EXT ready2.EXT
   ln ICONDEVICE/ready.EXT ready3.EXT
   ln ICONDEVICE/delay.EXT delay1.EXT
   ln ICONDEVICE/delay.EXT delay2.EXT
   ln ICONDEVICE/delay.EXT delay3.EXT
   ln ICONDEVICE/standby.EXT standby1.EXT
   ln ICONDEVICE/standby.EXT standby2.EXT
   ln ICONDEVICE/standby.EXT standby3.EXT
   ln ICONDEVICE/logo.EXT  logo1.EXT
   ln ICONDEVICE/logo.EXT  logo2.EXT
   ln ICONDEVICE/logo.EXT  logo3.EXT
   ln ICONDEVICE/spare.EXT spare1.EXT   
   ln ICONDEVICE/spare.EXT spare2.EXT
   ln ICONDEVICE/spare.EXT spare3.EXT
   ln ICONDEVICE/refill.EXT refill1.EXT
   ln ICONDEVICE/refill.EXT refill2.EXT
   ln ICONDEVICE/refill.EXT refill3.EXT
   ln ICONDEVICE/spray.EXT spray1.EXT
   ln ICONDEVICE/spray.EXT spray2.EXT
   ln ICONDEVICE/spray.EXT spray3.EXT
#else	
   cp net/icons/SCREEN/wtruck/down.EXT      ICONDEVICE/down.EXT
   cp net/icons/SCREEN/wtruck/ready.EXT     ICONDEVICE/ready.EXT
   cp net/icons/SCREEN/wtruck/delay.EXT     ICONDEVICE/delay.EXT
   cp net/icons/SCREEN/wtruck/standby.EXT   ICONDEVICE/standby.EXT
   cp net/icons/SCREEN/wtruck/spare.EXT     ICONDEVICE/spare.EXT
   cp net/icons/SCREEN/wtruck/refill.EXT    ICONDEVICE/refill.EXT
   cp net/icons/SCREEN/wtruck/spray.EXT     ICONDEVICE/spray.EXT
#endif
#ifdef NEWUI
#  define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#  include NEWUI_COMMON
        CP(icons/SCREEN/auxil/MenAtWork_newui.EXT,ICONDEVICE/Working.EXT)
        CP(icons/SCREEN/auxil/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
#else
        CP(icons/SCREEN/auxil/MenAtWork.EXT,ICONDEVICE/MenAtWork.EXT)
#if #arch(pe)
        ln ICONDEVICE/MenAtWork.EXT MenAtWork1.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork2.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork3.EXT
#endif
#endif
ln ICONDEVICE/standby.EXT tiedown.EXT
ln ICONDEVICE/ready.EXT watertrk.EXT
