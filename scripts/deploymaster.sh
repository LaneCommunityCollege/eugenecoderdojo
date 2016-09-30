#!/bin/bash
ssh -p 22123 -t -t -o 'StrictHostKeyChecking no' -o 'PasswordAuthentication no' -o 'PubkeyAuthentication yes' $dojousername@$dojohost <<EOF
  cd /home/$dojousername/eugeneregioncoderdojo.org
  /bin/git fetch origin
  /bin/git reset --hard origin/master
  exit
EOF
