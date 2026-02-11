#! /psw/cpp

#ifndef ISOPTION
        echo StoreForward can only be an option
#else
#       if !#arch(pe.net) && (#arch(goic) || #arch(goiccan) || #arch(cgc))
           CP(StoreForward/Spooler.cfg APPNAME,CFGDEVICE/Spooler.cfg)
#       endif
#endif
