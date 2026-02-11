#!/bin/sh
#*
#* * * * * * * * * * * * * * * * * * *
#*  DISPATCH Real-Time Firmware Module
#* Copyright (c) Modular Mining Systems, 1982-2011
#*               All Rights Reserved
#*  $RCSfile: ExportLang.sh,v $
#* $Revision: 1.2 $
#*   $Author: dcitron $
#*     $Date: 2013/02/19 23:36:46 $
#*    $State: Exp $
#* * * * * * * * * * * * * * * * * * *
#*/

if [ $# -ne 2 ]; then
	echo "Usage: `basename $0` {language} {output file}"
	exit 65
fi
if [ -f $2 ]; then
	rm $2
fi
export LC_ALL=POSIX
export LC_COLLATE=POSIX
find */$1/*.cfg | while read filepath
do
	file=$(basename $filepath)
	app=$(dirname $(dirname $filepath))
	entries=$(get_entries -v APP=$app FILE=$file $filepath)
	echo "$entries" >> $2
done
