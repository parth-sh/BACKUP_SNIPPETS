## ARM KT's
Mail pdf available
https://miro.com/app/board/uXjVNvQWZl0=/

## KT FOR FM1
\\162.70.125.120\public\KT Folders\KT for FM1

## Workspace Setup Readmine
http://w2k-armjen-02.ams.com/redmine/projects/armmobileproject/wiki/Workspace_setup

## Repo Link
https://paussource.ent.cgi.com/gitlab/usis/WAMAT/product/wam-fieldmanager

## SysBase Software Link
\\162.70.125.120\wrkproduct\Software\Sybase

## Database Backup
\\162.70.125.120\public\ritul\MNOSD-21958

## DB Modeller KT
\\162.70.125.120\public\KT Folders\KT for FM1\KT by Olina\KT to India _ OpenGrid - FieldManager Modeller for DB part-20230914_183314-Meeting Recording.mp4

## Username Pass for FM1
PUNI/ password
[3/5 4:59 PM] Sinha, Ritul
QSUHRID/QSUHRID

## URL's and Machines:

ITAGL ADMIN: http://W2K-AGIT-ASB.ams.com:9082/fmadmin/fieldit

ITAGL SERVER MACHINE: w2k-agit-asb.ams.com

CLIENT MACHINE: w16-st-clb.ams.com

http://w2k-con-asc.ams.com:9080/fmadmin/fieldit/
https://wutl-lqcgiaas02.ams.com:7002/fmadmin/fieldit/waf/wadmin/index.jsp
http://wutl-lqcgiaas02.ams.com:7003/fmadmin/fieldit/waf/wadmin/index.jsp

http://w2k-con-asc.ams.com:9080/fmadmin/fieldit/waf/wadmin/index.jsp?L_Message=Login%20failed%20due%20to%20technical%20reasons.%20%3Cbr%3E%20Please%20contact%20your%20help%20desk.

QA ADMIN:
http://wutl-lqcgiaas02.ams.com:7003/fmadmin/fieldit/waf/wadmin/index.jsp
setup, setup

## Debugging:
1. Get asset.db, client.db from tester

2. Disable Authentication
client/field_manager/src/presentation/java/com/stsjava/fieldit/mobile/login/ValidatorLogin.java
doLocalLoginProcess

3. Chnage the launch configuration, select java 32 bit in debugger or run JRE

4. Database url in db.properties, mobile device id in user.properties

<!-- Build -->
In build.version.properties file increament version.properties.build property

.\gradlew release

copy assets.db, mobile.db, mobile.log to --> build\releases\2.3.3.1.0.2\Client\Field Manager\db

build\releases\2.3.3.1.0.2\Client\Field Manager\Propertiesfiles\conf\user.properties.bak --> build\releases\2.3.3.1.0.2\Client\Field Manager\Propertiesfiles\conf\user.properties
```
#
# configuration of Field Manager
#
 
# device id (previously stored in "faf.DeviceToolkit.device_id" in fieldit.properties file)
mobile.device.id = SG11
 
# previously stored in "comms.server.name" property
comms.device.collection.id = LOCALHOST
 
# corresponds to "SERVER_ID" property in NSClient.ini
# ("SERVER_ID" in NSClient.ini is automatically populated by this property value)
comms.server.ip_address = 127.0.0.1
 
# corresponds to "SERVER_GROUP" property in NSClient.ini
comms.server.group.ip_address = 127.0.0.1
 
# if set to false nsclient.ini files for networks are not updated with IP and group IP
comms.server.use.for.all.networks = true
 
# rest service ip address and port
server.dataservice =
 
#----------------------------------------------------------------------------------------
```
 