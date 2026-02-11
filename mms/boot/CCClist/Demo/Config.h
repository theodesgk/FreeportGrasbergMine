#!/psw/cpp

#if #arch(pe.net)
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#	  ifdef NEWUI && #ifndef UGUI
	     CP(CCClist/Demo/CCClist.0.cfg LSTR,CFGDEVICE/CCClist-0.cfg)
	     CP(CCClist/Demo/CCClist.0.0.cfg LSTR,CFGDEVICE/CCClist-0-0.cfg)
	     CP(CCClist/Demo/CCClist.0.0_2.cfg LSTR,CFGDEVICE/CCClist-0-0_2.cfg)
	     CP(CCClist/Demo/CCClist.0.1.cfg LSTR,CFGDEVICE/CCClist-0-1.cfg)
	     CP(CCClist/Demo/CCClist.0.1.0.cfg LSTR,CFGDEVICE/CCClist-0-1-0.cfg)
	     CP(CCClist/Demo/CCClist.0.2.cfg LSTR,CFGDEVICE/CCClist-0-2.cfg)
	     CP(CCClist/Demo/CCClist.0.2.0.cfg LSTR,CFGDEVICE/CCClist-0-2-0.cfg)
	     CP(CCClist/Demo/CCClist.0.2.0.0.cfg LSTR,CFGDEVICE/CCClist-0-2-0-0.cfg)
	     CP(CCClist/Demo/CCClist.0.2.0.0_2.cfg LSTR,CFGDEVICE/CCClist-0-2-0-0_2.cfg)
#	  else
	     CP(CCClist/Demo/CCClist.0.cfg APPNAME,CFGDEVICE/CCClist-0.cfg)
	     CP(CCClist/Demo/CCClist.0.0.cfg APPNAME,CFGDEVICE/CCClist-0-0.cfg)
	     CP(CCClist/Demo/CCClist.0.0_2.cfg APPNAME,CFGDEVICE/CCClist-0-0_2.cfg)
	     CP(CCClist/Demo/CCClist.0.1.cfg APPNAME,CFGDEVICE/CCClist-0-1.cfg)
	     CP(CCClist/Demo/CCClist.0.1.0.cfg APPNAME,CFGDEVICE/CCClist-0-1-0.cfg)
	     CP(CCClist/Demo/CCClist.0.2.cfg APPNAME,CFGDEVICE/CCClist-0-2.cfg)
	     CP(CCClist/Demo/CCClist.0.2.0.cfg APPNAME,CFGDEVICE/CCClist-0-2-0.cfg)
	     CP(CCClist/Demo/CCClist.0.2.0.0.cfg APPNAME,CFGDEVICE/CCClist-0-2-0-0.cfg)
	     CP(CCClist/Demo/CCClist.0.2.0.0_2.cfg APPNAME,CFGDEVICE/CCClist-0-2-0-0_2.cfg)
#	  endif
#	endif
#else
	CP(CCClist/Demo/CCClist.0.cfg APPNAME,CFGDEVICE/CCClist-0.cfg)
	CP(CCClist/Demo/CCClist.0.0.cfg APPNAME,CFGDEVICE/CCClist-0-0.cfg)
	CP(CCClist/Demo/CCClist.0.0_2.cfg APPNAME,CFGDEVICE/CCClist-0-0_2.cfg)
	CP(CCClist/Demo/CCClist.0.1.cfg APPNAME,CFGDEVICE/CCClist-0-1.cfg)
	CP(CCClist/Demo/CCClist.0.1.0.cfg APPNAME,CFGDEVICE/CCClist-0-1-0.cfg)
	CP(CCClist/Demo/CCClist.0.2.cfg APPNAME,CFGDEVICE/CCClist-0-2.cfg)
	CP(CCClist/Demo/CCClist.0.2.0.cfg APPNAME,CFGDEVICE/CCClist-0-2-0.cfg)
	CP(CCClist/Demo/CCClist.0.2.0.0.cfg APPNAME,CFGDEVICE/CCClist-0-2-0-0.cfg)
	CP(CCClist/Demo/CCClist.0.2.0.0_2.cfg APPNAME,CFGDEVICE/CCClist-0-2-0-0_2.cfg)
#endif
