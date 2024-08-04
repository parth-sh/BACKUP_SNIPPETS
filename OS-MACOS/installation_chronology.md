# 🚀 Installation Chronology

1. Google Chrome
   - Set shortcut: New Tab to the Right
      https://superuser.com/a/1627227
   - Add Stay Focused Chrome Extension
      https://www.stayfocusd.com/blocked/?background&customMsg=
3. Terminal Default Profile Setup
   - 🛠️ Xcode Command Line Tools (`xcode-select --install` | git, clang)
   - 🔄 Update: System Settings > General > Software Update
4. GitHub SSH Setup
   - 🌐 [GitHub SSH Webpage](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
   - 📂 BACKUP_SNIPPETS
5. brew install (Package Manager)
   - 🌐 [Link](./homebrew_instructions.md)
6. VS Code Installation
   - ⚙️ Settings: Format on save
18. Whatsapp Messanger
7. Java
   - ☕ JDK Installation: `brew install openjdk`
   - 📎 [JDK Setup](../Java/openjdk_mac.md)
2. Logitech Options+
8. Eclipse Installation (
      Installation Folder: /Users/parth.sharma/eclipse/java-2023-12
      Java 17+ VM: /opt/homebrew/Cellar/openjdk/21.0.2/libexec/openjdk.jdk/)

# 🗑️ Deleted Items

1. ~~nvm installation / node and npm~~ [Learn More](./nvm.md) | node, JS_Frameworks
2. ~~angular global install~~ [Learn More](../JS_Frameworks/angular.md) | Angular Development Eshop
3. ~~UTM virtualization software for windows11 power automate desktop~~
4. ~~rbenv installation~~ [Learn More](../Ruby/rbenv.md) | ROR Interview questions
5. ~~Android Studio~~ [Learn More](./android.md)
6. ~~Bittorrent Web~~
8. ~~Clion~~
7. ~~VLC Media Player~~
8. ~~Android File Transfer (Android Device Access)~~
9. ~~FortiClient VPN (CGI Office Work)~~
10. ~~STS (CGI Office Work)~~
11. ~~Postman (CGI Office Work)~~
12. ~~PgAdmin4 (CGI Office Work)~~
14. ~~Xcode ()~~
15. ~~Zoom (Learnbay classes)~~
16. ~~rbenv~~
17. ~~RubyMine~~
13. ~~Node Installation (MetaGpt, playing with openai, path-finder)~~
    - 🌐 `brew install node`


# 🌟 Experience with Technologies

- Caching: Redis
- Emailing & Messaging: SendGrid, 91msg
- Logging: Sentry
- Customer Engagement: GTM (Google Tag Manager)
- Team Meetings: WhatsApp, Slack, Microsoft Teams
- Project Management: Asana, Jira
- Databases: PostgreSQL, MySQL, PL/SQL
- E-signing: Legality
- Payments: Razorpay
- Chatbot: WhatsApp Integration
- Tools: RubyMine, SpringToolSuite4
- Frameworks: React, Ruby on Rails, Angular, SpringBoot, Next

# ☁️ AWS Account

- AWS Account: parthsharma8421@gmail.com
- Account Alias: 969264495416


# Check Memory Health
diskutil list
sudo smartctl --all /dev/disk0

# SSH Sharing
General > Sharing > Remote Login > ON
ifconfig -a
ipconfig getifaddr en0
clear && tail -f /var/log/system.log | grep sshd

# Disable Google Chrome Incognito Mode
defaults write com.google.chrome IncognitoModeAvailability -integer 1z
defaults read com.google.chrome 

# Disable Trackpad
https://apple.stackexchange.com/a/411589

# Encrypt file/folders using ZIP
zip -er folderName.zip folderName/*