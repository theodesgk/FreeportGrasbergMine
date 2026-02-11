#!/bin/sh
#/*
# * * * * * * * * * * * * * * * * * * *
# *  DISPATCH Real-Time Firmware Module
# * Copyright (c) Modular Mining Systems, 1982-2011
# *               All Rights Reserved
# *  $RCSfile: ImportLang.sh,v $
# * $Revision: 1.2 $
# *   $Author: dcitron $
# *     $Date: 2013/02/19 23:36:46 $
# *    $State: Exp $
# * * * * * * * * * * * * * * * * * * *
# */

if [ $# -ne 2 ]; then
	echo "Usage: `basename $0` {language} {input file}"
	exit 65
fi
if [ ! -f $2 ]; then
	echo "Input file not found"
	exit
fi
export LC_ALL=POSIX
export LC_COLLATE=POSIX
exec < $2
while read -r line
do
	line=$(echo "$line" | sed 's|\r||g')
	app=$(echo "$line" | cut -f 1)
	file=$(echo "$line" | cut -f 2)
	var=$(echo "$line" | cut -f 3)
	val=$(echo "$line" | cut -f 4)
	if [ "$file" != "Macro.cfg" ]; then
		val=$(echo "$val" | sed 's|\([^\\]\) |\1\\ |g')
	fi
	val=$(echo "$val" | sed 's|\\|\\\\|g')
	target_dir="$app/$1"
	if [ ! -d $target_dir ]; then
		mkdir $target_dir
	fi
	target_file="$target_dir/$file"
	if [ ! -f $target_file ]; then
		cp "$app/English/$file" $target_file
	fi
	sed -i -e "s|\($var[ \t]\+\).\+$|\1$val|g" $target_file
done
