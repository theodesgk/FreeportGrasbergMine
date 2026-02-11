..
.. DISPATCH Utility System Module
.. Copyright (c) Modular Mining Systems, 1982-1995
..               All Rights Reserved
..  $RCSfile: client_dbini.frm,v $
.. $Revision: 1.3 $
..   $Author: cayley $
..     $Date: 2011/05/12 04:42:20 $
..    $State: Exp $
..
.. This expression is for definind new record type that must be declared before
.. db_pit
.def MAXNODES   1500
.def MAXQUALIF  232
.expr CreateClientRecs() (
      return(0)
      )
..
.. This expression is for adding fields to existing databases such as db_pit and db_shift
.expr CreateClientExtensions() (
      return(0)
      )
..
.. This expression is for binding any new fields or records
.expr BindClientSymbols(fd) (
      return(0)
      )
