#! /psw/cpp

#ifndef ISOPTION
        echo NewPS can only be an option
#else
#       if #arch(goic) || #arch(goiccan) || #arch(cgc)
#          ifdef PORTRAIT
           CP(NewPS/Prestart2_portrait.cfg APPNAME,CFGDEVICE/Prestart2.cfg)
           CP(NewPS/wRep.cfg _PORTRAIT_=yes APPNAME,CFGDEVICE/wRep.cfg)
           CP(NewPS/wRep.mb.cfg _PORTRAIT_=yes APPNAME,CFGDEVICE/wRep.mb.cfg)
           CP(NewPS/wRep.Text.cfg _PORTRAIT_=yes APPNAME,CFGDEVICE/wRep.Text.cfg)
#          else
           CP(NewPS/Prestart2.cfg APPNAME,CFGDEVICE/Prestart2.cfg)
           CP(NewPS/wRep.cfg APPNAME,CFGDEVICE/wRep.cfg)
           CP(NewPS/wRep.mb.cfg APPNAME,CFGDEVICE/wRep.mb.cfg)
           CP(NewPS/wRep.Text.cfg APPNAME,CFGDEVICE/wRep.Text.cfg)
#          endif
#       endif
#endif
