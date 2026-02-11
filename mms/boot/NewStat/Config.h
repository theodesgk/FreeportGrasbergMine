#!/psw/cpp

#if #arch(pe.net)
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#	  ifdef NEWUI && #ifndef UGUI
	     CP(NewStat/GenMenu.cfg LSTR,CFGDEVICE/GenMenu.cfg)
#	  else
	     CP(NewStat/GenMenu.cfg APPNAME,CFGDEVICE/GenMenu.cfg)
#	  endif
#	endif
#else
	echo NewStat only supported on PTX architecture
#endif
