#include "main.h"

/**
 * printPercent - Prints the percent symbol when conversion specifier is '%'
 * @ap: List "all" of variable arguments
 * @buff: Buffer to hold converted value. Not handled.
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 * Return: The number of char printed.
 */
int printPercent(va_list ap, char __attribute__((unused))*buff,
		int flag, int width, int precision, int len_modif)
{
	int char_printed = 1;
	(void)ap;
	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;

	return (char_printed);
}
