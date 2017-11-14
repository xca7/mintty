/****************************************************************/
/*  host/midipix/franework.c: midipix-specific bits for mintty  */
/*  Copyright (C) 2017  Z. Gilboa                               */
/*  Released under the Standard MIT License.                    */
/****************************************************************/

#include <dlfcn.h>
#include <fcntl.h>
#include <stdint.h>
#include <stddef.h>
#include <locale.h>

#include <windef.h>
#include <winnls.h>

#include <psxabi/sys_path.h>
#include <psxxfi/xfi_path.h>
#include <psxxfi/xfi_unicode.h>

#include <u16ports/u16ports.h>

static int (*w32api_strconv_utf8_to_utf16)(
	uint32_t		cp,
	uint32_t		flags,
	const char *		ch,
	int			chlen,
	uint16_t *		wch,
	int			wchlen);

static int (*w32api_strconv_utf16_to_utf8)(
	uint32_t		cp,
	uint32_t		flags,
	const uint16_t *	wch,
	int			wchlen,
	char *			ch,
	int			chlen,
	const char *		defchar,
	int *			defcharused);

__attribute__((constructor))
static void cs_strconv_init()
{
	void * hkernel32;

	hkernel32 = dlopen("kernel32.dll",0);

	w32api_strconv_utf8_to_utf16 = dlsym(hkernel32,"MultiByteToWideChar");
	w32api_strconv_utf16_to_utf8 = dlsym(hkernel32,"WideCharToMultiByte");
}

__attribute__((constructor))
static void cs_locale_init()
{
	setlocale(LC_ALL, "");
}

char * cs_pathconv_posix_utf8_to_w32cmd_utf8(const char * from_path)
{
	int32_t		status;
	char		to_path[0x10000];

	if ((status = __xfi_path_conv_utf8(
			AT_FDCWD,
			(const unsigned char *)from_path,
			PSX_PATH_SYNTAX_POSIX_LAYER,0,
			to_path,
			PSX_PATH_SYNTAX_NATIVE_SHELL,sizeof(to_path),
			0,0,PSX_PATH_CONV_RESOLVE_PARENT,0)))
		return 0;

	return strdup(to_path);
}


uint16_t * cs_pathconv_posix_utf8_to_w32cmd_utf16(const char * from_path)
{
	int32_t		status;
	uint16_t	to_path[0x8000];

	if ((status = __xfi_path_conv_utf8_to_utf16(
			AT_FDCWD,
			(const unsigned char *)from_path,
			PSX_PATH_SYNTAX_POSIX_LAYER,0,
			to_path,
			PSX_PATH_SYNTAX_NATIVE_SHELL,sizeof(to_path),
			0,0,PSX_PATH_CONV_RESOLVE_PARENT,0)))
		return 0;

	return u16_wcsdup(to_path);
}


char * cs_pathconv_w32cmd_utf16_to_posix_utf8(const uint16_t * from_path)
{
	int32_t		status;
	char		to_path[0x10000];

	if ((status = __xfi_path_conv_utf16_to_utf8(
			AT_FDCWD,
			from_path,
			PSX_PATH_SYNTAX_NATIVE_TOOL,0,
			to_path,
			PSX_PATH_SYNTAX_POSIX_LAYER,sizeof(to_path),
			0,0,PSX_PATH_CONV_RESOLVE_PARENT,0)))
		return 0;

	return strdup(to_path);
}


int cs_strconv_utf16_to_utf8(
	uint32_t		cp,
	uint32_t		flags,
	const uint16_t *	wch,
	int			wchlen,
	char *			ch,
	int			chlen,
	const char *		defchar,
	int *			defcharused)
{
	if (cp != CP_UTF8)
		return 0;

	return w32api_strconv_utf16_to_utf8(
		cp,flags,
		wch,wchlen,
		ch,chlen,
		defchar,defcharused);
}


int cs_strconv_utf8_to_utf16(
	uint32_t		cp,
	uint32_t		flags,
	const char *		ch,
	int			chlen,
	uint16_t *		wch,
	int			wchlen)
{
	if (cp != CP_UTF8)
		return 0;

	return w32api_strconv_utf8_to_utf16(
		cp,flags,
		ch,chlen,
		wch,wchlen);
}


static char * cs_convert_param(const uint16_t * param)
{
	size_t	len;
	char *	dst;

	len = u16_wcstombs(0,param,0);

	if ((dst = malloc(len + 1))) {
		u16_wcstombs(dst,param,len);
		dst[len] = 0;
	}

	return dst;
}


static void cs_free_param(char * param)
{
	if (param)
		free(param);
}


int cs_print_font_info(
	const char *		fmt,
	int32_t			weight,
	const uint16_t *	fn_utf16,
	const uint16_t *	st_utf16,
	const uint16_t *	face_utf16,
	const uint16_t *	style_utf16)
{
	int	ret;
	char *	fn;
	char *	st;
	char *	face;
	char *	style;

	fn    = cs_convert_param(fn_utf16);
	st    = cs_convert_param(st_utf16);
	face  = cs_convert_param(face_utf16);
	style = cs_convert_param(style_utf16);

	ret = printf(fmt,weight,
		fn    ? fn    : "!!FN_ENOMEM!!",
		st    ? st    : "!!ST_ENOMEM!!",
		face  ? face  : "!!FACE_ENOMEM!!",
		style ? style : "!!STYLE_ENOMEM!!",
		0);

	cs_free_param(fn);
	cs_free_param(st);
	cs_free_param(face);
	cs_free_param(style);

	return ret;
}
