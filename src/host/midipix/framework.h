#ifndef _HOST_FRAMEWORK_H_
#define _HOST_FRAMEWORK_H_

#include <fcntl.h>

int     mkdirat_host       (int, const char *, mode_t);

#define mkdirat             mkdirat_host

#endif
