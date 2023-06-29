#include "main.h"

/**
 * printChar - Prints the character when a 'c' conversion specifier is given
 * @ap: List type "all" of the variable arguments
 * @buff: Not handled
 * @flag: Not handled
 * @width: Not handled
 * @precision: Not handled
 * @len_modif: Not handled
 * Return: Number of character printed
 */
int printChar(va_list ap, char __attribute__((unused))*buff, int flag,
		int width, int precision, int len_modif)
{
	int char_printed;

	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;

	char_printed = _putchar(va_arg(ap, int));

	return (char_printed);
}
