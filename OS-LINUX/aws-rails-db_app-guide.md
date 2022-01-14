# [Using psql to connect to a PostgreSQL DB instance](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_GettingStarted.CreatingConnecting.PostgreSQL.html#CHAP_GettingStarted.Connecting.PostgreSQL.psql)

sudo apt install -y libpq-dev postgresql postgresql-contrib

service postgresql status

sudo su postgres

psql

psql -h tutorial-db-instance.ctm6hygv8ovv.ap-south-1.rds.amazonaws.com -p 5432 -U tutorial_user -d postgres

---
rails new agreement_service --api --database=postgresql
# [Setup Capistrano](./aws-rails-no_db_app-guide.md#:~:text=Setting%20Up%20Capistrano)

---
# [Production DB config](https://openclassrooms.com/en/courses/4567631-deploy-rails-applications/4794331-use-postgres-for-your-production-database)
```
Configure your production database settings in  config/database.yml  like this:

production:
    <<: *default
    adapter: postgresql
    encoding: unicode
    database: agreement_service_production
    username: tutorial_user
    password: 0123456789
    host: tutorial-db-instance.ctm6hygv8ovv.ap-south-1.rds.amazonaws.com
    port: 5432
    pool: 100
```

<!-- ---
### SSH into the server one last time and add our environment variables.
```
ssh -i Desktop/tom-riddle.pem ubuntu@1.2.3.4
mkdir /home/ubuntu/myapp
nano /home/ubuntu/myapp/.rbenv-vars
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
``` -->


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
An error occurred while installing pg (1.2.3), and Bundler cannot continue.

https://stackoverflow.com/questions/52339221/rails-gem-error-while-installing-pg-1-1-3-and-bundler-cannot-continue/56756396
sudo apt install -y libpq-dev
```

```
Don't know how to build task 'assets:precompile' (See the list of available tasks with `rake --tasks`)

https://stackoverflow.com/questions/7205964/how-to-build-task-assetsprecompile
require 'sprockets/railtie'

Sprockets::Railtie::ManifestNeededError: Expected to find a manifest file in `app/assets/config/manifest.js`
But did not, please create this file and use it to link any assets that need
to be rendered by your app:

Example:
  //= link_tree ../images
  //= link_directory ../javascripts .js
  //= link_directory ../stylesheets .css
and restart your server
```

```
@��'��'esponse received from application

sudo less /var/log/nginx/error.log

*** Exception ArgumentError in Rack application object (Missing `secret_key_base` for 'production' environment, set this string with `rails credentials:edit`) (process 18743, thread 0x000055e74f59fce0(Worker 1)):

EDITOR="mate --wait" bin/rails credentials:edit
# Remove master key from .gitignore
```

```
ActionController::RoutingError (No route matches [GET] "/"):

https://stackoverflow.com/questions/23194386/actioncontrollerroutingerror-no-route-matches-get
```

```
The application encountered the following error: undefined method `root' for main:Object (NoMethodError)

https://gorails.com/blog/how-to-add-a-root-route-to-your-rails-app
```