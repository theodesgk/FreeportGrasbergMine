#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.4 $
 *   $Author: zambetis $
 *     $Date: 2009/07/10 12:54:41 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
CP(icons/SCREEN/loader/loader_down.icon,        ICONDEVICE/down.icon)
CP(icons/SCREEN/loader/loader_ready.icon,       ICONDEVICE/ready.icon)
CP(icons/SCREEN/loader/loader_standby.icon,     ICONDEVICE/standby.icon)
CP(icons/SCREEN/loader/loader_delay.icon,       ICONDEVICE/delay.icon)
CP(icons/SCREEN/loader/loader_loading.icon,     ICONDEVICE/tramloading.icon)
CP(icons/SCREEN/loader/loader_empty.icon,       ICONDEVICE/empty.icon)
CP(icons/SCREEN/loader/loader_full.icon,        ICONDEVICE/full.icon)
CP(icons/SCREEN/loader/loader_ldtruck.icon,     ICONDEVICE/loading.icon)
CP(icons/SCREEN/loader/loader_dumping.icon,     ICONDEVICE/dumping.icon)
ln ICONDEVICE/standby.icon      tiedown.icon
