# [rails setup with no db](https://gorails.com/deploy/ubuntu/20.04#:~:text=Setting%20Up%20Capistrano)
rails new agreement_service --skip-active-record --api 

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
set :application, "myapp"
set :repo_url, "git@github.com:tradecred-eng/agreement_service.git"

set :deploy_to, "/home/ubuntu/#{fetch :application}"
set :branch,        :main

append :linked_dirs, 'log', 'tmp/pids', 'tmp/cache', 'tmp/sockets', 'vendor/bundle', '.bundle', 'public/system', 'public/uploads'

set :keep_releases, 1
```

### modify config/deploy/production.rb to point to our server's IP
```
server '1.2.3.4', user: 'ubuntu', roles: %w{app db web}
```

---
# [If setting db move back to app with db guide](./aws-rails-db_app-guide.md)

---
## git push and cap production deploy

---
# Errors

## To view the Rails logs
sudo tail -10 /home/ubuntu/myapp/current/log/production.log
## To view the NGINX and Passenger logs
sudo less /var/log/nginx/error.log
sudo tail -15 /var/log/nginx/error.log

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
ssh-add -D
ssh-agent
ssh-add
ssh-add ~/Desktop/tom-riddle.pem
```

```
Your bundle only supports platforms ["-darwin-20"] but your local platform is
x86_64-linux. Add the current platform to the lockfile with `bundle lock
--add-platform x86_64-linux` and try again.

bundle lock --add-platform x86_64-linux
```

```
Don't know how to build task 'assets:precompile' (See the list of available tasks with `rake --tasks`)

https://stackoverflow.com/questions/17116173/capistrano-disable-dbmigrate
https://capistranorb.com/documentation/advanced-features/overriding-capistrano-tasks/

https://stackoverflow.com/questions/11492625/conditionally-disable-asset-precompile-in-capistrano
https://gist.github.com/xdite/3072362

https://makandracards.com/makandra/51467-how-to-skip-sprockets-asset-compile-during-capistrano-deployment

namespace :deploy do
    namespace :assets do
        Rake::Task['precompile'].clear_actions
        task :precompile do
            puts "Skipping asset pre-compilation because there were no asset changes"
        end
    end
end
```

```
Rails assets manifest file not found. (Capistrano::FileNotFound)

https://stackoverflow.com/questions/47914115/rails-manifest-file-not-found-deploying-with-capistrano
Rake::Task["deploy:assets:backup_manifest"].clear_actions
```

```
Don't know how to build task 'db:migrate' (See the list of available tasks with `rake --tasks`)

https://stackoverflow.com/questions/17116173/capistrano-disable-dbmigrate
Rake::Task["deploy:migrate"].clear_actions
```

```
@��'��'esponse received from application

sudo less /var/log/nginx/error.log

*** Exception ArgumentError in Rack application object (Missing `secret_key_base` for 'production' environment, set this string with `rails credentials:edit`) (process 18743, thread 0x000055e74f59fce0(Worker 1)):

EDITOR="mate --wait" bin/rails credentials:edit
# Ignore master key for decrypting credentials and more.
```

```
ActionController::RoutingError (No route matches [GET] "/"):

https://stackoverflow.com/questions/23194386/actioncontrollerroutingerror-no-route-matches-get
```

```
The application encountered the following error: undefined method `root' for main:Object (NoMethodError)

https://gorails.com/blog/how-to-add-a-root-route-to-your-rails-app
```