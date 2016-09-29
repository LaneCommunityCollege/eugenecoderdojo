#!/bin/bash
ssh -p 22123 -t -t -o 'StrictHostKeyChecking no' -o 'PasswordAuthentication no' -o 'PubkeyAuthentication yes' $dojousername@$dojohost <<EOF
  cd /home/$dojousername/staging/eugenecoderdojo
  /bin/git fetch origin
  /bin/git reset --hard origin/master
  /bin/bash /home/$dojousername/staging/eugenecoderdojo/scripts/drupal-set-permissions.sh --drupal_path=/home/$dojousername/staging/eugenecoderdojo/public_html --drupal_user=$dojousername
  /bin/rsync --exclude=".git" -avz /home/$dojousername/staging/eugenecoderdojo/public_html/ /home/$dojousername/public_html
  exit
EOF
