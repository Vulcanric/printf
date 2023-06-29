#include "main.h"

/**
 * find_precision - finds the precision option in the format string
 * @format: The format string to examine
 * @current_ind: Current index of where '%' is found
 * Return: precision found, else 0
 */
int find_precision(char const *format, int *current_ind)
{
	int precision = 0;
	int i = *current_ind + 1;
	int j = i + 1;

	for (; format[i]; i++)
	{
		for (; format[j]; j++)
		{
			if (format[i] == '.' && isDigit(format[j]))
			{
				precision *= 10 + (format[i + 1] - '0');
				*current_ind += 1;
			}
			else
				break;
		}
		if (precision != 0)
			return (precision);
	}
	return (0);
}
