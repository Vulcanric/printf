#include "main.h"

/**
 * printAll - Handles all format specifier conversion
 * @conv_spec: Conversion specifier character called
 *
 * Return: The function to handle the formatted printing
 */
int (*handleformt(char conv_spec))(va_list ap, char *buff, int, int, int, int)
{
	format functions[] = {
		{'c', printChar},
		{'s', printStr},
		{'%', printPercent},
		{'d', printInt},
		{'i', printInt},
		{0, 0}
	};
	int i = 0;

	while (functions[i].conv_spec != 0 && functions[i].conv_spec != conv_spec)
	{
		i++;
	}
	if (functions[i].conv_spec == 0)
		return (0);

	return (functions[i].func);
}
