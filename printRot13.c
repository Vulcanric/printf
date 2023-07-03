#include "main.h"

/**
 * printRot13 - Prints a string argument in encoded format due rot13
 * @ap: List "all" of variable arguments
 * @buff: Buffer to hold conversion for printing
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 * Return: Number of chars printed
 */
int printRot13(va_list ap, char *buff, int flag, int width,
		int precision, int len_modif)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13Out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, char_printed = 0;

	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;
	buff = va_arg(ap, char *);

	i = 0;
	while (buff[i])
	{
		j = 0;
		while (in[j])
		{
			if (buff[i] == in[j])
			{
				char_printed += _putchar(rot13Out[j]);
				break;
			}

			j++;
		}
		if (in[j] == '\0')
			char_printed += _putchar(buff[i]);

		i++;
	}

	return (char_printed);
}
