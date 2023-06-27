#ifndef PRINTF
#define PRINTF

/* Header files needed */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Structures and Typedef */
typedef void UNUSED;
/* Prototypes */
int _printf(const char *format, ...);
int print_integers(const char *format, ...);
int print_dec_bin(const char *format, ...);

/* Other important prototypes */
int _putchar(char c);
unsigned int _strlen(char *str);
char *_strcpy(char *dest, char *src);
#endif
