..
.. DISPATCH Utility System Module
.. Copyright (c) Modular Mining Systems, 1982-1995
..               All Rights Reserved
..  $RCSfile: readme.mc,v $
.. $Revision: 1.1 $
..   $Author: olson $
..     $Date: 2002/10/19 00:21:19 $
..    $State: Exp $
..
Deployment of the minecare dispatch forms requires the following steps to be undertaken:

(1) Set the INTF_MINECARE definition to 1 in the client specific switches form. Since the minecare embedded software effectively replaces most 3rd party interfaces, most interface specific forms can be de-activated once all equipment has been moved to minecare. For example, once all vims trucks have the minecare software loaded, you can turn INTF_VIMS to '0'

(2) Add the minecare rpc's to the client enum.c:

xxxxx
  "Interface",      "INtf",      16,
  xxxx
   
    { act_interface,     0x771,  fmtint }, /* VS-DATA */
    { act_interface,     0x772,  fmtint }, /* VS-EVENT */
 
(3) Create the minecare configuration database. To do this, run the form "minecare/pop/config_create_menu". This form can at all times be used to (re)populate the minecare configuration database with default configurations for all the interfaces supported by minecare. It brings up a menu which is self explanatory. To optimize performance, only add configurations for interfaces that are actually on site...

(4) Add the main minecare menu to the client keypad or control panel. The form to run the main menu is "minecare/minecare_menu".

(5) Actions can be associated with the reception of events and parameters, on a client configurable basis. Standard actions are "Dipper", "Tons", "StartDump", "EndDump", "FuelLevel", "TKPH", "Custom". The Dispatch behavior for these actions is pre-defined inside the form ../minecare/mc_actions.frm. Please have a look at the contents of this form. You will see that it includes the form "minecare/mc_cli_actions" which can be used to override the standard behavior. Comments are provided....

