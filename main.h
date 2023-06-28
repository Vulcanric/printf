#ifndef PRINTF
#define PRINTF

/* Header files needed */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Structures and Typedef */
typedef void UNUSED;

/* Defined Macros */
#define BUFFSIZE 1024

/* Prototypes of functions */
int _printf(const char *format, ...);
int printChar(va_list ap, int flag, int width, int precision, int len_modif);
int printStr(va_list ap, int flag, int width, int precision, int len_modif);


/* Functions for finding the value of formatting options */
int find_flag(char const *format, current_ind);
int find_width(char const *format, current_ind);
int find_precision(char const *format, current_ind);
int find_len_modif(char const *format, current_ind);

/* Other helpful prototypes */
int printBuffer(char *buff, int buff_i);
int _putchar(char c);
unsigned int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int isDigit(int c);
#endif
