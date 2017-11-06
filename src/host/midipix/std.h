#ifndef _HOST_STD_H_
#define _HOST_STD_H_

#ifndef ARGZ_INTERNAL_IMPL
#define ARGZ_INTERNAL_IMPL   1
#endif

#ifndef WINAPI_UTF16_DEFAULT
#define WINAPI_UTF16_DEFAULT 1
#endif

/*****************************************************************/
/* mintty was (and still is) written for 16-bit wide characters. */
/* for as long as this remains the case, providing a surrogate   */
/* std.h for portable targets seems to be the least painful      */
/* path to a successful port.                                    */
/*****************************************************************/

#include <features.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>
#include <time.h>

#include <sys/ioctl.h>
#include <sys/ttydefaults.h>

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

size_t     wcslen_u16         (const uint16_t *);
uint16_t * wcsstr_u16         (const uint16_t *, const uint16_t *);
uint16_t * wcsdup_u16         (const uint16_t *);
uint16_t * wcscpy_u16         (uint16_t *, const uint16_t *);
uint16_t * wcsncpy_u16        (uint16_t *, const uint16_t *, size_t);
uint16_t * wcschr_u16         (const uint16_t *, uint32_t);
uint16_t * wcsrchr_u16        (const uint16_t *, uint32_t);
uint16_t * wcscat_u16         (uint16_t *, const uint16_t *);
int        wcscmp_u16         (const uint16_t *, const uint16_t *);
int        wcsncmp_u16        (const uint16_t *, const uint16_t *, size_t);
size_t     wcsspn_u16         (const uint16_t *, const uint16_t *);
size_t     wcscspn_u16        (const uint16_t *, const uint16_t *);
size_t     mbstowcs_u16       (uint16_t *, const char *, size_t);
size_t     mbrtowc_u16        (uint16_t *, const char *, size_t, mbstate_t *);

#define    wcslen              wcslen_u16
#define    wcsstr              wcsstr_u16
#define    wcsdup              wcsdup_u16
#define    wcscpy              wcscpy_u16
#define    wcsncpy             wcsncpy_u16
#define    wcschr              wcschr_u16
#define    wcsrchr             wcsrchr_u16
#define    wcscat              wcscat_u16
#define    wcscmp              wcscmp_u16
#define    wcsncmp             wcsncmp_u16
#define    wcsspn              wcsspn_u16
#define    wcscspn             wcscspn_u16
#define    mbstowcs            mbstowcs_u16
#define    mbrtowc             mbrtowc_u16

#include "framework.h"
#include "charset.h"
#include "literals.h"

#include "../../std.h"
#include "../../charset.h"

#endif
