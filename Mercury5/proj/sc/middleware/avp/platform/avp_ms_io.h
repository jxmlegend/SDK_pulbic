////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2009-2010 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// ("MStar Confidential Information") by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////


#ifndef MS_IO_H
#define MS_IO_H

#if defined(MIPSDEV) || defined(ECOS) || defined(CERAMAL_PLATFORM)
#define IO_USE_UNISTD
#endif

#ifdef _MSC_VER
#include <TCHAR.h>
#endif

// File I/O routine mapping

#ifdef IO_USE_UNISTD
#include <unistd.h>
#include <fcntl.h>

#define O_MS_BINARY 0

#define MS_FO_RB  (O_RDONLY                 |O_MS_BINARY)
#define MS_FO_R   (O_RDONLY                             )
#define MS_FO_RP  (O_RDWR                               )
#define MS_FO_WB  (O_WRONLY|O_CREAT|O_TRUNC |O_MS_BINARY)
#define MS_FO_W   (O_WRONLY|O_CREAT|O_TRUNC             )
#define MS_FO_WPB (O_RDWR  |O_CREAT|O_TRUNC |O_MS_BINARY)
#define MS_FO_WT  MS_FO_W
#define MS_FO_AB  (O_WRONLY|O_CREAT|O_APPEND|O_MS_BINARY)
#define MS_FO_A   (O_WRONLY|O_CREAT|O_APPEND            )
#define MS_FO_AP  (O_RDWR  |O_CREAT|O_APPEND            )

#define MSFILE int

#if defined(CERAMAL_PLATFORM)

#define ms_open                         c51_open_fast
#define ms_open_fcc(file, a, buf, size) fs_open_fcc(file, a, buf, size)
#define ms_close                        c51_close
#define ms_open_fail(x)                 ((x) < 0)
#define ms_write(buf, unit, size, file) write(file, buf, (size) * (unit))
#define ms_read(buf, unit, size, file)  c51_read(file, buf, (size) * (unit))
#define ms_flush                        fsync
#define ms_seek(file, offset, whence)   c51_lseek(file, offset, whence)
#define ms_sync                         sync
#define ms_strlen                       fs_strlen

#define ms_aread_mstar(buf, unit, size, file)      c51_nonblock_read((MSFILE) file, buf, (size) * (unit))

#else

#define ms_open(file, a)                fs_open(file, a)
#define ms_open_fcc(file, a, buf, size) fs_open_fcc(file, a, buf, size)
#define ms_open_fail(x)                 ((x) < 0)
#define ms_close(file)                  close(file)
#define ms_write(buf, unit, size, file) write(file, buf, (size) * (unit))
#define ms_read(buf, unit, size, file)  read(file, buf, (size) * (unit))
#define ms_flush                        fsync
#define ms_seek(file, offset, whence)   lseek(file, offset, whence)
#define ms_sync                         sync
#define ms_strlen                       fs_strlen
#endif

#else

#include <stdio.h>

#if defined(__RTK_OS__)
#include "mdl_drm_vfs_file.ho"

#define MSFILE DRM_VFS_FILE *
#define MS_FO_RB          "rb"
#define MS_FO_R           "r"
#define MS_FO_RP          "r+"
#define MS_FO_WB          "wb"
#define MS_FO_W           "w"
#define MS_FO_WPB         "w+b"
#define MS_FO_WT          "wt"
#define MS_FO_AB          "ab"
#define MS_FO_A           "a"
#define MS_FO_AP          "a+"
#define ms_open(file, a)                drm_file_fopen(file, a)
#define ms_open_fcc(file, a, buf, size) drm_file_fopenWithBuffer(file, a, buf, size)
#define ms_open_fail(x)                 ((x) == 0)
#define ms_close(a)                     drm_file_fclose(a)
#define ms_write(a,b,c,d)               drm_file_fwrite(d, a, ((b) * (c)))
#define ms_read(a,b,c,d)                drm_file_fread(d, a, ((b) * (c)))
#define ms_flush(a)                     ((void)0)
#define ms_seek(a, b, c)                (drm_file_fseek(a,b,c) < 0 ? -1 : drm_file_ftell(a))
#define ms_sync()                       // not available

#elif defined(_MSC_VER)

//#define IO_USE_WINAPI
#if defined(IO_USE_WINAPI)

#include <windows.h>

extern DWORD _s, _ret, _err, _t;
extern OVERLAPPED _ovlap;

#define MSFILE          HANDLE
#define MS_FO_RB        "rb"
#define MS_FO_R         "r"
#define MS_FO_RP        "r+"
#define MS_FO_WB        "wb"
#define MS_FO_W         "w"
#define MS_FO_WPB       "w+b"
#define MS_FO_WT        "wt"
#define MS_FO_AB        "ab"
#define MS_FO_A         "a"
#define MS_FO_AP        "a+"
#define ms_open(a, b)                   (memset(&_ovlap, 0, sizeof(_ovlap)), _s = 0, _err = 0, CreateFile(a, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, NULL))
#define ms_gets                         // not available
#define ms_puts                         // not available
#define ms_open_fail(h)                 ((h) == INVALID_HANDLE_VALUE)
#define ms_close(h)                     CloseHandle(h)
#define ms_write(a, b, c, h)            WriteFile(h, a, (b) * (c), NULL, NULL)
#define ms_aread(a, b, c, h)            (_ret = ReadFile(h, a, (b) * (c), &_s, &_ovlap), _err = GetLastError(), (_ret == 1) | (_err == ERROR_IO_PENDING) | (_err == ERROR_HANDLE_EOF) ? 0 : _err)
#define ms_flush                        // not available
#define ms_seek(h, b, c)                (_s = 0, _err = 0, _ovlap.Offset = ((c) == SEEK_SET) ? (b) : ((c) == SEEK_CUR) ? _ovlap.Offset + (b) : GetFileSize(h, NULL) + (b))
#define ms_sync()                       // not available
#define ms_arsync(h)                    (_err == ERROR_IO_PENDING ? GetOverlappedResult(h, &_ovlap, &_s, TRUE) : NULL, _ovlap.Offset += _s, _t = _s, _s = 0, _err == ERROR_IO_PENDING ? _err = 0 : NULL, _t)

