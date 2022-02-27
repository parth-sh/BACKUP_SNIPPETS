# Manual installations
| Program | Location | Origin |
| --- | ----------- | ------- |
|GOOGLE CHROME | C:\Program Files\Google\Chrome | Web |
|VSCODE | C:\Users\parth\AppData\Local\Programs\Microsoft VS Code | Web |
|ANDROID STUDIO | C:\Program Files\Android\Android Studio | Web |
|Android SDK | C:\Users\parth\AppData\Local\Android\Sdk | android studio |
|JDK | C:\Program Files\Android\Android Studio\jre | android studio |
|WSL | -- | wsl --install |
|Chocolatey | gcm choco | Admin Powershell |
|IntelliJ Idea IDE | C:\Program Files\JetBrains\IntelliJ IDEA Community Edition 2021.3.2 | Web |

# Set variables
| System variable | Path | Dependency |
| --- | ----------- | --- |
| Path | C:\Program Files\Android\Android Studio\jre\bin | Android, Java, React native |
| ANDROID_HOME | %LOCALAPPDATA%\Android\Sdk | React native |
| Path | %LOCALAPPDATA%\Android\Sdk\platform-tools | React native |

# WSL installations
1. sudo apt install git
2. sudo apt install build-essential
3. sudo apt install sqlite3

# Choco installations(Admin powershell)
1. choco install nodejs-lts
    npm install -g typescript
    tsc.cmd -v
    npm install -g @angular/cli
    ng.cmd --version
    npm install -g firebase-tools
    firebase.cmd --version


# Upgradations
1. windows update from settings

2. wsl --update
3. sudo apt update upgrade autoremove, upgrade from wsl

4. chocolatey --version; choco upgrade chocolatey
5. choco upgrade nodejs-lts
    npm list -g
    npm update -g