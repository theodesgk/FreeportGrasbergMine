#!/psw/cpp

#if #arch(pe.net)
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#	  ifdef NEWUI && #ifndef UGUI
	     CP(CCClist/Demo2/CCClist.0.cfg LSTR,CFGDEVICE/CCClist-0.cfg)
	     CP(CCClist/Demo2/CCClist.0_2.cfg LSTR,CFGDEVICE/CCClist-0_2.cfg)
#	  else
	     CP(CCClist/Demo2/CCClist.0.cfg APPNAME,CFGDEVICE/CCClist-0.cfg)
	     CP(CCClist/Demo2/CCClist.0_2.cfg APPNAME,CFGDEVICE/CCClist-0_2.cfg)
#	  endif
#	endif
#else
	CP(CCClist/Demo2/CCClist.0.cfg APPNAME,CFGDEVICE/CCClist-0.cfg)
	CP(CCClist/Demo2/CCClist.0_2.cfg APPNAME,CFGDEVICE/CCClist-0_2.cfg)
#endif
