https://wiki.postgresql.org/wiki/Homebrew


brew update && brew upgrade && brew cleanup

brew search postgres

## postgres@13 specifically because of m1 shit
brew install postgresql@13



```
==> Caveats
Previous versions of postgresql@13 used the same data directory as
the postgresql formula. This will cause a conflict if you
try to use both at the same time.

You can migrate to a versioned data directory by running:
  mv -v "/opt/homebrew/var/postgres" "/opt/homebrew/var/postgresql@13"

(Make sure PostgreSQL is stopped before executing this command)

This formula has created a default database cluster with:
  initdb --locale=C -E UTF-8 /opt/homebrew/var/postgresql@13
For more details, read:
  https://www.postgresql.org/docs/13/app-initdb.html

postgresql@13 is keg-only, which means it was not symlinked into /opt/homebrew,
because this is an alternate version of another formula.

If you need to have postgresql@13 first in your PATH, run:
  echo 'export PATH="/opt/homebrew/opt/postgresql@13/bin:$PATH"' >> ~/.zshrc

For compilers to find postgresql@13 you may need to set:
  export LDFLAGS="-L/opt/homebrew/opt/postgresql@13/lib"
  export CPPFLAGS="-I/opt/homebrew/opt/postgresql@13/include"

For pkg-config to find postgresql@13 you may need to set:
  export PKG_CONFIG_PATH="/opt/homebrew/opt/postgresql@13/lib/pkgconfig"


To restart postgresql@13 after an upgrade:
  brew services restart postgresql@13
Or, if you don't want/need a background service you can just run:
  /opt/homebrew/opt/postgresql@13/bin/postgres -D /opt/homebrew/var/postgresql@13
==> Summary
🍺  /opt/homebrew/Cellar/postgresql@13/13.5_1: 3,233 files, 42.3MB
==> Running `brew cleanup postgresql@13`...
Disable this behaviour by setting HOMEBREW_NO_INSTALL_CLEANUP.
Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
```






nano ~/.zshrc
#postgres@13 config added by me
export PATH=$PATH:/opt/homebrew/Cellar/postgresql@13/13.5_1/bin
export PATH=$PATH:/opt/homebrew/Cellar/postgresql@13/13.5_1/lib
export PATH=$PATH:/opt/homebrew/Cellar/postgresql@13/13.5_1/include

source ~/.zshrc

brew services stop postgresql@13
brew services start postgresql@13



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

psql -h staging-icici-copy.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U tradecred -d postgres

psql -h icici-staging.cwz0mfsk8zht.ap-south-1.rds.amazonaws.com -p 5432 -U tradecred -d postgres
Password: Tradecred2019
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
