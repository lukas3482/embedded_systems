#ifndef MYSTRINGUTILS_H_
#define MYSTRINGUTILS_H_

#include <inttypes.h>
#include <stdbool.h>

uint32_t mystringlen(char* str);
void toupper(char* str);
char toupper_char(char str);
bool mystring_cmp(char str1[], char str2[]);
char* mystring_cpy(char original[]);


#endif