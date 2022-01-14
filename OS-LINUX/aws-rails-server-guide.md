# AWS instance
[Create a VPC with private and public subnets](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateVPC.html#CHAP_Tutorials.WebServerDB.CreateVPC.VPCAndSubnets)

[Create a DB instance](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateDBInstance.html)

[Create an EC2 instance and install a web server](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateWebServer.html)

---
# [Deployment](https://gorails.com/deploy/ubuntu/20.04#:~:text=edit%20config%20files.-,Installing%20Ruby,-We%27re%20going%20to)
ssh -i Desktop/tom-riddle.pem ubuntu@1.2.3.4

sudo apt update && sudo apt upgrade -y && sudo apt install -y curl zlib1g-dev build-essential libssl-dev libreadline-dev libyaml-dev libsqlite3-dev sqlite3 libxml2-dev libxslt1-dev libcurl4-openssl-dev software-properties-common libffi-dev dirmngr gnupg apt-transport-https ca-certificates redis-server redis-tools nodejs yarn && sudo apt autoremove -y

---
# [rbenv installation](./rbenv.md)

### Disable generate local documentation for each gem
echo "gem: --no-document" > ~/.gemrc

gem install bundler

---
# Nginx installation
```
sudo apt install -y nginx
sudo systemctl start nginx
```

---
# [Passenger packages](https://www.phusionpassenger.com/library/install/nginx/install/oss/bionic/#step-1:-install-passenger-packages)
```
sudo apt-get install -y dirmngr gnupg
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 561F9B9CAC40B2F7
sudo apt-get install -y apt-transport-https ca-certificates

sudo sh -c 'echo deb https://oss-binaries.phusionpassenger.com/apt/passenger focal main > /etc/apt/sources.list.d/passenger.list'
sudo apt-get update

sudo apt-get install -y libnginx-mod-http-passenger
```
```
if [ ! -f /etc/nginx/modules-enabled/50-mod-http-passenger.conf ]; then sudo ln -s /usr/share/nginx/modules-available/mod-http-passenger.load /etc/nginx/modules-enabled/50-mod-http-passenger.conf ; fi

sudo ls /etc/nginx/conf.d/mod-http-passenger.conf
```
```
sudo nano /etc/nginx/conf.d/mod-http-passenger.conf
passenger_ruby /home/ubuntu/.rbenv/shims/ruby;

sudo service nginx restart
```
---
# HTTPS support

https://serverfault.com/questions/10854/nginx-https-serving-with-same-config-as-http

https://stackoverflow.com/questions/56668320/no-ssl-certificate-is-defined-for-the-listen-ssl-directive

https://linuxize.com/post/creating-a-self-signed-ssl-certificate/

<!-- openssl req -newkey rsa:4096 \
            -x509 \
            -sha256 \
            -days 3650 \
            -nodes \
            -out cert.pem \
            -keyout key.pem \
            -subj "/C=SI/ST=Ljubljana/L=Ljubljana/O=Security/OU=IT Department/CN=www.tradecred.com"
 -->

https://github.com/pirple/The-NodeJS-Master-Class/blob/master/Section%203/Adding%20HTTPS%20support/https/keyGeneration.txt
openssl req -newkey rsa:2048 -new -nodes -x509 -days 3650 -keyout key.pem -out cert.pem

---
# Server config for app(with https support)
```
sudo rm /etc/nginx/sites-enabled/default
sudo nano /etc/nginx/sites-enabled/myapp

server {
  listen 80;
  listen [::]:80;
  listen 443 ssl;
  ssl_certificate /home/ubuntu/cert.pem;
  ssl_certificate_key /home/ubuntu/key.pem;
  listen [::]:443 ssl;
  ssl_certificate /home/ubuntu/cert.pem;
  ssl_certificate_key /home/ubuntu/key.pem;

  server_name _;
  root /home/ubuntu/myapp/current/public;

  passenger_enabled on;
  passenger_app_env production;

  location /cable {
    passenger_app_group_name myapp_websocket;
    passenger_force_max_concurrent_requests_per_process 0;
  }

  # Allow uploads up to 100MB in size
  client_max_body_size 100m;

  location ~ ^/(assets|packs) {
    expires max;
    gzip_static on;
  }
}

sudo service nginx reload
```

---
# [Setup rails app with database](./aws-rails-db_app-guide.md)
# [Setup rails app without database and without assets api only](./aws-rails-no_db_app-guide.md)

---
# Errors
cat /var/log/nginx/error.log
