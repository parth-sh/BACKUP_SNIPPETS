# AWS setup
[Create an EC2 instance and install a web server](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateWebServer.html)

[Create a VPC with private and public subnets](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Tutorials.WebServerDB.CreateVPC.html#CHAP_Tutorials.WebServerDB.CreateVPC.VPCAndSubnets)


# AWS ubuntu instance

ssh -i Desktop/tom-riddle.pem ubuntu@52.66.200.2

sudo apt update && sudo apt upgrade && sudo apt install -y build-essential libssl-dev libreadline-dev zlib1g-dev apache2

---
# Apache
```
sudo systemctl start apache2
http://52.66.200.2/
sudo systemctl enable apache2
```

---
# Rails
[rbenv installation](./rbenv.md)

### Disable generate local documentation for each gem
echo "gem: --no-document" > ~/.gemrc

gem install bundler
