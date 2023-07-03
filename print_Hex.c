#include "main.h"

/**
 * print_Hex - Prints the hexa-decimal conversion of an unsigned number
 * @case_print: Case to print hexa-decimal into
 * @n: Unsigned number to convert
 * Return: Number of digits printed
 */

int print_Hex(char case_print[17], unsigned int n)
{
	int i, counter = 0;
	unsigned int b16[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	if (n > 15)
	{
		counter += print_Hex(case_print, n / 16);
	}

	i = 0;
	while (i < 16)
	{
		if (b16[i] == (n % 16))
		{
			counter += _putchar(case_print[i]);
			break;
		}
		i++;
	}

	return (counter);
}
