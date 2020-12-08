
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGX_SHMEM_H_INCLUDED_
#define _NGX_SHMEM_H_INCLUDED_

#define NGX_HAVE_MAP_ANON 1
#define NGX_HAVE_MAP_DEVZERO 1
#define NGX_HAVE_SYSVSHM 1

#include "config.h"

typedef struct {
    u_char      *addr;
    size_t       size;
    u_char    *name;
    ngx_uint_t   exists;   /* unsigned  exists:1;  */
} ngx_shm_t;


ngx_int_t ngx_shm_alloc(ngx_shm_t *shm);
void ngx_shm_free(ngx_shm_t *shm);


#endif /* _NGX_SHMEM_H_INCLUDED_ */
