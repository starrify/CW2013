/*
 * This is part of the coursework for Compiler Design, 2013.05-06
 * By Pengyu CHEN (cpy.prefers.you[at]gmail.com)
 * COPYLEFT, ALL WRONGS RESERVED.
 */

#ifndef E6_30_H
#define E6_30_H

#define ERRPTR ((void*)-1)
#ifndef NULL
#define NULL ((void*)0)
#endif

#define CONFIG_HTABLE_SIZE  1007

enum
{
    STATUS_FAILED,
    STATUS_SUCCEEDED,
};

typedef unsigned int u32_t;
typedef unsigned long u64_t;
typedef int i32_t;
typedef long long i64_t;
typedef u32_t ptr_t;

typedef void hvalue_t;

typedef struct _hentry_t
{
    const char *key;
    hvalue_t *value;
    struct _hentry_t *next;
}   hentry_t;

typedef struct _htable_t
{
    u32_t size;
    hentry_t **pentry;
}   htable_t;

typedef struct _local_env_t
{
    struct _local_env_t *parent;
    htable_t *symbol_table;
    int varsz;
}   local_env_t;

enum 
{
    TYPE_VOID,
    TYPE_INT,
    TYPE_NONE = -1,
};

typedef struct _var_t
{
    char *name;
    int type;
    int arraysz;
    int offset;
}   var_t;

typedef struct _param_t
{
    int sz;
    int offset;
    struct _var_t *var;
}   param_t;

extern int parsing_error(const char *msg, ...);
extern htable_t *htable_new(u32_t size);
extern void htable_delete(htable_t *htable);
extern hentry_t *htable_insert(htable_t *htable, const char *key, hvalue_t *value);
extern hentry_t *htable_find(htable_t *htable, const char *key);

extern local_env_t *global_env;
extern local_env_t *current_env;

#endif /* E6_30_H */
