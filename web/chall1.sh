#!/bin/sh

cd .files/chall1/
python3 -m http.server 8001 2>&1 | cat > /dev/null &
echo "Challenge url is http://localhost:8001/"
firefox http://localhost:8001/
