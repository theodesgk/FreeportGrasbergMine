.. DISPATCH Utility System Module
.. Copyright (c) Modular Mining Systems, 1982-1997
..               All Rights Reserved
..  $RCSfile: gps_config.frm,v $
.. $Revision: 1.4 $
..   $Author: cayley $
..     $Date: 2010/06/03 01:25:19 $
..    $State: Exp $
..
..   Purpose: Client specific GPS conversion values for
..		SUN - Suncor Energy
..
..  This  include ensures that the generic stuff is always here
..
.. NOTE: Read /mms/tcl/gps/GPS_Config_Doc for instructions on configuring
..       the GPS transformation
..
.include DSP_STDFORM/gps_config
..
..Indicates this client has high precision data on site
..This is now contained in switches.frm
...def    GPS_HI_DATA     1      .. 0 [=] No hi precision, 1 [=] hi precision
..
.if GPS_HI_DATA
.include hpgps/hpgps_def
.endif
..
..			EXPLANATION
..
..	The gps field units send in position as a 16 bit signed value
..      ( -32767 to +32767 ). This value represents distance in 1/10
..	of a second from an an origin point, which is at a central
..	mine location. Each 1/10 of a second is about 10 feet in the
..	north/south direction, and less than 10 feet in the east/west
..	direction, depending on distance from the equator. (Lines
..	of latitude get closer together as you move away from the
..	equator. The coverage under this system is about +/-62 miles
..	in the north/south direction (32767 * 10 feet / 5280 feet_per_mile)
..	The unit of measure in this system is called one GPS_GRID.
..
..			Computation of GPS_XORIGIN and GPS_YORIGIN
..
..	Pick a central mine location, convert to latitude and longitude,
..	and then multiply by 36,000. Using amu as an example, origin is
..	at CR1. This is at state plane location 767951 E, 362564 N.
..	Convert to Longitude and Latitude using sms_map gives -111.052358 W,
..	31.993867 N.
..	Now GPS_XORIGIN = -111.052358 * 36000 = -3997884.88
..	GPS_YORIGIN     =   31.993867 * 36000 =  1151779.21
..
..			Computation of GPS_SCALE
..
..	The gps units measure to .001 second 
..	(about one inch, or one milli second, or 1 mSec).  They are really
..	not that accurate, and we don't need that degree of accuracy
..	anyway. To cut down on radio usage, we only send information accurate
..	to .1 second. GPS_SCALE = .1 / .0001 = 100.
..
..			 Computation of GPS_GRID_PER_DEG
..
..	This factor shows how many GPS_GRIDs are in one degree of Latitude or
..	longitude. There are 3600 seconds in a degree, and 10 GPS_GRIDs per
..	second, so GPS_GRID_PER_DEG = 3600 * 10 = 36000.
..
..			Computation of GPS_GRID_PER_RAD
..
..	This factor translates one GPS_GRID distance to either feet or meters,
..	depending on the unit of measurement used by the minesite.
..	It is the distance of .1 second of latitude, which is about
..	10.1 feet for amu
..	(use amu on sms_map), or 3.08 meters for cdm (use cdm on sms_map)
..	Note that GPS_GRID_PER_RAD is slightly dependent on Latitude,
..	contrary to intuition.
..
..  These are the coordinates for MMS Headquarters in Tucons, Arizona. They
..  are provided as a starting point for configuring the transform. Use the
..  /mms/tcl/gps/GPS_Config_Doc instructions to get these numbers.
..
..  Near the rooftop groundstation antenna, -110:55:24.000 32:08:10.0000
..
.def GPS_XORIGIN (49361300)  ..Longitude origin, grid units
.def GPS_YORIGIN (-1461200)  ..Latitude origin, grid units
..
.def GPS_SCALE		10
.def GPS_GRID_PER_DEG	360000
..
..
..	Pick one of the following, depending on whether mine uses feet or meters
..	Note that values will change slightly depending on minesite Latitude. 
..
.def GPS_GRID_PER_RAD	0.308
..def GPS_GRID_PER_RAD	10.1
..
..   Center point
..
..
...def SUN_WGS_CONV "utmWGS84 6378137.0", 56.96777778, -111.45472222, 1.00005343, 0.0, 0.0, 0.0818191908
.def FII_WGS_CONV "utmWGS84 6378137.0", -4.05888889, 137.11472222, 1.00028595, 0.0, 0.0, 0.0818191908
..
..
..                                                     Adjust Here
..                                    East    North       E    N   Rot.   Scale
..                                                        |    |
..                                                        v    v
..def SUN_MINE_TRANS "transform", 146500.80, 249999.21,  0.0, 0.0, -0.04843658, 1.0
.def  FII_MINE_TRANS "transform", 34782.3870, 51056.9940 , 0.0, 0.0, -0.14953574, 1.000000000
..   is x and y switched at mine site
..
.def GPS_XY_SWITCHED "no"
..
.def GPS_CLIENT_CONFIG	FII_WGS_CONV
..
..      Minesite specific transformations
.def GPS_CLIENT_TRANS	FII_MINE_TRANS
..
..
..	Instead of calling GLOBETOMAP and MAPTOGLOBE directly, we
..	call the wrapper routines gps_cli_globetomap() and
..	gps_cli_maptoglobe(). These are used to take care of simple
..	sign changes. Local rotations and scalings are handled by
..	MAPCONFIG. (Note: the underlying C code lives in formfunc.c)
..
.expr gps_cli_globetomap(LONG, LAT, *X, *Y)    GLOBETOMAP(LONG, LAT, X, Y)
.expr gps_cli_maptoglobe(X, Y, *LONG, *LAT)    MAPTOGLOBE(X, Y, LONG, LAT)
..
.init clidir := GETENV("DSP_CLIENT", 0)
..
..      Location of file that is provided by mine to give bench elevations 
..      for sloping mining surfaces.
..
..      Location of file that is provided by mine to give the XY boundary
..      points for grades.
..
.def GPS_BDY_FILE       clidir + "/poly/boundary.txt"
..
..      Specifies the format the GPS_BDY_FILE file is in. At present
..      DIGED and HTC are the only supported formats.
..
..              DIGED format -
..
..                      elev    name
..                      x1      y1
..                      ...
..                      x1      y1
..                      0       0
..
..              HTC format -
..
..                      x1      y1      name
..                      ...
..                      x1      y1      name
..                              - blank line separator -
.def GPS_BDY_FILE_TYPE  "DIGED"
..
..
..      If the boundary file has less lines than this, there may be
..      an error. Do not discard old boundary records.
.def GPS_BDY_LINES      50
..
..      Note -  material type is hardcoded from lease-location name.
..      We may need to revise this later - Andy
..
.expr GetMat(mat)    (
      material := int mat - 100,
      return(material)
      )
..
.expr gps_loc_to_material(location) (
      return(1),
      dash := STRPOS(location,"-"),
      material := GetMat(SUBSTR(location,(dash+1),3)),
      return(material)
      )
..
..      Translation of mine planning location name to DISPATCH name
..
.expr mine_loc_to_dispatch(location) \
      return(location )
..
..      Default display unit is meters (m). USA clients must set
..      GPS_DISPLAY_UNIT "f" in the clients form/gps_config.frm file.
..	This has been taken care of in DSP_STDFORM/gps_config.frm now
...def    GPS_DISPLAY_UNIT        "f"
..
..      Convert mine elevations to format reported by GPS units,
..      and vice versa.
..
..      Convert meters * 10 to feet
..      The hack for meters < 1000 is a temporary one for HTC. Elevations
..      are 400 meters or 4000 decimeters. Eventually everyting will be
..      in decimeters.
.expr gps_GPS_el_to_mine(gps_elev) (
        float(gps_elev)*0.1
      )
..
.expr gps_mine_el_to_GPS(mine_elev) (
      float(mine_elev)/0.1
      )
..
..      Assign proper distance from bucket to center. Eventually
..      it would be best to get this in the database. For now manually
..      keep in sync with psw/Goic/excav/English/Head.cfg
..
.expr gps_shov_radius(unit) (
	"250"	
      )
..
..      For mines that display boundary records.
..      Most clients will want to update the pit database automatically
..      At HTC this is currently (2-26-97) done manually.
.def    GPS_AUTO_BDY_UPDATE     "yes"
..
..	Turn on transmission for all active radio ports.
..
.if DEFINED("DSP$ISSIM")
.if !DSP$ISSIM
.init gpsIsRadio.0 := 1,	.. Make this 1 if using a packet modem only
      gpsIsRadio.1 := 0,	.. Work on ports 1 to 4 if using a blue box. 
      gpsIsRadio.2 := 0,	.. Set active ports to 1, leave others 0.
      gpsIsRadio.3 := 0,
      gpsIsRadio.4 := 0,
..      gpsIsNet.0 := "1",
      nil
.else
..    turn off during simulation
.init gpsIsRadio.0 := 0,
      gpsIsRadio.1 := 0,
      gpsIsRadio.2 := 0,
      gpsIsRadio.3 := 0,
      gpsIsRadio.4 := 0
.endif
.endif
..
.. eof gps_config.frm
