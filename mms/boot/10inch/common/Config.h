%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.27 $
 *   $Author: gsousa $
 *     $Date: 2018/07/05 14:25:44 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>

echo Loading config files...

/* define loadstring variables */
#if #class(truck) || #class(ug_truck)
#	define APP	truck
#endif
#if #class(excav) || #class(loaderlp) || #class(ug_loader)
#	define APP	excav
#endif
#if #class(auxil) || #class(graderlp) || #class(dozerlp) || #class(wdozer)
#	define APP	auxil
#endif
#if #class(wtruck)
#	define APP	wtruck
#endif
#if #class(crusher)
#	define APP	crusher
#endif
#if #class(fuelbay)
#	define APP	fuelbay
#endif
#ifndef LANGUAGE
#       define LANGUAGE English
#endif
#define LANG	_LANGUAGE_=LANGUAGE
#include <10inch/Central.h>
#define CVARS_FILE <10inch/APP/ClassVars.h>
#include CVARS_FILE
#ifndef C_VARS
#	define C_VARS
#endif
#ifdef SHOWOPSAFEAREA
#	define	OPSF	_SHOWOPSAFEAREA_=SHOWOPSAFEAREA
#else
#	define OPSF
#endif
#ifdef LOADSIDE
#	define	LDSIDE	_LOADSIDE_=LOADSIDE
#else
#	define	LDSIDE
#endif
#ifdef GPSTAGACT
#	define GTA	_GPSTAGACT_=GPSTAGACT
#else
#	define GTA
#endif
#ifdef DESELECT
#	define SELECT	_DESELECT_=DESELECT
#else
#	define SELECT
#endif
#ifdef DELITE
#	define LITE	_DELITE_=DELITE
#else
#	define LITE
#endif
#ifdef DEVICE
#	define DEV	_DEVICE_=DEVICE
#else
#	define DEV
#endif
#ifdef NEXTGEN
#	define CENTRAL	_NEXTGEN_=NEXTGEN
#else
#	define CENTRAL
#endif
#ifdef OPTIONS
#       define OPT	_OPTIONS_=OPTIONS
#else
#       define OPT	
#endif
#if SCREENHEIGHT > SCREENWIDTH
#	define PORTRAIT	yes
#endif
#ifdef PORTRAIT
#	define ORIENT	_PORTRAIT_=PORTRAIT
#else
#	define ORIENT
#endif
#ifdef SMALLUI
#	define SIZE	_SMALLUI_=SMALLUI
#endif
#ifdef LARGEUI
#	define SIZE	_LARGEUI_=LARGEUI
#endif
#if !defined LARGEUI && !defined SMALLUI
#	define SIZE
#endif
#ifdef NEWUI
#	define UI	_NEWUI_=NEWUI
#else
#	define UI
#endif
#ifdef VSIXTWO
#       define VER      _VSIXTWO_=VSIXTWO
#else
#       define VER
#endif
#ifdef ALPHNUMOPER
#	define OPERKP	_ALPHNUMOPER_=ALPHNUMOPER
#else
#	define OPERKP
#endif
#ifdef UP
#	define PORT	_UP_=UP
#else
#	define PORT
#endif
#ifdef DEMAJOR
#	define MAJOR	_DEMAJOR_=DEMAJOR
#else
#	define MAJOR
#endif
#ifdef DEMINOR
#	define MINOR	_DEMINOR_=DEMINOR
#else
#	define MINOR
#endif
#ifdef DEMAINT
#	define MAINT	_DEMAINT_=DEMAINT
#else
#	define MAINT
#endif
#if DEMAJOR >= 6 && DEMINOR >= 5 && defined ENHANCE_PS
#	define EPS	_ENHANCEPS_=ENHANCE_PS
#else
#	define EPS
#endif
#if #class(excav) || #class(loaderlp) || #class(ug_loader)
#	ifdef REMBKTCTRL
#		define RBKTBTN	_REMBKTCTRL_=REMBKTCTRL
#	else
#		define RBKTBTN
#	endif
#else
#	define RBKTBTN
#endif

#define LSTR	_APP_=APP C_VARS CENTRAL LANG SELECT LITE OPT ORIENT PORT SIZE UI VER MAJOR MINOR MAINT OPERKP VIEW OPSF LDSIDE GTA EPS RBKTBTN
#include <Cfg/Options.h>

#ifdef HAS_VIEWS
#	if defined LARGEUI
#		define VIEW	_HASVIEWS_=yes
#	elif defined SMALLUI_VIEWS
#		define VIEW	_HASVIEWS_=yes
#	else
#		define VIEW
#	endif
#endif

CP(10inch/Main.cfg LSTR,CFGDEVICE/Main.cfg)
CP(10inch/common/WinMgr.cfg LSTR,CFGDEVICE/WinMgr.cfg)
CP(10inch/common/Viewport.cfg LSTR,CFGDEVICE/Viewport.cfg)
CP(10inch/common/Actions.cfg LSTR,CFGDEVICE/Actions.cfg)
CP(10inch/common/Options.cfg LSTR,CFGDEVICE/Options.cfg)
CP(10inch/common/Colors.cfg LSTR,CFGDEVICE/Colors.cfg)
CP(10inch/common/MsgBox.cfg LSTR,CFGDEVICE/MsgBox.cfg)
#ifdef ENHANCE_PS
	CP(10inch/common/Prestart2_base.cfg LSTR,CFGDEVICE/Prestart.cfg)
