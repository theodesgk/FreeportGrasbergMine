%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: register_addresses.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/08/20 16:06:16 $
 *    $State: Exp $
 *   Purpose: define addresses of certain registers for Plc 
 *            interface using Modbus spec
 * * * * * * * * * * * * * * * * * * *
 */

/* zero the shaft, set flag to 1 */
#define ADDRZEROSHAFT 0

/* DrillPlc writes a flag into the file, that the Plc must add a rod
 * of a constant length, this length is set by doAction102
 */
#define ADDRADDSHAFT 3

/* set steel length which will be added when we execute doAction101 */
#define ADDRSTEELLEN 6

/* set shaft per sample value (configuration value) */
#define ADDRDISTPERSAMP 4

/* set shaft per distance value (configuration value) */
#define ADDRSHAFTPERDIST 1

/* set the drill type (rotation or hammer drill) */
#define ADDRDRILLTYPE 5

