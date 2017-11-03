#ifndef _HOST_STD_H_
#define _HOST_STD_H_

#define  WINAPI_UTF16_DEFAULT

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

size_t     wcslen_host        (const uint16_t *);
uint16_t * wcsstr_host        (const uint16_t *, const uint16_t *);
uint16_t * wcsdup_host        (const uint16_t *);
uint16_t * wcscpy_host        (uint16_t *, const uint16_t *);
uint16_t * wcsncpy_host       (uint16_t *, const uint16_t *, size_t);
uint16_t * wcschr_host        (const uint16_t *, uint16_t);
uint16_t * wcsrchr_host       (const uint16_t *, uint16_t);
uint16_t * wcscat_host        (uint16_t *, const uint16_t *);
int        wcscmp_host        (const uint16_t *, const uint16_t *);
int        wcsncmp_host       (const uint16_t *, const uint16_t *, size_t);
size_t     wcsspn_host        (const uint16_t *, const uint16_t *);
size_t     wcscspn_host       (const uint16_t *, const uint16_t *);
size_t     mbstowcs_host      (uint16_t *, const char *, size_t);
size_t     mbrtowc_host       (uint16_t *, const char *, size_t, mbstate_t *);

#define    wcslen              wcslen_host
#define    wcsstr              wcsstr_host
#define    wcsdup              wcsdup_host
#define    wcscpy              wcscpy_host
#define    wcsncpy             wcsncpy_host
#define    wcschr              wcschr_host
#define    wcsrchr             wcsrchr_host
#define    wcscat              wcscat_host
#define    wcscmp              wcscmp_host
#define    wcsncmp             wcsncmp_host
#define    wcsspn              wcsspn_host
#define    wcscspn             wcscspn_host
#define    mbstowcs            mbstowcs_host
#define    mbrtowc             mbrtowc_host

#include "framework.h"
#include "charset.h"
#include "literals.h"

#include "../../std.h"
#include "../../charset.h"

#endif
