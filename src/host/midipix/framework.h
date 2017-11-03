#ifndef _HOST_FRAMEWORK_H_
#define _HOST_FRAMEWORK_H_

#include <fcntl.h>
#include <utmp.h>

void    login_host         (const struct utmp *);
int     mkdirat_host       (int, const char *, mode_t);

#define login               login_host
#define mkdirat             mkdirat_host

#ifndef CopyMemory
#define CopyMemory          memcpy
#endif

#endif
