# [React native setup](https://reactnative.dev/docs/environment-setup)

choco install -y nodejs-lts

# Install Android Studio
## Set variables
| System variable | Value |
| --- | ----------- |
|Path | C:\Program Files\Android\Android Studio\jre\bin |
| ANDROID_HOME | %LOCALAPPDATA%\Android\Sdk |
| Path | %LOCALAPPDATA%\Android\Sdk\platform-tools |

---

npx react-native init AwesomeProject

cd C:\Users\parth\Desktop\AwesomeProject

## Run in admin powershell cause of env variables set in system.

.\node_modules\.bin\react-native.cmd start

.\node_modules\.bin\react-native.cmd run-android