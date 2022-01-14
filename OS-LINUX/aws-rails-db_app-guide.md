# Server config for app(with https support)
```
sudo rm /etc/nginx/sites-enabled/default
sudo nano /etc/nginx/sites-enabled/myapp

server {
  listen 80;
  listen [::]:80;
  listen 443 ssl;
  ssl_certificate /home/ubuntu/cert.pem;
  ssl_certificate_key /home/ubuntu/key.pem;
  listen [::]:443 ssl;
  ssl_certificate /home/ubuntu/cert.pem;
  ssl_certificate_key /home/ubuntu/key.pem;

  server_name _;
  root /home/ubuntu/myapp/current/public;

  passenger_enabled on;
  passenger_app_env production;

  location /cable {
    passenger_app_group_name myapp_websocket;
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

