#ifndef _HOST_STD_H_
#define _HOST_STD_H_

#ifndef ARGZ_INTERNAL_IMPL
#define ARGZ_INTERNAL_IMPL   1
#endif

#ifndef WINAPI_UTF16_DEFAULT
#define WINAPI_UTF16_DEFAULT 1
#endif

/******************************************************/
/* the midipix framework uses 32-bit wide characters. */
/******************************************************/

#include <features.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>
#include <time.h>

#include <sys/ioctl.h>
#include <sys/ttydefaults.h>

#include <u16ports/u16ports.h>

#ifndef MAXLONG
#define MAXLONG (0x7fffffff)
#endif

#ifndef O_BINARY
#define O_BINARY 0
#endif

#ifndef CDEL
#define CDEL CERASE
#endif

#ifndef NULL_FILE_POSITION
#define NULL_FILE_POSITION {{0}}
#endif

#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif

#define    wcslen              u16_wcslen
#define    wcsstr              u16_wcsstr
#define    wcsdup              u16_wcsdup
#define    wcscpy              u16_wcscpy
#define    wcsncpy             u16_wcsncpy
#define    wcschr              u16_wcschr
#define    wcsrchr             u16_wcsrchr
#define    wcscat              u16_wcscat
#define    wcscmp              u16_wcscmp
#define    wcsncmp             u16_wcsncmp
#define    wcsspn              u16_wcsspn
#define    wcscspn             u16_wcscspn
#define    mbstowcs            u16_mbstowcs
#define    mbrtowc             u16_mbrtowc

#include "framework.h"
#include "charset.h"
#include "literals.h"

#include "../../std.h"
#include "../../charset.h"

#endif
