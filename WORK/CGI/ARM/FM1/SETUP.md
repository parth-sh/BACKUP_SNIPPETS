## ARM KT's
Mail pdf available
https://miro.com/app/board/uXjVNvQWZl0=/

## KT FOR FM1
\\162.70.125.120\public\KT Folders\KT for FM1

## Project workspace setup Readmine
http://w2k-armjen-02.ams.com/redmine/projects/armmobileproject/wiki/Initial_computer_setup
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

3. Database url in db.properties, mobile device id in user.properties

4. In build.version.properties file increament version.properties.build property

5. Create a build, ./gradlew release

6. copy assets.db, mobile.db, mobile.log to --> build\releases\2.3.3.1.0.2\Client\Field Manager\db

7. build\releases\2.3.3.1.0.2\Client\Field Manager\Propertiesfiles\conf\user.properties.bak --> build\releases\2.3.3.1.0.2\Client\Field Manager\Propertiesfiles\conf\user.properties
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
```

7. ownerQueueSetMap.properties
```
LOCALHOST=queueset1
```

8. Chnage the launch configuration
Run Configurations > SHARED - Field Manager > JRE > Alternate JRE > 32 bit jdk

9. In Eclipse,

Windows > Preferences > Java > Build Path > ClassPath Variables > MOBILE_HOME

Windows > Preferences > Run/Debug > String Substitution > MOBILE_HOME

## FM1 Production Deployment
1. Change build.version.properties, increase version.properties.version

2. Create a build, ./gradlew release

3. Set user.properties

4. Set ownerQueueSetMap.properties
```
mobile.device.id = ITDEV1               #id taken from ITAGL ADMIN: http://W2K-AGIT-ASB.ams.com:9082/fmadmin/fieldit
 
comms.device.collection.id = COMMS1     #id taken from ITAGL ADMIN: http://W2K-AGIT-ASB.ams.com:9082/fmadmin/fieldit
 
comms.server.ip_address = 172.18.6.31   #IP Address taken from ITAGL SERVER MACHINE: w2k-agit-asb.ams.com
 
comms.server.group.ip_address = 172.18.6.31     #IP Address taken from ITAGL SERVER MACHINE: w2k-agit-asb.ams.com
```

4. Paste baseline wala DB folder, Get assets.db, mobile.db, mobile.log from 2.3.6.0.1 into Client/Field Manager/db/
or get it from, \\162.70.125.120\public\ritul\ITAGL_DB\db

4. Open CSG CLIENT MACHINE: w16-st-clb.ams.com

5. Go to path: F:\ARM_MAINTENANCE\FM1_WG

6. Paste newly created Client/Field manager into Path

7. Chnage the .\$internal.bat file,
Paste
``` 
ARM_APPLOCK=C:\FMLOCKS\ITDEV1      # around line 10 
```

8. Create C:\FMLOCKS\ITDEV1 this folder for FMLOCKS

9. Run .\$internal.bat

10. if the baseline db is not pasted it create baseline db from ITAGL server/database.