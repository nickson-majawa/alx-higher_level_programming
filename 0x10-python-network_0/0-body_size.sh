#!/bin/bash
# Bash script that takes in a URL, sends  request to that URL, and displays size of the body of the response
curl -s --head "$1" | grep "Content-Length" | awk '{print $2}'
