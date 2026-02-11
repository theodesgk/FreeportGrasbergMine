%!/psw/cpp
#ifdef ARG1
#	ifdef ARG2
#		define RFTAGID ARG1\ ARG2
#	else
#		define RFTAGID ARG1
#	endif
#	assert args(OK)
#else
	echo	'usage:	net/RfTagSingle/All reader-ID [end-tag] [SCALE=Ls2] '
	echo	'	reader-ID [=] Unique reader ID number'
	echo	'	end-tag	  [=] Optional tag to signal end of train'
	echo	'       SCALE=Ls2 [=] Load the optional Weightronix LS2 weigh scale module'
#endif
