# React native
https://reactnative.dev/docs/environment-setup

brew install/upgarde watchman

npx react-native init AwesomeTSProject --template react-native-template-typescript

then follow [xcode](#XCODE)

## Run from cmd
npx react-native start

npx react-native run-ios --device "Parth iPhone"

npm install -g ios-deploy

---
# XCODE
1. download and install from app store

rbenv install $(cat .ruby-version)

gem install cocoapods

gem update cocoapods

2. Select Devloper Team

3. Create unique Bundle Identifier

4. Select physical device

5. Iphone Settings -> General -> Device Management and "trust" yourself as developer.

6. Product → Build


---
## Existing Project
rm -rf node_modules package-lock.json && npm i && cd ios && pod install && cd ..

npx react-native start

npx react-native run-ios

git add . && git reset -- ios/ package-lock.json .ruby-version && git status

## Errors
The sandbox is not in sync with the Podfile.lock. Run 'pod install' or update your CocoaPods installation.
https://stackoverflow.com/a/22878202/9229695
