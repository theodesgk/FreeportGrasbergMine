/* Release file to check versions between mobile and central */
#ifdef __STDC__
#	define RELEASE_ROOT(rev) rev ## -beta
#else
#	define RELEASE_ROOT(rev) rev/**/-beta
#endif
#define RELEASE_MAJOR	v5.7
#define RELEASE_MINOR	0
#define RELEASE_BOOT	0
#define RELEASE_BOOT_CHECK	#arch(v5.7.0)
#define RELEASE_DATE	20-Apr-2020,07:09:34
#define RELEASE	RELEASE_ROOT(RELEASE_MAJOR.RELEASE_MINOR)
