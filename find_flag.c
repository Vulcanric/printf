#include "main.h"

/**
 * find_flag - Searches for the flag character after the '%' char in
 * the format string
 * @format: The format string to examine
 * @current_ind: The current index where the '%' char is found
 * Return: flag character
 */
int find_flag(const char *format, va_list ap, int current_ind)
{
	int flag_found = 0;
	int ind = current_ind + 1;

	for (; format[ind] != '\0'; ind++)
	{
		if (format[i] == '+')
		{
			flag_found = '+';
			va_arg(ap, int);
		}
		if (format[i] == ' ')
		{
			flag_found = ' ';
			va_arg(ap, int);
		}
		if (format[i] == '#')
		{
			flag_found = '#';
			va_arg(ap, unsigned int);
		}

		if (flag_found != 0)
			return (flag_found);
	}
	return (-1);
}
