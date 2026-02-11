%!/psw/cpp
#if defined(ARG1) && (1 <= ARG1 && ARG1 <= 255)
#	define RFBCNID ARG1
#	assert args(OK)
#else
	echo	'usage:	net/RfBcn/All beacon-ID
	echo	'	beacon-ID [=] Unique beacon ID number (1 <= beacon-ID <= 255)'
#endif
