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
	int numberD_printed = 0, padd;
	int num;
	(void)ap;
	(void)precision;
	(void)len_modif;
	num = va_arg(ap, int);

	if (flag == '1') /* IF flag is equal to '+' */
	{
		if (num > 0)
			numberD_printed += _putchar('+');
	}
	if (width != 0)
	{
		for (padd = (width - 2); padd > 0; padd--)
			numberD_printed += _putchar(' ');
	}
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
