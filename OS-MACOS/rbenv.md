# INSTALLATION

<!-- https://github.com/rbenv/rbenv -->

git clone https://github.com/rbenv/rbenv.git ~/.rbenv

cd ~/.rbenv && src/configure && make -C src

echo 'export PATH="$HOME/.rbenv/bin:$PATH"' >> ~/.zshrc

~/.rbenv/bin/rbenv init

echo 'eval "$(rbenv init - zsh)"' >> ~/.zshrc

<!-- https://github.com/rbenv/ruby-build#readme -->

git clone https://github.com/rbenv/ruby-build.git "$(rbenv root)"/plugins/ruby-build

git -C "$(rbenv root)"/plugins/ruby-build pull

# UPGRADATION
cd ~/.rbenv
git pull

cd ~/.rbenv/plugins/ruby-build
git pull


# Ruby

rbenv install -L

CFLAGS="-Wno-error=implicit-function-declaration" rbenv install 2.6.5

rbenv versions

rbenv local 2.6.5 ```creates .ruby-version file```

gem list --local

## uninstall all custom installed gems
gem uninstall -aIx


[Homepage](./0README.md)