#!/bin/bash

dir=$1
if [ -z $dir ]; then
    echo "[e] Please input directory name"
    exit
fi

if [ ! -d $dir ]; then
    echo "[e] Directory $dir does not exist. Please double check."
    exit
fi

outfile=yaml.html
if [ -f $outfile ]; then
    rm $outfile
fi
touch $outfile

cat <<EOT >> $outfile
<!DOCTYPE html>
<html>
  <head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <title>datahtml</title>
  </head>
  <body>
  <h3>Links to YAML data files</h3>

EOT


files=`ls $dir`
for file in $files; do
    isyaml=`echo $file | grep -c "yaml"`
    if [ $isyaml -eq 0 ]; then
	continue
    fi
    if [ "$file" == "submission.yaml" ]; then
	continue
    fi
    echo "[i]Adding $file"

    echo "  <p><a href=\"https://drupal.star.bnl.gov/STAR/files/starpublications/$dir/$file\" target=\"_blank\"> $file</a> </p>" >> $outfile
done

cat <<EOT >> $outfile

  </body>
</html>
EOT

mv $outfile $dir/.

echo "[i] Done"
echo ""
