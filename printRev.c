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
	int char_printed, i;

	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;

	buff = va_arg(ap, char *);
	i = 0;
	char_printed = 0;
	while (buff[i])
	{
		char_printed++;
		i++;
	}

	i--;
	while (i >= 0)
	{
		_putchar(buff[i]);
		i--;
	}

	return (char_printed);
}
