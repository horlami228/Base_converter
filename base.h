#ifndef BASE_H
#define BASE_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>


int dec_to_bin(unsigned int n);
int dec_to_hex(unsigned int n);
int bin_to_dec(const char *binary);
int bin_to_hex(const char *binary);
int hex_to_dec(const char *hexa);
int hex_to_bin(const char *hexa);
int code_base(void);
#endif /*BASE_H*/