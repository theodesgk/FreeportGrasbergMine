..
.. DISPATCH Utility System Module
.. Copyright (c) Modular Mining Systems, 1982-1995
..               All Rights Reserved
..  $RCSfile: readme.vs,v $
.. $Revision: 1.1 $
..   $Author: olson $
..     $Date: 2002/08/09 15:25:45 $
..    $State: Exp $
..
Vital signs system is combination of seven interfaces(at this time of writing)
having different data structures being resolved into a single database thereby
helping the maintenance crew with ease of operation.

This system can coexist with the other generic systems written prior to this.
However, if both earlier system and vital signs are to be installed at a site
care need to be taken with Ddec and Cense systems which is explained in Notes
at the bottom.

Installation of Vital signs is carried out as follows. They are 1) Real time
changes to be carried out in act_dispatch .frm. 2) Adding of individual rpc's 
of each interface to the enum.c act_other table. 3) Copy vsconfig.ddb to client
opns directory.

1) CHANGES THAT NEED TO BE DONE IN ACT_DISPATCH.FRM
-----------------------------------------------------
Make the three changes in act_dispatch

.include act/act_vs (make sure to insert this after all include files specially
after act_psw else the system would complain of the rpc's)

Add to expr ACT$RESTART
!DSP$ISSIM ? VS$OPEN

Add to expr ACT$OTHER \
       ACT$VSALARMS,
       case(DSP$PKTNO) ..(

The expr ACT$VSALARMS should be added as shown above before the case statement

2) ADDITION OF RPC'S OF INDIVIDUAL INTERFACES.
----------------------------------------------------
Add the following rpc's to enum.c depending on which interface
need to be installed at a particular site. 

 a) VIMS
 { act_other, 0x0164, fmtint }, /* VIMS ALARM EVENT ACTIVATE*/

 b) DDEC
  { act_other,     0X0142, fmtint }, /* DDEC diag */
  { act_other,     0X0146, fmtint }, /* DDEC data */

 c) STATEX & TCI
  { act_other,     0x01C3, fmtint }, /* STATEX DATA */
  { act_other,     0x01C1, fmtint }, /* STATEX ALARM */
  { act_other,     0x01CB, fmtint }, /* TCI DATA */
  { act_other,     0x01C9, fmtint }, /* TCI ALARM */

 d) HITACHI EX3500 AND EX5500 series
  {act_other,	   0x0241, fmtint }, /* HITACHI DATA */
  {act_other,      0x0243, fmtint }, /* HITACHI EVENT */
  
  make sure to add the following rpc's to client.rpc if they are 
  not present in psw/etc/rpc file

  0x0241  HIT-DATA        dispatch        bb[b]?[d][l]    RADIO
  0x0243  HIT-EVENT       dispatch        bb[b]?[d][l]    RADIO
  0x0240  HIT-PWRUP       dispatch        v               RADIO
  0x0242  HIT-REQDATA     hitachi         bbbb            RADIO
  0x0244  HIT-REQEVENT    hitachi         bbb             RADIO

 e) LETOURNEAU
  {act_other,     0x0f8, fmtint }, /* LETOURNEAU ALARM */

 f) CENSE
   { act_other,     0X170, fmtbin   },   /* CECO */
   { act_other,     0X171, fmtbin   },   /* CECODIAG */

3) Copy vsconfig.ddb present in this directory to the client's 
   opns directory. chmod to 766 vsconfig.ddb to have read write
   access.

Add "VitalSigns" button to the Tcl keypad link is vs/vs_mainmenu
open the tcl keypad and run the Configuration Utility. If utility 
runs without any hiccups it indicates that the vsconfig.ddb has  
been set up with right permissions.

make sure the rpc's of the particular interface being installed
is recognised by the packet switcher. Test this using command
pswd -R for example pswd -R HIT-DATA would display the details
of HIT-DATA rpc.

There is no change in loading of firmware it would remain as before.

NOTES:
------
Vital signs can exist with the generic systems written before,
though this is not recommended.  Care need to be taken with Ddec
and Cense system.

To install with generic Ddec system.
-----------------------------------
create ddec directory in client's hack directory, copy act_ddec.frm
to this directory and comment out the following lines shown below.

..  PSW$BIND(PSW$PATH),
..  PSW$COMMAND(unique[ddec-request %d]),

This stops a request to the field unit to send a snap shot of polling
data.  This request would be sent by act_vs thereby stopping duplication
of polling data.

To install with Cense system.
----------------------------
create cumm directory in client's hack directory, copy act_cumm.frm
to this directory and comment the following lines shown below.

..     PSW$CALL("xmit_val", "ceco_config",PSW$ARGV(0),(60,8,0)[\[%d %d %d\]]),
..     PSW$CALL("xmit_val", "ceco_config",PSW$ARGV(0),(0,8,0)[\[%d %d %d\]])
