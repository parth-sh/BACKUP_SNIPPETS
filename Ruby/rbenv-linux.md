# Rbenv server setup

```
git clone https://github.com/rbenv/rbenv.git ~/.rbenv
cd ~/.rbenv && src/configure && make -C src && cd ~
echo 'export PATH="$HOME/.rbenv/bin:$PATH"' >> ~/.bash_profile
~/.rbenv/bin/rbenv init
echo 'eval "$(rbenv init - bash)"' >> ~/.bash_profile
```

# Reboot

## rbenv-doctor
curl -fsSL https://github.com/rbenv/rbenv-installer/raw/main/bin/rbenv-doctor | bash

## rbenv-build as a standalone plugin
mkdir -p "$(rbenv root)"/plugins

git clone https://github.com/rbenv/ruby-build.git "$(rbenv root)"/plugins/ruby-build && cd ~

## ruby installations
rbenv install --list-all

rbenv install 2.6.5 && rbenv global 2.6.5 && rbenv versions

## Upgrading
cd ~/.rbenv && git pull && cd ~/.rbenv/plugins/ruby-build && git pull && cd ~
