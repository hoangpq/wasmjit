/*
  Copyright (c) 2018 Rian Hunter et. al, see AUTHORS file.

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 */


/* common definitions */
#include <wasmjit/posix_sys_def.h>

KWSC3(1, , lseek, unsigned int, off_t, unsigned int)
KWSC3(1, , writev, unsigned long, const struct iovec *, unsigned long)
KWSC3(1, , write, unsigned int, const void *, size_t)
KWSC1(1, , close, unsigned int)
KWSC6(1, , sendto, int, const void *, size_t, unsigned int, const struct sockaddr *, int)
KWSC6(1, , recvfrom, int, void *, size_t, unsigned int, struct sockaddr *, int *)
KWSC3(1, , sendmsg, int, const user_msghdr_t *, unsigned int)
KWSC3(1, , recvmsg, int, user_msghdr_t *, unsigned int)
KWSC3(1, , read, unsigned int, void *, size_t)
KWSC3(1, , readv, unsigned long, const struct iovec *, unsigned long)
KWSC2(1, , chmod, const char *, umode_t)
KWSC4(1, , pread64, unsigned int, char *, size_t, loff_t)
KWSC4(1, , pwrite64, unsigned int, const char *, size_t, loff_t)
KWSC2(1, , getrlimit, unsigned int, struct rlimit *)
KWSC4(1, , prlimit64, pid_t, unsigned int, const struct rlimit64 *, struct rlimit64 *)
KWSC2(1, , ftruncate, unsigned int, unsigned long);
KWSC2(1, , newstat, const char *, struct stat *);
KWSC2(1, , newlstat, const char *, struct stat *);
KWSC2(1, , newfstat, unsigned int, struct stat *);
KWSC3(1, , getdents64, unsigned int, struct linux_dirent64 *, unsigned int)
KWSC3(1, , open, const char *, int, umode_t)
KWSC3(1, , statfs64, const char *, size_t, struct statfs64 *)
