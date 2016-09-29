#!/bin/bash
# no longer tries to use chown, or check that the drupal path is a valid drupal instance.
# Help menu
print_help() {
cat <<-HELP
This script is used to fix permissions of a Drupal installation
you need to provide the following arguments:

  1) Path to your Drupal installation.
  2) Username of the user that you want to give files/directories ownership.
  3) HTTPD group name (defaults to www-data for Apache).

This is a modified version of the script from https://www.drupal.org/node/244924 It does not require sudo because
it does not use chown to set the httpd_user group on any files. Thus, the --httpd_group flag is always set to the value
of the --drupal_user flag.

Directories are set to 755.
Files are set to 644.

Usage: (sudo) bash ${0##*/} --drupal_path=PATH --drupal_user=USER --httpd_group=GROUP
Example: (sudo) bash ${0##*/} --drupal_path=/usr/local/apache2/htdocs --drupal_user=john --httpd_group=www-data
HELP
exit 0
}

drupal_path=${1%/}
drupal_user=${2}

# Parse Command Line Arguments
while [ "$#" -gt 0 ]; do
  case "$1" in
    --drupal_path=*)
        drupal_path="${1#*=}"
        ;;
    --drupal_user=*)
        drupal_user="${1#*=}"
        httpd_group="${1#*=}"
        ;;
    --help) print_help;;
    *)
      printf "***********************************************************\n"
      printf "* Error: Invalid argument, run --help for valid arguments. *\n"
      printf "***********************************************************\n"
      exit 1
  esac
  shift
done

cd $drupal_path

printf "Changing permissions of all directories inside "${drupal_path}" to "rwxr-xr-x"...\n"
find . -type d | grep -v -E "(default\/files|default\/private)" | awk -F":" '{print $1}' | xargs chmod u=rwx,g=rx,o=rx

printf "Changing permissions of all files inside "${drupal_path}" to "rw-r--r--"...\n"
find . -type f | grep -v -E "(default\/files|default\/private)" | awk -F":" '{print $1}' | xargs chmod u=rw,g=r,o=r

echo "Done setting proper permissions on files and directories"
