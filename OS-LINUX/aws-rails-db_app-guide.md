# [Using psql to connect to a PostgreSQL DB instance](https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_GettingStarted.CreatingConnecting.PostgreSQL.html#CHAP_GettingStarted.Connecting.PostgreSQL.psql)

sudo apt install -y postgresql postgresql-contrib

service postgresql status

sudo su postgres

psql

psql -h tutorial-db-instance.ctm6hygv8ovv.ap-south-1.rds.amazonaws.com -p 5432 -U tutorial_user -d postgres

# [Setup app](./aws-rails-no_db_app-guide.md#:~:text=Setting%20Up%20Capistrano)


