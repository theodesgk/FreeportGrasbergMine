/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2009/08/04 02:52:27 $
 *    $State: Exp $
 *   Purpose: Load all excav specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#if #option(Backhoe)
CP(icons/320x240/excav/down_backhoe.icon,ICONDEVICE/down.icon)
CP(icons/320x240/excav/ready_backhoe.icon,ICONDEVICE/ready.icon)
CP(icons/320x240/excav/delay_backhoe.icon,ICONDEVICE/delay.icon)
CP(icons/320x240/excav/left_backhoe.icon,ICONDEVICE/left.icon)
CP(icons/320x240/excav/standby_backhoe.icon,ICONDEVICE/standby.icon)
CP(icons/320x240/excav/left_backhoe.icon,ICONDEVICE/right.icon)
#else
CP(icons/320x240/excav/down.icon,ICONDEVICE/down.icon)
CP(icons/320x240/excav/ready.icon,ICONDEVICE/ready.icon)
CP(icons/320x240/excav/standby.icon,ICONDEVICE/standby.icon)
CP(icons/320x240/excav/delay.icon,ICONDEVICE/delay.icon)
CP(icons/320x240/excav/left.icon,ICONDEVICE/left.icon)
CP(icons/320x240/excav/right.icon,ICONDEVICE/right.icon)
#endif
ln ICONDEVICE/left.icon         loading.icon
ln ICONDEVICE/standby.icon      tiedown.icon
