/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: ObjSh.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Fire up system object shell.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef MAIN
#	define MAIN	Main
#endif
#ifndef PROMPT
#	define PROMPT	\'APPNAME, vVERSION> \'
#endif
#if !defined(OBJSH_STACK) || OBJSH_STACK < 512
#	if #arch(arm)
#		define OBJSH_STACK 2048
#	else
#		define OBJSH_STACK 1024
#	endif
#endif
module	ObjSh
object	ObjSh	base:MAIN stack:OBJSH_STACK prompt:PROMPT
#ifndef NETSH_STACK
#	define NETSH_STACK 768
#endif
#if NETSH_STACK >= 512
	object	Pipe	name:NetPipe bufsize:128 recv:0x113 send:0x114
	object	ObjSh	name:NetSh base:NetPipe stack:NETSH_STACK prompt:''
#endif
#include <Cfg/Arch.cfg>