#else
	CP(10inch/common/Prestart.cfg LSTR,CFGDEVICE/Prestart.cfg)
#endif
#ifndef NEXTGEN
	CP(10inch/common/PsReport.cfg LSTR,CFGDEVICE/PsReport.cfg)
#endif
#ifdef HAS_VIEWS
	CP(10inch/common/WinMenu.cfg LSTR,CFGDEVICE/WinMenu.cfg)
	CP(10inch/common/EqInfo.cfg LSTR,CFGDEVICE/EqInfo.cfg)
	CP(10inch/common/OperMsg.cfg LSTR,CFGDEVICE/OperMsg.cfg)
#endif
#ifdef DELITE
	CP(10inch/common/StatBar.cfg LSTR,CFGDEVICE/StatBar.cfg)
#endif
CP(10inch/common/TwoEng.cfg LSTR,CFGDEVICE/TwoEng.cfg)
CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/Status.cfg)
CP(10inch/common/Favorites.cfg LSTR,CFGDEVICE/Favorites.cfg)

#ifndef LOCDATA
#	define LOCLIST
#else
#	ifdef LOCTYPE1
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/Locs.cfg)
#		define STR(INS)		INS
#		define STR2(INS)	STR(INS)
#		define STR3(INS1,INS2)	STR2(INS1)INS2
#		define LUNIT(NUM)	STR3(LUnit,NUM)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE1).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE1)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE1)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE1)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE1)5.cfg)
#	endif
#	ifdef LOCTYPE2
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE2).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE2)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE2)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE2)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE2)5.cfg)
#	endif
#	ifdef LOCTYPE3
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE3).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE3)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE3)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE3)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE3)5.cfg)
#	endif
#	ifdef LOCTYPE4
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE4).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE4)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE4)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE4)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE4)5.cfg)
#	endif
#	ifdef LOCTYPE5
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE5).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE5)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE5)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE5)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE5)5.cfg)
#	endif
#	ifdef LOCTYPE6
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE6).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE6)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE6)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE6)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE6)5.cfg)
#	endif
#	ifdef LOCTYPE7
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE7).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE7)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE7)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE7)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE7)5.cfg)
#	endif
#	ifdef LOCTYPE8
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE8).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE8)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE8)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE8)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE8)5.cfg)
#	endif
#	ifdef LOCTYPE9
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE9).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE9)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE9)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE9)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE9)5.cfg)
#	endif
#	ifdef LOCTYPE10
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE10).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE10)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE10)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE10)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE10)5.cfg)
#	endif
#	ifdef LOCTYPE11
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE11).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE11)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE11)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE11)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE11)5.cfg)
#	endif
#	ifdef LOCTYPE12
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE12).cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE12)2.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE12)3.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE12)4.cfg)
		CP(10inch/common/DynamicMenu.cfg LSTR,CFGDEVICE/LUNIT(LOCTYPE12)5.cfg)
#	endif
#	if !defined(LOCTYPE2)
#		define LOCLIST LT1=LOCTYPE1
#	elif !defined(LOCTYPE3)
#		define LOCLIST LT1=LOCTYPE1 LT2=LOCTYPE2
#	elif !defined(LOCTYPE4)
#		define LOCLIST LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3
#	elif !defined(LOCTYPE5)
#		define LOCLIST LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4
#	elif !defined(LOCTYPE6)
#		define LOCLIST LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5
#	elif !defined(LOCTYPE7)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6
#	elif !defined(LOCTYPE8)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6 LT7=LOCTYPE7
#	elif !defined(LOCTYPE9)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6 LT7=LOCTYPE7 LT8=LOCTYPE8
#	elif !defined(LOCTYPE10)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6 LT7=LOCTYPE7 LT8=LOCTYPE8 LT9=LOCTYPE9
#	elif !defined(LOCTYPE11)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6 LT7=LOCTYPE7 LT8=LOCTYPE8 LT9=LOCTYPE9 LT10=LOCTYPE10
#	elif !defined(LOCTYPE12)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6 LT7=LOCTYPE7 LT8=LOCTYPE8 LT9=LOCTYPE9 LT10=LOCTYPE10 LT11=LOCTYPE11
#	elif defined(LOCTYPE12)
#		define LOCLIST	LT1=LOCTYPE1 LT2=LOCTYPE2 LT3=LOCTYPE3 LT4=LOCTYPE4 LT5=LOCTYPE5 LT6=LOCTYPE6 LT7=LOCTYPE7 LT8=LOCTYPE8 LT9=LOCTYPE9 LT10=LOCTYPE10 LT11=LOCTYPE11 LT12=LOCTYPE12
#	endif
#endif

#ifdef STATICRSN
#	define STATICCFG <10inch/static/Config.h>
#	include STATICCFG
#endif

#define APP_FILE <10inch/APP/Config.h>
#include APP_FILE

CP(10inch/common/Macro.cfg _CTYPE_=CLASS LSTR LOCLIST DEV,CFGDEVICE/Macro.cfg)
CP(10inch/common/w0.cfg LSTR LOCLIST,CFGDEVICE/w0.cfg)

#include <Cfg/Mainini.h>
