%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2009/03/30 18:20:08 $
 *    $State: Exp $
 *   Purpose: Also load NfsSvc module for truck hub.
 * * * * * * * * * * * * * * * * * * *
 */
#include_next <App.h>
#cp net/ProxyPort				APPDEVICE/ProxyPort
cp net/OMS				APPDEVICE/OMS
#cp net/Awt				APPDEVICE/Awt
#cp net/Java				APPDEVICE/Java
#cp net/Collection      			APPDEVICE/Collection
#cp net/Replicator      			APPDEVICE/Replicator
#cp net/mms.ats.emergency                APPDEVICE/mms.ats.emergency
#cp net/mms.ats.interact.crusher         APPDEVICE/mms.ats.interact.crusher
