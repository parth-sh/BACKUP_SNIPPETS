
---
# Setup Xamp
<br>chmod +x xampp-linux-x64-8.0.13-0-installer.run
<br>sudo ./xampp-linux-x64-8.0.13-0-installer.run

<br>cd /opt/lampp/
<br>sudo ./manager-linux-x64.run

### run apache and mysql server

---
# Setup wordpress

1. unzip wordpress.zip
2. sudo mv wordpress /opt/lampp/htdocs
3. sudo chmod -R 777 wordpress/
### Run wordpress and sql
1. http://localhost/wordpress
2. http://localhost/phpmyadmin

3. CREATE DATABSE wordpress;
4. In wordpress setup
`
Database Name	wordpress
Username	root
Password	_blank
Database Host	localhost
Table Prefix	wp_
`
5. Refer error1
6. setup wp admin `user admin pass admin`

---
# Remove wordpress
<br>rm -rf /opt/lampp/htdocs/wordpress
<br>DROP DATABASE wordpress;



---
### Error1 (Unable to write to wp-config.php file.)
<br>cd /opt/lampp/htdocs/wordpress
<br>nano wp-config.php

---
### Error2 (Unable to delete plugins and install themes)
<br>https://community.apachefriends.org/f/viewtopic.php?t=42011
<br>cd /opt/lampp 
<br>sudo ./lampp security (you must get ftp password in options here `host daemon pass xampp`)
<br>cd /opt/lampp/htdoc
<br>sudo chmod -R 777 wordpress/

---
### Error 3 (white screen of death cause of activating a plugin)
https://wordpress.org/support/article/faq-troubleshooting/
1. In the table wp_options, under the option_name column (field) find the active_plugins row
2. Change the option_value field to: a:0:{}