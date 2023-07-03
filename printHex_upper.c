#include "main.h"

/**
 * printHex_upper - Prints unsigned integers in uppercase
 * @ap: List "all" of variable arguments
 * @buff: Buffer to hold conversion for printing. Not handled.
 * @flag: handled.
 * @width: handled.
 * @precision: Not handled.
 * @len_modif: handled.
 */
int printHex_upper(va_list ap, char __attribute__((unused))*buff, int flag,
		int width, int precision, int len_modif)
{
	int padd, num_D_printed = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int numRep = num;
	char upperhex[] = "0123456789ABCDEF";

	(void)precision;

	if (flag == '-') /* Left Justification */
	{
		num_D_printed += print_Hex(upperhex, num);
		padd = width - num_D_printed;
		for (; padd > 0; padd--)
			num_D_printed += _putchar(' ');

		return (num_D_printed);
	}

	else if (flag == '0') /* Right Justification */
	{
		while (numRep > 15)
		{
			numRep /= 16;
			num_D_printed += 1;
		}
		padd = width - num_D_printed;
		while (padd > 0)
		{
			num_D_printed += _putchar('0');
			padd--;
		}
		print_Hex(upperhex, num);

		return (num_D_printed);
	}

	else if (flag == '#')
		num_D_printed += write(1, "0x", 2);

	/* Handling length modifier */
	if (len_modif == 'l')
		num = (long)num;

	else if (len_modif == 'h')
		num = (short)num;


	num_D_printed += print_Hex(upperhex, num);

	return (num_D_printed);
}
