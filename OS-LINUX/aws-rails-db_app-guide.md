# [Using psql to connect to a PostgreSQL DB instance](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_GettingStarted.CreatingConnecting.PostgreSQL.html#CHAP_GettingStarted.Connecting.PostgreSQL.psql)

sudo apt install -y postgresql postgresql-contrib

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


