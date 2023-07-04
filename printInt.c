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
	int number_D_printed = 0, padd = 0;
	int num;
	(void)precision;

	num = va_arg(ap, int);

	if (len_modif == 'l')
		num = (long)num;

	if (len_modif == 'h')
		num = (short)num;

	if (flag == '+') /* IF flag is equal to '+' */
	{
		if (width == 0 && num >= 0) /* IF width is 0 and num is positive */
			number_D_printed += _putchar('+'); /* Print '+' before printing num */
	}

	if (width != 0) /* When wdth is available */
	{
		if (flag == '-')
		{
			padd = width - print_num_assist(num);
			flag = ' ';
			for (; padd > 0; padd--)
				number_D_printed += _putchar(flag);

			return (number_D_printed);
		}

		if (flag == '0')
		{
			number_D_printed = countDigit(num);
			padd = width - print_num_assist(num);
			for (; padd > 0; padd--)
				number_D_printed += _putchar(flag);
		}

		if (flag == '+' && num >= 0) /* IF flag is '+' and num is positive*/
			number_D_printed += _putchar('+'); /* Print '+' before printing num */
	}
	number_D_printed += print_num_assist(num);

	return (number_D_printed);
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
		n *= -1; /* Getting the absolute value of num */
	}
	if (n > 9)
	{
		counter += print_num_assist(n / 10);
	}
	counter += _putchar((n % 10) + '0');

	return (counter);
}
