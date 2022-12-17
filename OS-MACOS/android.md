# https://developer.android.com/studio

JDK Location -- /Applications/Android Studio.app/Contents/jre/Contents/Home

SDK Location -- /Users/z/Library/Android/sdk

---
# Errors

license not accepted

Android SDK Command-line Tools (latest) download from SDK section

---
# Release build

chmod 777 gradlew

./gradlew clean && ./gradlew assembleRelease

/Users/z/Library/Android/sdk/platform-tools/adb install -r app/build/outputs/apk/release/app-release-unsigned.apk

