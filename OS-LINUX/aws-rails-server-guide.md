# AWS setup
[Create an EC2 instance and install a web server](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateWebServer.html)

[Create a VPC with private and public subnets](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateVPC.html#CHAP_Tutorials.WebServerDB.CreateVPC.VPCAndSubnets)

---
# [Deployment](https://gorails.com/deploy/ubuntu/20.04#nginx)
## AWS ubuntu instance
ssh -i Desktop/tom-riddle.pem ubuntu@15.206.170.156

sudo apt update && sudo apt upgrade -y && sudo apt install -y curl zlib1g-dev build-essential libssl-dev libreadline-dev libyaml-dev libsqlite3-dev sqlite3 libxml2-dev libxslt1-dev libcurl4-openssl-dev software-properties-common libffi-dev dirmngr gnupg apt-transport-https ca-certificates redis-server redis-tools nodejs yarn && sudo apt autoremove -y

---
[rbenv installation](./rbenv.md)

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

---
# [rails locla setup](./aws-rails-local-guide.md)

---
# Errors
cat /var/log/nginx/error.log
