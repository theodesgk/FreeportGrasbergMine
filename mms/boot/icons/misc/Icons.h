#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.7 $
 *   $Author: olivas $
 *     $Date: 2013/08/21 18:11:11 $
 *    $State: Exp $
 *   Purpose: Load all miscellaneous icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
echo Loading misc icons...
CP( icons/misc/conbrite.EXT,           ICONDEVICE/conbrite.EXT  ) 
/*CP( icons/misc/conbriteLG.EXT,         ICONDEVICE/conbriteLG.EXT  ) */
#if #arch(pe)
CP( icons/misc/Emerg.gif,ICONDEVICE/Emerg.gif )
CP( icons/misc/EmergDisabled.gif,ICONDEVICE/EmergDisabled.gif )
#endif
/* comms icons */
CP(icons/SCREEN/wifi_off.EXT,ICONDEVICE/wifi_off.EXT)
CP(icons/SCREEN/wifi_on.EXT,ICONDEVICE/wifi_on.EXT)
