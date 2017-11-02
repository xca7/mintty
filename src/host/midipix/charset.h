#ifndef _HOST_CHARSET_H_
#define _HOST_CHARSET_H_

#ifndef HAS_LOCALES
#define HAS_LOCALES 1
#endif

#include <stdint.h>
#include <stddef.h>

#include <windef.h>
#include <wingdi.h>

int cs_strconv_utf16_to_utf8(
	uint32_t		cp,
	uint32_t		flags,
	const uint16_t *	wch,
	int			wchlen,
	char *			ch,
	int			chlen,
	const char *		defchar,
	int *			defcharused);

int cs_strconv_utf8_to_utf16(
	uint32_t		cp,
	uint32_t		flags,
	const char *		ch,
	int			chlen,
	uint16_t *		wch,
	int			wchlen);

#define WideCharToMultiByte	cs_strconv_utf16_to_utf8
#define MultiByteToWideChar	cs_strconv_utf8_to_utf16

#endif
