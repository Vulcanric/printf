#include "main.h"

/**
 * printHex_upper - Prints unsigned integer in hexa-decimal, uppercased
 * @ap: List "all" of variable arguments
 * @buff: Buffer not handled.
 * @flag: Handled
 * @width: Handled
 * @precision: Not handled
 * @len_modif: Handled
 * Return: Number of digits printed
 */
int printHex_upper(va_list ap, char __attribute__((unused))*buff, int flag,
		int width, int precision, int len_modif)
{
	unsigned int num = va_arg(ap, unsigned int), numRep = num;
	int num_D_printed = 0, padd;
	char upperhex[] = "0123456789ABCDEF";
	(void)precision;

	if (len_modif == 'l')
	{
		num = (long)num;
	}
	else if (len_modif == 'h')
	{
		num = (short)num;
	}

	if (flag == '0')
	{
		while (numRep > 15)
		{
			numRep /= 16;
			num_D_printed++;
		}
		padd = width - num_D_printed;
		while (padd > 0)
		{
			num_D_printed += _putchar('0');
			padd--;
		}
	}
	if (flag == '-')
	{
		num_D_printed += print_Hex(upperhex, num);
		padd = width - num_D_printed;
		while (padd > 0)
		{
			num_D_printed += _putchar(' ');
			padd--;
		}
		return (num_D_printed);
	}
	if (flag == '#')
		num_D_printed += write(1, "0x", 2);

	num_D_printed += print_Hex(upperhex, num);

	return (num_D_printed);
}
