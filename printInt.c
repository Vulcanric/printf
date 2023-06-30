#include "main.h"

/**
 * printInt - Handles the 'd' or 'i' conversion specifier by printing
 * the decimal number argument passed
 * @ap: List "all" of variable arguments passed
 * @buff: Holds values to be printed. Not handled!
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 *
 * Return: Number of digits char printed
 */
int printInt(va_list ap, char __attribute__((unused))*buff, int flag,
		int width, int precision, int len_modif)
{
	int numberD_printed = 0;
	int num = va_arg(ap, int);
	(void)ap;
	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modif;

	numberD_printed += print_num_assist(num);

	return (numberD_printed);
}

/**
 * print_num_assist - Assists printInt() function by recursively
 * going through all the digits, printing them.
 * @n: Number to print out
 * Return: Number of digits char printed
 */
int print_num_assist(int n) /* Using recursion */
{
	int counter = 0;

	if (n < 0)/* IF number is negative, print '-' minus */
	{
		counter += _putchar('-'); /*print minus */
		n = n * -1; /* Getting the absolute value of num */
	}
	if (n > 9)
	{
		counter += print_num_assist(n / 10);
	}
	counter += _putchar((n % 10) + '0');

	return (counter);
}
