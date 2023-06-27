#ifndef PRINTF
#define PRINTF

/* Header files needed */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Prototypes */
int _printf(const char *format, ...);
int print_integers(const char *format, ...);
int print_dec_bin(const char *format, ...);

/* Other important prototypes */
unsigned int _strlen(char *str);
char *_strcpy(char *dest, char *src);
#endif
