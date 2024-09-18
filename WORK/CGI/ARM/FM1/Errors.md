## Error in call Process UnShedule. when setting crew out of shift : GAUTAM; ErrMessage: ORA-20003: EOS failed with error code: 100, ORA-01403: no data found trace:ORA-06512: at "RTMOBILE.RTARM_EOS", line 1096
ORA-06512: at "RTMOBILE.RT_CREW_DEVICE_ROUTER", line 614
ORA-06512: at "RTMOBILE.RT_CREW_DEVICE_ROUTER", line 486
ORA-06512: at "RTMOBILE.RT_CREW_DEVICE_ROUTER", line 754
ORA-06512: at line 1
; Next Info ARMBSP-01221: GAUTAM


1. Go to ITAGL Box - W2K-AGIT-ASB.ams.com, Run

C:\Mobile>"stop mobile.bat"
C:\Mobile>"start mobile.bat"

C:\service_monitors\bin>AllServiceMonitorsStop.bat
C:\service_monitors\bin>AllServiceMonitorsRun.bat

2. Delete queues in local client

## IMFPlus Error

Try login from other machine

OR

Ask Harish to restart Server


## Error BaselIne Service Test running old file
./gradlew clean eclipse

https://stackoverflow.com/a/25097172/9229695
gradlew cleanEclipse eclipse