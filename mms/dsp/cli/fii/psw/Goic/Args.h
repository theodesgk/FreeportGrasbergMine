%!/psw/cpp
#if #arch(i80196)
	echo Yeah, sure...
	echo This box cannot possibly be a GOIC
#elif #class(nil) || #class(psw)
	echo usage: net/Goic/All _CLASS_=[truck|shovel|...]
#else
#	if ! #arch(goic)
#		assert arch(goic)
#	endif
#	assert args(OK)
#endif
