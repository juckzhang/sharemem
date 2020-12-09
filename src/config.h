//
// Created by zhangchao12 on 2020/12/8.
//

#ifndef SHAREMEM_CONFIG_H
#define SHAREMEM_CONFIG_H

#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>

#define NGX_OK 0
#define NGX_ERROR -1
#define NGX_EINTR EINTR
#define NGX_HAVE_ATOMIC_OPS 1
#define ngx_memzero(buf, n)       (void) memset(buf, 0, n)

#define ngx_align(d, a)     (((d) + (a - 1)) & ~(a - 1))
#define ngx_align_ptr(p, a)                                                   \
    (u_char *) (((uintptr_t) (p) + ((uintptr_t) a - 1)) & ~((uintptr_t) a - 1))

#if (NGX_HAVE_SCHED_YIELD)
#define ngx_sched_yield()  sched_yield()
#else
#define ngx_sched_yield()  usleep(1)
#endif

typedef intptr_t    ngx_int_t;
typedef uintptr_t   ngx_uint_t;
typedef pid_t       ngx_pid_t;

extern ngx_int_t    ngx_ncpu;

#endif //SHAREMEM_CONFIG_H
