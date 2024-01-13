<!-- https://github.com/rbenv/rbenv -->

brew install rbenv ruby-build

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