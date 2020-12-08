//
// Created by zhangchao12 on 2020/12/8.
//

#ifndef SHAREMEM_CONFIG_H
#define SHAREMEM_CONFIG_H

#define NGX_OK 0
#define NGX_ERROR -1
#define NGX_HAVE_ATOMIC_OPS 1

#if (NGX_HAVE_SCHED_YIELD)
#define ngx_sched_yield()  sched_yield()
#else
#define ngx_sched_yield()  usleep(1)
#endif

#include <sys/types.h>
#include <unistd.h>

typedef intptr_t    ngx_int_t;
typedef uintptr_t   ngx_uint_t;
typedef pid_t       ngx_pid_t;

#endif //SHAREMEM_CONFIG_H
