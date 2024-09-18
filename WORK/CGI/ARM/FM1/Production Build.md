# Production Build

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EYChweu4FARKrGKAv2qWDdMBTuQuYLcyj5YSDsUdnIsynA?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EaQEMv8P-jRElvDwIi2CqngBya8NHNtqtLeZE9SAm0goGQ?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

## Update Client: 
1. Copied the Client from ```C:\Users\parth.sharma\Desktop\ARM\wam-fieldmanager\build\releases\2.3.6.0.1.1\Client\Field Manager``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\Client```


## Update ApplicationServer: 
1. Copied MSS folder from ```C:\Users\parth.sharma\Desktop\ARM\wam-fieldmanager\build\releases\2.3.6.0.1.1\ApplicationServer\MSS``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\ApplicationServer```


## Update Extras: 
1. Copied baseline folder from ```C:\Users\parth.sharma\Desktop\ARM\wam-fieldmanager\build\releases\2.3.6.0.1.1\Extras\baseline``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\Extras```

2. Ran these commands
```
.\gradlew devtools:db_modeller:genModel
 
.\gradlew genModel
 
.\gradlew assemble
 
.\gradlew genClientDB
 
.\gradlew :tools:baseline:assemble
```

3. Copied the blank DB from 
```C:\Users\parth.sharma\Desktop\ARM\wam-fieldmanager\devtools\model_gen\src\gen\db\sa12``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\Extras\baseline\db\blank```


## Update Nexus: 
1. Took Nexus url from .gradle/gradle.properties: http://w2k-armjen-02.ams.com/nexus/#welcome
Username: admin
Password: admin123
Ran command
```
.\gradlew :tools:baseline:publish
```
Published at: http://w2k-armjen-02.ams.com/nexus/content/repositories/releases/com/cgi/arm/fm/armfm_baseline/


2. Update Platform project

Fix the version in file: https://paussource.ent.cgi.com/gitlab/usis/WAMAT/product/wam-platform/-/blob/master/build.gradle?ref_type=heads 

api 'com.cgi.arm.fm:armfm_baseline:' + versionRange('2.3.6', 0, 0)


### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/Ef79mlZio_1Ar78reT4kHG4Ba0XO5xLc12eTfdVAJCiktw?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/Ean9jqlLmutCiEuB2pZHZecBBEreb5AXg9br8CQXeT5FNQ?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

## Update Database:







Build Box: W16-BLD-ASA.ams.com

