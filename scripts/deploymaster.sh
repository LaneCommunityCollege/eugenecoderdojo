#!/bin/bash

/usr/bin/sudo /bin/bash $TRAVIS_BUILD_DIR/scripts/drupal-set-permissions.sh --drupal_path=$TRAVIS_BUILD_DIR/public_html --drupal_user=$dojouseruid --httpd_group=$nobodyuid;

#rsync -apqz -e "ssh -p 22123 -o 'StrictHostKeyChecking no' -o 'PasswordAuthentication no' -o 'PubkeyAuthentication yes'" $TRAVIS_BUILD_DIR/public_html/ dojomeister@coderdojo.lanecc.edu:~/www;

cd $TRAVIS_BUILD_DIR ;

ls -al ;