%!/psw/cpp
#include <Gsp/Config.h>
#ifndef ISOPTION
#	if #arch(gspcan)
	echo ...Setting CAN bus address: 10
	CP(Cfg/Args.cfg id 10,CFGDEVICE/Can.cfg)
#	endif
#endif
