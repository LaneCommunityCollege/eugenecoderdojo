#!/bin/bash

which sudo;

which bash;

which sh;

#sudo bash $TRAVIS_BUILD_DIR/scripts/drupal-fix-perms.sh --drupal_path=$TRAVIS_BUILD_DIR/public_html --drupal_user=$dojouserid --httpd_group=$nobodyuid
#rsync -apqz -e "ssh -p 22123 -o 'StrictHostKeyChecking no' -o 'PasswordAuthentication no' -o 'PubkeyAuthentication yes'" $TRAVIS_BUILD_DIR/public_html/ dojomeister@coderdojo.lanecc.edu:~/www