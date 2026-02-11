%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.18 $
 *   $Author: olivas $
 *     $Date: 2015/02/10 16:30:35 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>

CP(icons/SCREEN/CLASS/delay.EXT,ICONDEVICE/delay.EXT)
CP(icons/SCREEN/CLASS/down.EXT,ICONDEVICE/down.EXT)
CP(icons/SCREEN/CLASS/ready.EXT,ICONDEVICE/ready.EXT)
CP(icons/SCREEN/CLASS/standby.EXT,ICONDEVICE/standby.EXT)

#if #arch(pe)
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
#endif

ln ICONDEVICE/standby.EXT tiedown.EXT

#ifdef NEWUI
#  	define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#  	include NEWUI_COMMON
#ifndef UGUI
	CP(icons/SCREEN/CLASS/MenAtWork_newui.EXT,ICONDEVICE/Working.EXT)
	CP(icons/SCREEN/CLASS/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
#else
	CP(icons/SCREEN/CLASS/MenAtWork.EXT,ICONDEVICE/MenAtWork.EXT)
        CP(icons/SCREEN/CLASS/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
#if #arch(pe)
#ifndef UGUI
	ln ICONDEVICE/MenAtWork.EXT MenAtWork1.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork2.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork3.EXT
#else
        ln ICONDEVICE/MenAtWork.EXT MenAtWork_1.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork_2.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork_3.EXT
#endif
#endif
#endif
#endif
