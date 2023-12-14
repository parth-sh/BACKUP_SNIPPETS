https://wiki.postgresql.org/wiki/Homebrew


brew update && brew upgrade && brew cleanup

brew search postgres

# Postgres specifically because of m1 shit
brew install postgresql

brew services start postgresql
brew services stop postgresql


```
sudo su postgres
psql

OR

psql postgres

psql -h core-api-prod-rds.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U tradecred -d postgres
Password: Tradecred2019

psql -h idfc-api-prod-read-rds.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U idfctradecred -d postgres
IdfcTradecred2021

psql -h dbs-api-prod-rds.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U dbstradecred -d postgres
DbsTradecred2021

psql -h new-staging-icic-copy.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U tradecred -d postgres
Password: Tradecred2019

psql -h new-staging-idfc-copy.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U idfctradecred -d postgres
IdfcTradecred2021
```


---
# Errors
1. psql: error: could not connect to server: No such file or directory
        Is the server running locally and accepting
        connections on Unix domain socket "/tmp/.s.PGSQL.5432"?

rm /opt/homebrew/var/postgresql@13/postmaster.pid

brew services restart postgresql@13


2. create symlink for pg gem (Exceptions with m1)
I have installed postgres@13 on m1 cause of architecture issues
because of psycopg needing a lib at exact location : (Library not loaded: /opt/homebrew/opt/postgresql/lib/libpq.5.dylib)
needed to brew install postgresql

brew install postgresql


---
# Extras 
## pg_dump by pg_restore
pg_restore --verbose --clean --no-acl --no-owner -d backend_api_development ~/Desktop/prod-loc.backup
