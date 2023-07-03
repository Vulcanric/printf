#include "main.h"

/**
 * printRev - prints a string in reverse
 * @ap: List "all" of variable arguments
 * @buff: Temporarily holding conversion for printing
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 * Return: Number of chars printed
 */
int printRev(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif)
{
	int i, len = 0, char_printed = 0;
	(void)ap;
	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;

	buff = va_arg(ap, char *);
	for (i = 0; buff[i]; i++)
		len++;

	for (; len >= 0; len--)
	{
		char_printed += _putchar(buff[len]);
	}

	return (char_printed);
}
