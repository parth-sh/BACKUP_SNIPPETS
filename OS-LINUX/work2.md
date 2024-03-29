# Frontend
git clone git@github.com:pod-invest/pod-frontend-web.git
cd pod-frontend-web
git checkout dev-old
npm install --force
npm update axios --save

## Create .env
#NEXT_PUBLIC_API_FRONTEND_URL=http://pod-front-end.s3-website.ap-south-1.amazonaws.com
NEXT_PUBLIC_API_FRONTEND_URL=https://dev.podworld.in
NEXT_PUBLIC_API_HOST=api-dev.podworld.in

NEXT_PUBLIC_API_PROTOCOL=https
NEXT_PUBLIC_BACKEND_URL=https://api-dev.podworld.in
NEXT_PUBLIC_DO_SPACES_ACCESS_KEY_ID=5CTD6OZL3WNSJG2YGSDG
NEXT_PUBLIC_DO_SPACES_SECRET_ACCESS_KEY=dNtH4dodDJYsBAt/dFIgm9lqP1xOkgXoZM1VoM0bZEI
NEXT_PUBLIC_DO_SPACE_BUCKET_NAME=pod-dev
NEXT_PUBLIC_FACEBOOK_PIXEL_ID=1641888729205413
NEXT_PUBLIC_FRONTEND_URL=https://dev.podworld.in
NEXT_PUBLIC_GOOGLE_TAG_MANAGER_ID=GTM-W5H2R4S
NEXT_PUBLIC_IMAGEKIT_URL=https://ik.imagekit.io/q2jhoz54h/pod-dev
NEXT_PUBLIC_RAZORPAY_KEY=rzp_test_87lAUO23rVNWgu
NEXT_PUBLIC_SENTRY_DSN=https://75c631a11dd2451bb7b22f71bd1bd125@o1431457.ingest.sentry.io/4503895815946240
NODE_VERSION=16.18.0
SENTRY_AUTH_TOKEN=fe1f2e78c1dc9ee0b4ba6ac60e76bcda8dc71f87683ea5daec45da0015768a3f
STRAPI_URL=https://
#STRAPI_URL=http://ec2-65-0-12-76.ap-south-1.compute.amazonaws.com:1337
#STRAPI_URL=http://ec2-3-109-208-161.ap-south-1.compute.amazonaws.com:1337

## Deployment

npm run build

PATH=/home/ubuntu/.nvm/versions/node/v16.19.0/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
export PATH="/usr/local/share/npm/bin:/usr/local/bin:/usr/local/sbin:~/bin:$PATH"
pm2 list

pm2 kill

pm2 start npm --name pod-frontend-dev -- start

--------------------------------------------------------------------

### BACKEND ERRORS

egmentation fault (core dumped) nestjs
https://stackoverflow.com/questions/56050531/after-upgrading-node-segmentation-fault-core-dumped-error-shows-up-how-can
npm rebuild

npm run start:dev

pm2 start npm --name pod-backend-dev -- run start:prod