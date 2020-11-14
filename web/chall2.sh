#!/bin/sh

cd .files/chall2/
python3 -m http.server 8002 2>&1 | cat > /dev/null &
echo "Challenge url is http://localhost:8002/"
firefox http://localhost:8002/
