#ifndef _HOST_STD_H_
#define _HOST_STD_H_

/*****************************************************************/
/* mintty was (and still is) written for 16-bit wide characters. */
/* for as long as this remains the case, providing a surrogate   */
/* std.h for portable targets seems to be the least painful      */
/* path to a successful port.                                    */
/*****************************************************************/

#include <features.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <wchar.h>

size_t     wcslen_host (const uint16_t *);
uint16_t * wcsstr_host (const uint16_t *, const wchar_t *);

#define wcslen	wcslen_host
#define wcsstr	wcsstr_host

#include "charset.h"
#include "literals.h"
#include "../../std.h"

#endif
