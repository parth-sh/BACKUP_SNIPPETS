# Server config for app
```
sudo rm /etc/nginx/sites-enabled/default
sudo nano /etc/nginx/sites-enabled/rails_hello_world

server {
  listen 80;
  listen [::]:80;

  server_name _;
  root /home/ubuntu/rails_hello_world/current/public;

  passenger_enabled on;
  passenger_app_env production;

  location /cable {
    passenger_app_group_name rails_hello_world_websocket;
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
# [rails setup with no db](https://gorails.com/deploy/ubuntu/20.04#:~:text=Setting%20Up%20Capistrano)
rails new rails_hello_world --skip-active-record --skip-sprockets --api 

## Setting Up Capistrano
Add to Gemfile
```
gem 'capistrano'
gem 'capistrano-rails'
gem 'capistrano-passenger'
gem 'capistrano-rbenv'
```

### Run
```
bundle
cap install STAGES=production
```

### We're need to edit the Capfile and add the following lines:
```
require 'capistrano/rails'
require 'capistrano/passenger'
require 'capistrano/rbenv'

set :rbenv_type, :user
set :rbenv_ruby, '2.6.5'
```

### Then we can modify config/deploy.rb to define our application and git repo
```
set :application, "rails_hello_world"
set :repo_url, "git@github.com:tradecred-eng/rails_hello_world.git"

set :deploy_to, "/home/ubuntu/#{fetch :application}"
set :branch,        :main

append :linked_dirs, 'log', 'tmp/pids', 'tmp/cache', 'tmp/sockets', 'vendor/bundle', '.bundle', 'public/system', 'public/uploads'

set :keep_releases, 5
```

### modify config/deploy/production.rb to point to our server's IP
```
server '15.206.170.156', user: 'ubuntu', roles: %w{app db web}
```
---
### SSH into the server one last time and add our environment variables.
```
ssh ubuntu@15.206.170.156
mkdir /home/ubuntu/rails_hello_world
nano /home/ubuntu/rails_hello_world/.rbenv-vars
```
```
# For Postgres
DATABASE_URL=postgresql://deploy:PASSWORD@127.0.0.1/myapp

# For MySQL
DATABASE_URL=mysql2://deploy:$omeFancyPassword123@localhost/myapp

RAILS_MASTER_KEY=ohai
SECRET_KEY_BASE=1234567890

STRIPE_PUBLIC_KEY=x
STRIPE_PRIVATE_KEY=y
# etc...
```

---
## git push and cap production deploy

---
# Errors

## To view the Rails logs
less /home/deploy/myapp/current/log/production.log
## To view the NGINX and Passenger logs
sudo less /var/log/nginx/error.log

```
net-ssh requires the following gems for ed25519 support:
 * ed25519 (>= 1.2, < 2.0)
 * bcrypt_pbkdf (>= 1.0, < 2.0)
See https://github.com/net-ssh/net-ssh/issues/565 for more information
Gem::LoadError : "ed25519 is not part of the bundle. Add it to your Gemfile."

gem 'ed25519'
gem 'bcrypt_pbkdf'
```

```
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.

https://stackoverflow.com/questions/7968656/why-is-a-cap-deploy-giving-permission-denied-publickey
```

```
Your bundle only supports platforms ["-darwin-20"] but your local platform is
x86_64-linux. Add the current platform to the lockfile with `bundle lock
--add-platform x86_64-linux` and try again.

bundle lock --add-platform x86_64-linux
```

```
Don't know how to build task 'assets:precompile' (See the list of available tasks with `rake --tasks`)

```



