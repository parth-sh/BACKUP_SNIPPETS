# Production Build

## Update Client: 
1. Copied the Client from ```wam-fieldmanager\build\releases\2.3.6.0.1.1\Client\Field Manager``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\Client```


## Update ApplicationServer: 
1. Copied MSS folder from ```wam-fieldmanager\build\releases\2.3.6.0.1.1\ApplicationServer\MSS``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\ApplicationServer```

> **_NOTE:_** When server needs to be updated whole application server gets copied, exe file generated from build box needs to be copied

## Update Extras: 
1. Copied baseline folder from ```wam-fieldmanager\build\releases\2.3.6.0.1.1\Extras\baseline``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\Extras```

2. Ran these commands
```
.\gradlew devtools:db_modeller:genModel
.\gradlew genModel
.\gradlew assemble
.\gradlew genClientDB
```

3. Copied the blank DB from 
```wam-fieldmanager\devtools\model_gen\src\gen\db\sa12``` to ```\\162.70.125.120\InternalBuilds\OpenGrid_2.3.6\P00HF1\FieldManager\FieldManager2.3.6.0[1]\Extras\baseline\db\blank```


### Update Nexus: 
1. Took Nexus url from .gradle/gradle.properties: http://w2k-armjen-02.ams.com/nexus/#welcome
Username: admin
Password: admin123
Ran command
```
.\gradlew :tools:baseline:assemble
.\gradlew :tools:baseline:publish
 
.\gradlew :server:http_data:assemble
.\gradlew :server:http_data:publish
 
.\gradlew :server:hub:assemble   
.\gradlew :server:hub:publish
 
.\gradlew :server:mss:imf_mss_rd:assemble
.\gradlew :server:mss:imf_mss_rd:publish
 
.\gradlew :client:maps:map_interface:assemble
.\gradlew :client:maps:map_interface:publish
 
.\gradlew :common:utils:assemble
.\gradlew :common:utils:publish
```
Published at: http://w2k-armjen-02.ams.com/nexus/content/repositories/releases/com/cgi/arm/fm/armfm_baseline/


2. Update Platform project

Fix the version in file: https://paussource.ent.cgi.com/gitlab/usis/WAMAT/product/wam-platform/-/blob/master/build.gradle?ref_type=heads 

api 'com.cgi.arm.fm:armfm_baseline:' + versionRange('2.3.6', 0, 0)



## Update Database:


### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EYChweu4FARKrGKAv2qWDdMBTuQuYLcyj5YSDsUdnIsynA?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EaQEMv8P-jRElvDwIi2CqngBya8NHNtqtLeZE9SAm0goGQ?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view





### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/Ef79mlZio_1Ar78reT4kHG4Ba0XO5xLc12eTfdVAJCiktw?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/Ean9jqlLmutCiEuB2pZHZecBBEreb5AXg9br8CQXeT5FNQ?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

## Update Database:

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/Ean9jqlLmutCiEuB2pZHZecBBEreb5AXg9br8CQXeT5FNQ?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EchN4chI9ZtPveN0GIEqzCEB6XLkAFEfTN8bjiLQblPnuQ?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EfmVMRRiQgRDsXmnHXYGaMMBAtEUAMfySrSmBBFIVMOJUw?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/ESOnVNppGYtFiHZfTKByvDUBZYGjOUTLZOUkAoS9vwdD6w?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/27: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EY8U8-SED_VNrFh8ox8Bz9UBSWeIJe--fzLkUi4r3XjDVw?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/27: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EXgEdRNgjy1MhvXkWch8figBMc-swLZcR-eBk0-xEljopg?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/28: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EcQkUgXR7uFKhs_kiekbqM0BYZRG65EEe7Maq9pGDMHWzw?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/29: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EXt3JbB2yLtOghCVerVC0sUBgckzDAREgYfTJGXK_fHF3g?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view


### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EbZWYy00gwlJiUJl2ILy0rgBS2z1XswoYaCueoi6JEqiIg?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view

### 8/23: https://groupecgi-my.sharepoint.com/:v:/g/personal/parth_sharma_cgi_com/EeBToI8et8NCgiadpIZpH8cBp15AYYZ1o2sYWQY8PY4ZoA?referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view



Build Box: W16-BLD-ASA.ams.com

