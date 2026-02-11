%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.5 $
 *   $Author: latum $
 *     $Date: 2004/08/19 19:48:53 $
 *    $State: Exp $
 *   Purpose: Load script for configurations for HP hubs
 * * * * * * * * * * * * * * * * * * *
 */
#if #class(loader) || #class(dozer) || #class(grader)
#	define SINGLEANTENNA yes
#endif

#include <GpsRover/Config.h>

#include <Inclinometer/Config.h>
