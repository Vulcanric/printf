#include "main.h"

/**
 * find_width - Searches for the width option.
 * @format: The format string to examine.
 * @ap: Variable argument list
 * @current_ind: Current index where '%' character is found
 * Return: Width found
 */
int find_width(const char *format, va_list ap, int *current_ind)
{
	int width_found = 0;
	int i = *current_ind + 1;

	for (; format[i]; i++)
	{
		if (isDigit(format[i])) /* IF the next character is a digit */
		{
		/* Convert char digit to number and assign it to width */
			width_found *= 10 + (format[i] - '0');
			*current_ind += 1;
		}
		else if (format[i] == '*')
		{
			width_found = va_arg(ap, int);
			*current_ind += 1;
			break;
		}
		else
			break;
	}

	return (width_found);
}
