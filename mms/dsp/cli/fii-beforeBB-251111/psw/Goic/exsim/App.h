%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:47 $
 *    $State: Exp $
 *   Purpose: Also load NfsSvc module for truck hub.
 * * * * * * * * * * * * * * * * * * *
 */
#include_next <App.h>
cp net/OMS						APPDEVICE/OMS
cp net/Replicator				APPDEVICE/Replicator
cp net/Awt						APPDEVICE/Awt
cp net/Java						APPDEVICE/Java
cp net/float					APPDEVICE/float
cp net/Collection				APPDEVICE/Collection
cp net/mms.sysMgr				APPDEVICE/mms.sysMgr
cp net/mms.utilBase				APPDEVICE/mms.utilBase
cp net/mms.utilMath				APPDEVICE/mms.utilMath
cp net/mms.ats.util.LogicalId	APPDEVICE/mms.ats.util.LogicalId
cp net/mms.ats.boundaryBase		APPDEVICE/mms.ats.boundaryBase
cp net/mms.ats.boundaryEmbed	APPDEVICE/mms.ats.boundaryEmbed
cp net/mms.ats.boundarySync		APPDEVICE/mms.ats.boundarySync
cp net/mms.ats.boundaryUtil		APPDEVICE/mms.ats.boundaryUtil
cp net/mms.ats.viewerBase		APPDEVICE/mms.ats.viewerBase
cp net/ExSim					APPDEVICE/ExSim
