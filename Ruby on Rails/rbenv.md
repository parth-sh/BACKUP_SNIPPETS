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

# MACOS Installation

brew install rbenv ruby-build

# UPGRADATION
cd ~/.rbenv
git pull

cd ~/.rbenv/plugins/ruby-build
git pull


# Ruby

## list latest stable versions:
rbenv install -l

## list all local versions:
rbenv install -L

## install a Ruby version:
rbenv install 3.1.2

CFLAGS="-Wno-error=implicit-function-declaration" rbenv install 2.6.5

rbenv versions

# Local application-specific Ruby version
rbenv local 2.6.5 ```creates .ruby-version file```

rbenv local --unset

[Homepage](./0README.md)