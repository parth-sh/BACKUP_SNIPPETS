# Init rails project
gem install rails

rails -h

rails new airbnb-clone -T -d postgresql --css tailwind
rails new backend-api -T -d postgresql --api
```-T, [--skip-test-unit], [--no-skip-test-unit]          # Skip Test::Unit files```

rake db:migrate

rails server

# List all the gems I have installed.
gem list --local

# Uninstall all custom installed gems
gem uninstall -aIx
