# Manual installations

| Program | Location | Origin |
| --- | ----------- | ------- |
|WSL | -- | wsl --install |
|GOOGLE CHROME | C:\Program Files\Google\Chrome | Web |
|VSCODE | C:\Users\parth\AppData\Local\Programs\Microsoft VS Code | Web |
|ANDROID STUDIO | C:\Program Files\Android\Android Studio | Web |
|Android SDK | C:\Users\parth\AppData\Local\Android\Sdk | android studio |
|JDK | C:\Program Files\Android\Android Studio\jre | android studio |
|Chocolatey | -- | Admin Powershell |

# WSL installations
1. sudo apt install git
2. sudo apt install build-essential
3. sudo apt install sqlite3

# Choco installations(Admin powershell)
1. choco install nodejs-lts

# Upgradations
1. windows update from settings

2. wsl --update
3. sudo apt update upgrade autoremove, upgrade from wsl

4. chocolatey --version; choco upgrade chocolatey
5. choco upgrade nodejs-lts