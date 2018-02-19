
#ifndef sodium_core_H
#define sodium_core_H

#include "export.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _MSC_VER
#define SODIUM_DECL_NORETURN __declspec(noreturn)
#define SODIUM_ATTR_NORETURN
#else
#define SODIUM_DECL_NORETURN
#define SODIUM_ATTR_NORETURN __attribute__ ((noreturn))
#endif

SODIUM_EXPORT
int sodium_init(void)
            __attribute__ ((warn_unused_result));

/* ---- */

SODIUM_EXPORT
int sodium_set_misuse_handler(void (*handler)(void));

SODIUM_EXPORT
void SODIUM_DECL_NORETURN sodium_misuse(void)
            SODIUM_ATTR_NORETURN;

#ifdef __cplusplus
}
#endif

#endif
