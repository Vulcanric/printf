#include "main.h"

/**
 * printStr - Prints a string when the conversion specifier given is 's'
 * @buff: Buffer to hold the converted format specifier
 * @ap: List type "all" of the variable arguments
 * @flag: Not handled
 * @width: Not handled
 * @precision: Not handled
 * @len_modif: Not handled
 * Return: Number of characters printed
 */
int printStr(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif)
{
	int char_printed = 0;
	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;

	buff = va_arg(ap, char *);
	if (buff == NULL)
	{
		buff = "(null)";
		char_printed = printBuffer(buff);
	}

	else
		char_printed = printBuffer(buff);

	return (char_printed);
}
