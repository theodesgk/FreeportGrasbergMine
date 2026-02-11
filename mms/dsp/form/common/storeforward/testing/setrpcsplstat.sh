#!/bin/sh
########################################################
#  DISPATCH Utility System Module
# Copyright (c) Modular Mining Systems, 1982-1999
#               All Rights Reserved
#  $RCSfile: setrpcsplstat.sh,v $
# $Revision: 1.1 $
#   $Author: zambetis $
#     $Date: 2008/07/09 21:46:17 $
#    $State: Exp $
#   Purpose: change the STATUS field of rows in RPCSPL
#            table
#
# setrpcsplstat <status from> <status to>
#
#   status from = change rows with this STATUS
#
#   status to   = change rows to this status
#
########################################################

# add -s to the flags below to output raw text without the boxes drawn
mysqlflags="-N -s -pprism -uprism "
mysqlexe=mysql

$mysqlexe -e "UPDATE RPCSPL SET STATUS='$2' WHERE STATUS='$1'" $mysqlflags prism
