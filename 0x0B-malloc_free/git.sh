#!/bin/bash
echo "commit message"
read message
git add .
git commit -m "$message"
git push