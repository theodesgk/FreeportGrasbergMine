/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.2 $
 *   $Author: imascarenhas $
 *     $Date: 2015/05/14 16:09:32 $
 *    $State: Exp $
 *   Purpose: Load script for MineCare applications
 * * * * * * * * * * * * * * * * * * *
 */
#assert args(OK)
#ifdef CLEANINTERFACES
	pfs unaccess:lib
	pfs unaccess:etc
	pfs purge:lib
	pfs purge:etc
	pfs pack
#endif
