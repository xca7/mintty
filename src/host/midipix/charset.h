#ifndef _HOST_CHARSET_H_
#define _HOST_CHARSET_H_

#ifndef HAS_LOCALES
#define HAS_LOCALES 1
#endif

#include <stdint.h>
#include <stddef.h>

#include <windef.h>
#include <wingdi.h>

char *     cs_pathconv_posix_utf8_to_w32cmd_utf8(const char *);
uint16_t * cs_pathconv_posix_utf8_to_w32cmd_utf16(const char *);
char *     cs_pathconv_w32cmd_utf16_to_posix_utf8(const uint16_t *);

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

int cs_print_font_info(
	const char *		fmt,
	int32_t			weight,
	const uint16_t *	fn_utf16,
	const uint16_t *	st_utf16,
	const uint16_t *	face_utf16,
	const uint16_t *	style_utf16);

#define path_posix_to_win_a	cs_pathconv_posix_utf8_to_w32cmd_utf8
#define path_posix_to_win_w	cs_pathconv_posix_utf8_to_w32cmd_utf16
#define path_win_w_to_posix	cs_pathconv_w32cmd_utf16_to_posix_utf8

#define WideCharToMultiByte	cs_strconv_utf16_to_utf8
#define MultiByteToWideChar	cs_strconv_utf8_to_utf16

#endif
