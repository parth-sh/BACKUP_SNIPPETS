## ARM KT's
Mail pdf available

## KT FOR FM1
\\162.70.125.120\public\KT Folders\KT for FM1

## Workspace Setup Readmine
http://w2k-armjen-02.ams.com/redmine/projects/armmobileproject/wiki/Workspace_setup

## Repo Link
https://paussource.ent.cgi.com/gitlab/usis/WAMAT/product/wam-fieldmanager

## FM Admin url
http://w2k-con-asc.ams.com:9080/fmadmin/fieldit/
https://wutl-lqcgiaas02.ams.com:7002/fmadmin/fieldit/waf/wadmin/index.jsp
http://wutl-lqcgiaas02.ams.com:7003/fmadmin/fieldit/waf/wadmin/index.jsp

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

## Flow diagram made by me
https://miro.com/app/board/uXjVNvQWZl0=/

FIELD MANAGER ADMIN:
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
