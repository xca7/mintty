#ifndef _HOST_FRAMEWORK_H_
#define _HOST_FRAMEWORK_H_

#include <fcntl.h>
#include <utmp.h>

#define _MIDIPIX_FREESTANDING

#include <ntapi/nt_atomic.h>

void    login_host         (const struct utmp *);
int     mkdirat_host       (int, const char *, mode_t);



#define login               login_host
#define mkdirat             mkdirat_host

#ifndef CopyMemory
#define CopyMemory          memcpy
#endif

#ifndef InterlockedIncrement
#define InterlockedIncrement	w32api_interlocked_increment
#endif

#ifndef InterlockedDecrement
#define InterlockedDecrement	w32api_interlocked_decrement
#endif

#ifndef IsEqualGUID
#define IsEqualGUID		w32api_guid_compare
#endif

#ifndef IsEqualIID
#define IsEqualIID		w32api_guid_compare
#endif

#ifndef IsEqualCLSID
#define IsEqualCLSID		w32api_guid_compare
#endif

static __inline__ int32_t w32api_interlocked_increment(int32_t volatile * p)
{
	return at_locked_xadd_32(p,1) + 1;
}

static __inline__ int32_t w32api_interlocked_decrement(int32_t volatile * p)
{
	return at_locked_xsub_32(p,1) - 1;
}

static __inline__ int w32api_guid_compare(
	const void *	pguid_dst,
	const void *	pguid_src)
{
	uint64_t *	dst;
	uint64_t *	src;

	dst = (uint64_t *)pguid_dst;
	src = (uint64_t *)pguid_src;

	return ((dst[0] == src[0]) && (dst[1] == src[1]))
		? 1 : 0;
}

#undef __reserved
#undef __optional

#undef _MIDIPIX_FREESTANDING

#endif
