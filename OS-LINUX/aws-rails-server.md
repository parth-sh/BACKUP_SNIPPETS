# AWS setup
[Create an EC2 instance and install a web server](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateWebServer.html)

[Create a VPC with private and public subnets](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateVPC.html#CHAP_Tutorials.WebServerDB.CreateVPC.VPCAndSubnets)

---
# AWS ubuntu instance

ssh -i Desktop/tom-riddle.pem ubuntu@13.233.179.9

sudo apt update && sudo apt upgrade -y && sudo apt install -y curl zlib1g-dev build-essential libssl-dev libreadline-dev libyaml-dev libsqlite3-dev sqlite3 libxml2-dev libxslt1-dev libcurl4-openssl-dev software-properties-common libffi-dev dirmngr gnupg apt-transport-https ca-certificates redis-server redis-tools nodejs yarn && sudo apt autoremove -y

---
# Nginx installation
```
sudo apt install -y nginx
sudo systemctl start nginx
sudo systemctl enable nginx
```

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

sudo service nginx restart
```

# [Deployment](https://gorails.com/deploy/ubuntu/20.04#nginx)
```
sudo nano /etc/nginx/conf.d/mod-http-passenger.conf
passenger_ruby /home/ubuntu/.rbenv/shims/ruby;

sudo service nginx restart
```
http://13.233.179.9/
```
sudo rm /etc/nginx/sites-enabled/default
sudo nano /etc/nginx/sites-enabled/myapp

server {
  listen 80;
  listen [::]:80;

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
[rails locla setup](./aws-rails-capistrano.md)

---
[rbenv installation](./rbenv.md)

### Disable generate local documentation for each gem
echo "gem: --no-document" > ~/.gemrc

gem install bundler
