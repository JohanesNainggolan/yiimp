#ifndef ARGON2D_H
#define ARGON2D_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

<<<<<<< HEAD
void argon2d_crds_hash(const char* input, char* output, unsigned int len);
void argon2d_dyn_hash(const char* input, char* output, unsigned int len);
void argon2d16000_hash(const char* input, char* output, unsigned int len);
=======
void argon2d_uis_hash(const char* input, char* output, unsigned int len);
>>>>>>> origin/argon2d4096

#ifdef __cplusplus
}
#endif

#endif