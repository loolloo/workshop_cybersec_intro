#!/bin/sh

cd .files/chall3/
php -S localhost:8003 2>&1 | cat > /dev/null &
echo "Challenge url is http://localhost:8003/"
firefox http://localhost:8003/