#define ms_read_mstar(a, b, c, h)       (ms_aread(a, b, c, h), ms_arsync(h))
#define ms_aread_mstar(a, b, c, h)      (_t = ms_arsync(h), ms_aread(a, b, c, h), _t)
#define ms_read    ms_read_mstar

#else // IO_USE_WINAPI

#define MSFILE FILE *
#define MS_FO_RB        _T("rb")
#define MS_FO_R         _T("r")
#define MS_FO_RP        _T("r+")
#define MS_FO_WB        _T("wb")
#define MS_FO_W         _T("w")
#define MS_FO_WPB       _T("w+b")
#define MS_FO_WT        _T("wt")
#define MS_FO_AB        _T("ab")
#define MS_FO_A         _T("a")
#define MS_FO_AP        _T("a+")
#define ms_open         _tfopen
#define ms_gets         _fgetts
#define ms_puts         _fputts
#define ms_open_fail(x)  ((x) == 0)
#define ms_close         fclose
#define ms_write         fwrite
#define ms_read          fread
#define ms_flush         fflush
#define ms_seek(a, b, c) (fseek(a,b,c) ? -1 : ftell(a))
#define ms_sync()        // not available

#endif // IO_USE_WINAPI

#elif defined(__I_SW__)
#include "mdl_vfs_file.ho"

#define MSFILE VFS_FILE *
#define MS_FO_RB          "rb"
#define MS_FO_R           "r"
#define MS_FO_RP          "r+"
#define MS_FO_WB          "wb"
#define MS_FO_W           "w"
#define MS_FO_WPB         "w+b"
#define MS_FO_WT          "wt"
#define MS_FO_AB          "ab"
#define MS_FO_A           "a"
#define MS_FO_AP          "a+"
#define ms_open(file, a)                0// not available
#define ms_open_fcc(file, a, buf, size) 0// not available
#define ms_open_fail(x)                 ((x) == 0)
#define ms_close(a)                     // not available
#define ms_write(a,b,c,d)               // not available
#define ms_read(a,b,c,d)                0// not available
#define ms_flush(a)                     // not available
#define ms_seek(a, b, c)                // not available
#define ms_sync()                       // not available

#else // _MSC_VER
#define MSFILE FILE *
#define MS_FO_RB        "rb"
#define MS_FO_R         "r"
#define MS_FO_RP        "r+"
#define MS_FO_WB        "wb"
#define MS_FO_W         "w"
#define MS_FO_WPB       "w+b"
#define MS_FO_WT        "wt"
#define MS_FO_AB        "ab"
#define MS_FO_A         "a"
#define MS_FO_AP        "a+"
#define ms_open         fopen
#define ms_gets         fgets
#define ms_puts         fputs
#define ms_open_fail(x)  ((x) == 0)
#define ms_close         fclose
#define ms_write         fwrite
#define ms_read          fread
#define ms_flush         fflush
#define ms_seek(a, b, c) (fseek(a,b,c) ? -1 : ftell(a))
#define ms_sync()        // not available
#endif // _MSC_VER



#endif // IO_USE_UNISTD

// File name manipulation

#if defined(MIPSDEV)

typedef char ms_fnchar;

#define MS_FN(fn) fn
#define ms_fnrchr              fs_strrchr
#define ms_fncpy(dst, src, n)  (fs_strncpy(dst, src, n), (dst)[(n) - 1] = 0)
#define ms_fnlen               fs_strlen

#define MS_MAX_PATH FILENAMESIZE

#elif defined(__RTK_OS__)

#include "mdl_vfs_struct.h"
#include "util_ucs2.hi"
typedef u16Char ms_fnchar;

#define MS_FN(fn)              L##fn
#define ms_fnrchr(s, c)        sysUtil_UCS2FindExtDot(s)
#define ms_fncpy               sysUtil_UCS2StringNCopy
#define ms_fnlen               sysUtil_UCS2StringLength
#define ms_fncat               sysUtil_UCS2StringCat
#define ms_fncmp               sysUtil_UCS2StringCmp

#define MS_MAX_PATH VFS_FAT_SPEC_FULLPATH_LEN

#elif defined(_MSC_VER)

typedef TCHAR ms_fnchar;

#ifdef WINCE
#define MS_FN(fn)  TEXT(fn) // hack for non-conformance header
#else
#define MS_FN(fn) _TEXT(fn)
#endif
#define ms_fnrchr              _tcsrchr
#define ms_fncpy(dst, src, n)  (_tcsncpy(dst, src, n), (dst)[(n) - 1] = 0)
#define ms_fnlen               _tcslen
#define ms_fncat               _tcscat
#define ms_fncmp               _tcscmp

#define MS_MAX_PATH 256

#else

typedef char ms_fnchar;

#define MS_FN(fn) fn
#define ms_fnrchr              strrchr
#define ms_fncpy(dst, src, n)  (strncpy(dst, src, n), (dst)[(n) - 1] = 0)
#define ms_fnlen               strlen
#define ms_fncat               strcat
#define ms_fncmp               strcmp

#define MS_MAX_PATH 256

#endif

#endif // MS_IO_H
