CP(Goic/CLASS/LANGUAGE/w1.cfg OPT,CFGDEVICE/w1.cfg)
CP(Goic/CLASS/LANGUAGE/w1.mb.cfg OPT,CFGDEVICE/w1.mb.cfg)
CP(icons/320x240/930E.icon,ICONDEVICE/930E.icon)
CP(icons/320x240/girl.icon,ICONDEVICE/girl.icon)
CP(icons/320x240/jerry.icon,ICONDEVICE/jerry.icon)
#if #arch(cgc)
	  CP(icons/320x240/polygons.icon,ICONDEVICE/polygons.icon)
	  CP(anim/Duke_CGC.cursor,ICONDEVICE/Duke.cursor)
	  CP(anim/Shovel_color.cursor,ICONDEVICE/Shovel.cursor)
#else
	  CP(anim/Duke_gray.cursor,ICONDEVICE/Duke.cursor)
#endif
ln ICONDEVICE/930E.icon root.icon
