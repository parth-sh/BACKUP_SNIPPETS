
---
# Setup Xamp
### run apache and mysql server

---
# Setup wordpress

1. unzip wordpress.zip
2. move wordpress to C:\xampp\htdocs\wordpress

1. http://localhost/wordpress
2. http://localhost/phpmyadmin

3. CREATE DATABSE wordpress;
4. In wordpress setup

| key | value |
| --- | ----------- |
| Database Name |	wordpress |
| Username |	root |
| Password |  |
| Database Host | localhost |
| Table Prefix | wp_ |

5. setup wp admin `user admin pass admin`

---
# Remove wordpress
<br>rm -rf C:\xampp\htdocs\wordpress
<br>DROP DATABASE wordpress;
