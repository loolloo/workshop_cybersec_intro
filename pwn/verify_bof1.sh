#!/bin/bash

# How to use:
#   if you have a bash payload (with python -c or echo) you can just call this
#   script instead of ./bof1
#
# Example:
#   if your working payload is
#       echo "aaaaaaaaaa" | ./bof1
#
#   you can verify it with
#       echo "aaaaaaaaaa" | ./verify_bof1.sh
#
#   and if you want to play with the shell you spawned, you can use `cat`
#   to keep it alive this way
#       (echo "aaaaaaaaaa" ; cat) | ./bof1

(cat ; echo 'env | grep VERIFY') | env VERIFY=Challenge_succeeded ./bof1
