#!/bin/bash
ssh -p 22123 -t -t -o 'StrictHostKeyChecking no' -o 'PasswordAuthentication no' -o 'PubkeyAuthentication yes' $dojousername@$dojohost <<EOF
  cd /home/$dojousername/staging/eugenecoderdojo
  /bin/git fetch origin
  /bin/git reset --hard origin/master
  /bin/bash scripts/drupal-set-permissions.sh --drupal_path=~/staging/eugenecoderdojo/public_html --drupal_user=$dojousername
  /bin/rsync --exclude=".git" -avz ~/staging/eugenecoderdojo/public_html/ ~/public_html
  exit
EOF
