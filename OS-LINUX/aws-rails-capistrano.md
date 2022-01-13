# rails setup with no db
rails new rails_hello_world --skip-active-record --api

## Setting Up Capistrano
```
gem 'capistrano', '~> 3.11'
gem 'capistrano-rails', '~> 1.4'
gem 'capistrano-passenger', '~> 0.2.0'
gem 'capistrano-rbenv', '~> 2.1', '>= 2.1.4'
```
```
bundle
cap install STAGES=production
```


