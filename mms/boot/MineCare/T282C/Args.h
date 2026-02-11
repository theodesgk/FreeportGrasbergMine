#assert args(OK)
#assert args(OK)
#ifdef CLEANINTERFACES
	pfs unaccess:lib
	pfs unaccess:etc
	pfs purge:lib
	pfs purge:etc
	pfs pack
#endif
