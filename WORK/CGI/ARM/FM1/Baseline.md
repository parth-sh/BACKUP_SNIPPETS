0. [DB Modeller](./DBModeller.md)

1. Change Mob_dbMap.properties, Check model.xml, Change mobile.sql

2. http://lutl-armutilit.ams.com/redmine/projects/armmobileproject/wiki/Model_build_213

```
.\gradlew devtools:db_modeller:genModel

.\gradlew genModel

.\gradlew assemble

.\gradlew genClientDB, this generates client.db, mobile.db
```

2. Go to ITAGL machine, paste your empty db to C:\service_monitors\baseline\db\blank from
C:\Users\parth.sharma\Desktop\ARM\wam-fieldmanager\devtools\model_gen\src\gen\db\sa12
 
3. Delete any prexisting db from C:\service_monitors\baseline\db\baseline\ALL

4. Run baseline
http://w2k-armjen-02.ams.com/redmine/projects/armmobileproject/wiki/Deploy_and_run_baseline
```
.\gradlew :tools:baseline:assemble

Copy armfm_baseline.jar from tools\baseline\build\libs\, to ITAGL machine at: C:\service_monitors\baseline\lib

Change logback.xml log level to info from debug

Run "runBaseline_with specific to one msg.bat" file

Note*: Remove line 
set BL_ARGS=-F baseline.properties -L testM.log -M MSG_RT_CND_TYPE_CHG

```

5. Copy from C:\service_monitors\baseline\db\baseline\ALL to the build of FM1 client

