fsutil hardlink create .\All ..\Main\All
fsutil hardlink create .\excav\Macro.cfg .\Macro.cfg
fsutil hardlink create .\excav\Main.cfg .\Main.cfg
fsutil hardlink create .\excav\Vsms.cfg .\Vsms.cfg
fsutil hardlink create .\kltd-gsp\Macro.cfg .\Macro.cfg
fsutil hardlink create .\kltd-gsp\Name.cfg .\kltd-hub\Name.cfg
fsutil hardlink create .\kltd-gsp\PswServer.cfg .\kltd-hub\PswServer.cfg
fsutil hardlink create .\kltd-gsp\Vsms.cfg .\Vsms.cfg
fsutil hardlink create .\kltd-hub\Macro.cfg .\Macro.cfg
fsutil hardlink create .\kltd-hub\Vsms.cfg .\Vsms.cfg
fsutil hardlink create .\truck\Macro.cfg .\Macro.cfg
fsutil hardlink create .\truck\Main.cfg .\Main.cfg
fsutil hardlink create .\truck\Vsms.cfg .\Vsms.cfg
junction .\auxil .\truck
junction .\fuelbay .\truck
junction .\crusher .\truck
junction .\wtruck .\truck
junction .\dozerlp .\truck
junction .\graderlp .\truck
junction .\loaderlp .\excav
junction .\wtrucklp .\truck
junction .\ug_loader .\excav
junction .\ug_train .\excav
junction .\ug_truck .\truck
