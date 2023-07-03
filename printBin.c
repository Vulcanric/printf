#include "main.h"

/**
 * printBin - Prints the binary conversion of an integer when given
 * the custom conversion specifier 'b'
 * @ap: List "all" of variable arguments
 * @buff: Buffer to hold conversion for printing. Not handled.
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif Not handled.
 * Return: Number of digits printed
 */
int printBin(va_list ap, char __attribute__((unused))*buff, int flag,
		int width, int precision, int len_modif)
{
	int num;

	(void)flag; /* Unused */
	(void)width; /* Unused */
	(void)precision; /* Unused */
	(void)len_modif; /* Unused */

	num = va_arg(ap, int);

	return (print_bin_assist(num));
}

/**
 * print_bin_assist - The actual print binary function
 * @n: Integer to convert
 * Return: recursively the count of digits printed
 */
int print_bin_assist(int n)
{
	int counter = 0;

	if (n < 0)
	{
		counter += 1;
		n = n * -1;
	}

	if (n > 1) /* Conversion can only be done for numbers above 1 */
	{
		counter += print_bin_assist(n / 2);
	}

	counter += _putchar((n % 2) + '0');

	return (counter);
}
