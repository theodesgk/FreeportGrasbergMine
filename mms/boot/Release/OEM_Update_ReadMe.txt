Updating Dispatch 6 with the latest INTERFACES module

1) Download lastest version of MEOS drivers.
        1.1) Unzip package. 
        1.2) Copy the file "mc_enums.frm" from "Encrypted-v1.2" or "Encrypted-v2.0" folder into the packge folder "mms/dsp/form/common/minecare" that was unziped on the previous step.
             For Dispatch 6.6.8 or previous "mc_enums.frm" must be copied from "Encrypted-v1.2", while for Dispatch 6.7.0 or later the file must be copied from "Encrypted-v2.0".
        1.3) Final structure of the package:
		boot\
			*a29k\
			*arm\
			*MineCare\
			*Release\
		dsp\form\common\minecare\
			*mc_enums.frm
			*pop\
				*config_create_menu.frm
				*sql_intf_script.frm
				*popdata\

2) Update Application Server and Clients.
	2.1) Backup dsp\form\common\minecare\ folder.       
        2.2) Overwrite minecare folder with the content of the minecare folder from the package.
	2.3) Execute the form minecare\pop\sql_intf_script.frm, will dynamically create update_interfaces.sql script 
	     in folder %DSP_STDFORM%\minecare\pop\.

3) Backup Operational and Infrastructure databases.
	3.1) Connect to an instance of the SQL Server.
	3.2) Expand SQL Server Agent.
	3.3) Expand Jobs.
	3.4) Right click on DispatchDataBackup job and then click Start.

4) Update <CLIENT>Operational database.
	4.1) Connect to <CLIENT>Operational database.
	4.2) Open update_interface.sql script created in step 2.3 and execute.

5) Update OMS Server.
	5.1) Go to boot folder and backup a29k, arm, MineCare and Release folders.
	5.2) Overwrite these folders with the content of the folders from the package.
	5.3) Run the script /mms/boot/installboot from the command prompt as administrator.

6) Clean up popdata configurations in database for interface SmartCumminsJ1939
	In this release, we removed pop files for SmartCumminsJ1939 because they contain coflicting param/event ids with interface InvertexCAN. 
	User should also do some clean up work on their database.
	6.1) Click "ModularReady" button
	6.2) Click "Configuration Utility" button
	6.3) Click "Clean ModularReady Database Utility" button
	6.4) Right Click, and select interface name: SmartCumminsJ1939
	6.5) Click "Delete Events & Parameters"
	Note: After above update database, if the parameter/event transactions forms don't show parameter/events correctly, please report bug to Classic Dispatch team.
