#!/usr/bin/bash

sudo apt install git

ls -al ~/.ssh
ssh-keygen -t ed25519 -C "parth@tradecred.com"
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519

sudo apt install xclip
xclip -selection clipboard < ~/.ssh/id_ed25519.pub
ssh -T git@github.com

# sudo su   #syatem wide access
# first install pip3 or upgrade if it is pre installed
# apt upgrade python3-pip
# pip3 install --upgrade pip
# pip3 install --upgrade virtualenv

# virtualenv enviroment1
# source enviroment1/bin/activate
# pip freeze > requirements.txt
# pip install -r requirements.txt
# deactivate
# virtualenv --system-site-packages enviroment2