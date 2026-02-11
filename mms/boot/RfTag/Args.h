%!/psw/cpp
#ifdef ID
#	assert args(OK)
#else
	echo	'usage:	net/RfTag/All ID=reader-ID [SCALE=Ls2]'
	echo	'	reader-ID [=] Unique reader ID number'
	echo	'       SCALE=Ls2 [=] Load the optional Weightronix LS2 weigh scale module'
#endif
