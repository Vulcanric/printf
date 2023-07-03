#include "main.h"
/**
 * _printf - writes formatted output to the stdout
 * @format: pointer the string to print
 * @...: Variable arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, conv_spec, char_printed = 0, total_char_printed = 0;
	char buff[BUFFSIZE];
	int flag, width, precision, len_modif;
	va_list all;

	va_start(all, format);
	if (format == NULL) /* IF format is NULL */
		return (-1);

	while (format[i]) /* Iterating through the characters of format */
	{
		if (format[i] != '%') /* To avoid printing percent char */
			char_printed += _putchar(format[i]);
		else
		{
			flag = find_flag(format, &i);
			width = find_width(format, all, &i);
			precision = find_precision(format, &i);
			len_modif = find_len_modif(format, &i);
			conv_spec = find_conv_spec(format, &i);

			/* If the conversion char does not match the required */
			if (handleformt(conv_spec) == 0)
				return (0);

			total_char_printed += handleformt(conv_spec)(all, buff, flag, width, precision, len_modif);
		}
		i++;
	}
	va_end(all);
	total_char_printed += char_printed;

	return (total_char_printed);
}
