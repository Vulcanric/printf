#include "main.h"
/**
 * _printf - writes formatted output to the stdout
 * @format: pointer the string to print
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, size = 0, counter = 0;
	char ch, *buff;
	va_list var;

	va_start(var, format);
	if (format) /* IF format is not NULL */
	{
		while (format[i]) /* Iterating through the characters of format */
		{
			if (format[i] != '%') /* To avoid printing percent char */
				ch = format[i];
			size = 1;
			if (format[i] == '%') /* IF a '%' character is found ...*/
			{
			switch (format[i + 1]) /* Examine the next character*/
			{
				case 'c':
					ch = va_arg(var, int);
					break;
				case 's':
					buff = va_arg(var, char *);
					size = _strlen(buff);
					if (buff) /* IF not null */
					write(1, buff, size);
					break;
				case '%':
					ch = '%';
					break;
				default: /* let ch be the next char after "% default" */
					ch = format[i + 2];
					i++;
					break;
			}
			i++; /* To jump over the conversion char */
			}
			write(1, &ch, 1);
			counter += size;
			i++;
		}
	}
	va_end(var);
	return (counter);
}

/**
 * _strlen - returns the length of a string
 * @str: Pointer to the string to find it's length
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
