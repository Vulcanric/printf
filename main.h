#ifndef PRINTF
#define PRINTF

/* Header files needed */
#include <stdarg.h>
#include <unistd.h>

/* Structures and Typedef */
typedef struct format
{
	char conv_spec;
	int (*func)(va_list, char *, int, int, int, int);
} format;

/* Defined Macros */
#define BUFFSIZE 1024

/* Prototypes of functions */
int _printf(const char *format, ...);
int printChar(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printStr(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printPercent(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printInt(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printHex_upper(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printHex_lower(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printRev(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printRot13(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int printBin(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif);
int (*handleformt(char conv_spec))(va_list, char *, int, int, int, int);

/* Functions for finding the value of formatting options */
int find_flag(char const *format, int *current_ind);
int find_width(char const *format, va_list ap, int *current_ind);
int find_precision(char const *format, int *current_ind);
int find_len_modif(char const *format, int *current_ind);
int find_conv_spec(char const *format, int *current_ind);

/* Other helpful prototypes */
int printBuffer(char *buff);
int print_num_assist(int n);
int print_bin_assist(int n);
int print_Hex(char case_print[17], unsigned int n);
int _putchar(char c);
int isDigit(int c);
int isFlag(char f);
int countDigit(int n);
#endif
