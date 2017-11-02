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
#include <sys/ioctl.h>


size_t     wcslen_host        (const uint16_t *);
uint16_t * wcsstr_host        (const uint16_t *, const wchar_t *);
uint16_t * wcsdup_host        (const uint16_t * string);
uint16_t * wcscpy_host        (uint16_t *, const uint16_t *);
size_t     mbstowcs_host      (uint16_t *, const char *, size_t n);
size_t     mbrtowc_host       (uint16_t *, const char *, size_t, mbstate_t *);

#define    wcslen              wcslen_host
#define    wcsstr              wcsstr_host
#define    wcsdup              wcsdup_host
#define    wcscpy              wcscpy_host
#define    mbstowcs            mbstowcs_host
#define    mbrtowc             mbrtowc_host

#include "charset.h"
#include "literals.h"

#include "../../std.h"
#include "../../charset.h"

#endif
