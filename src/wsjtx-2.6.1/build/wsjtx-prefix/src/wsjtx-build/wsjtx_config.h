#ifndef WSJTX_CONFIG_H__
#define WSJTX_CONFIG_H__

#ifdef __cplusplus
extern "C"  {
#endif

#ifndef TO_STRING__
#define TO_STRING_IMPL__(x) #x
#define TO_STRING__(x) TO_STRING_IMPL__(x)
#endif

#define PROJECT_VERSION_MAJOR 2
#define PROJECT_VERSION_MINOR 6
#define PROJECT_VERSION_PATCH 1
#define PROJECT_VERSION_TWEAK 0
#define BUILD_TYPE_REVISION ""

#define CMAKE_INSTALL_DATAROOTDIR "share"
#define CMAKE_INSTALL_DOCDIR "share/doc/wsjtx"
#define CMAKE_INSTALL_DATADIR "share"
#define CMAKE_PROJECT_NAME "wsjtx"
#define PROJECT_VENDOR "Joe Taylor, K1JT"
#define PROJECT_NAME "wsjtx"
#define PROJECT_COPYRIGHT "Copyright (C) 2001-2023 by Joe Taylor, K1JT"
#define PROJECT_MANUAL "wsjtx-main"
#define PROJECT_HOMEPAGE "https://wsjt.sourceforge.io/wsjtx.html"
#define PROJECT_MANUAL_DIRECTORY_URL "https://wsjt.sourceforge.io/wsjtx-doc/"
#define PROJECT_SAMPLES_URL "http://downloads.sourceforge.net/project/wsjt/"
#define PROJECT_DESCRIPTION "WSJT-X: Digital Modes for Weak Signal Communications in Amateur Radio"

#define HAVE_HAMLIB_OLD_CACHING 0
#define HAVE_HAMLIB_CACHING 0

#define HAVE_STDIO_H 1
#define STDC_HEADERS 1
#define HAVE_STDLIB_H 1
#define HAVE_UNISTD_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_FCNTL_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_LINUX_PPDEV_H 1
/* #undef HAVE_DEV_PPBUS_PPI_H */

#define WSJT_SHARED_RUNTIME 0
#define WSJT_SOFT_KEYING 1
#define WSJT_ENABLE_EXPERIMENTAL_FEATURES 0
#define WSJT_RIG_NONE_CAN_SPLIT 0
#define WSJT_TRACE_UDP 0

/* consistent UNICODE behaviour */
#ifndef UNICODE
#	undef _UNICODE
#else
#	ifndef _UNICODE
#		define _UNICODE
#	endif
#endif

  /* typedef for consistent gfortran ABI for charlen type hidden arguments */
#if __GNUC__ > 7
#ifdef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif
  typedef size_t fortran_charlen_t;
#else
  typedef int fortran_charlen_t;
#endif

#ifdef __cplusplus
}
#endif

#endif
