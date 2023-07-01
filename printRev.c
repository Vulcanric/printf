#include "main.h"

/**
 * printRev - prints a string in reverse
 * @ap: List "all" of variable arguments
 * @buff: handled.
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 * Return: Number of chars printed
 */
int printRev(va_list ap, char __attribute__((unused))*buff,
		int flag, int width, int precision, int len_modif)
{
	int i, l = 0, char_printed = 0;
	char *str = va_arg(ap, char *);

	for (i = 0; str[i]; i++)
		l++;
	l--;

	while (l > 0)
	{
		char_printed += _putchar(str[i]);
		l--;
	}
	return (char_printed);
}
