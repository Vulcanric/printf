#include "main.h"
/**
 * _printf - writes formatted output to the stdout
 * @format: pointer the string to print
 * @...: Variable arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, size = 0, counter = 0;
	char *buff;
	va_list var;

	va_start(var, format);
	if (format == NULL) /* IF format is NULL */
		return (-1);
	while (format[i]) /* Iterating through the characters of format */
	{
		if (format[i] != '%') /* To avoid printing percent char */
		{
			_putchar(format[i]);
			counter++;
		}
		else /* IF a '%' character is found ...*/
		{
			switch (format[i + 1]) /* Examine the next character*/
			{
				case 'c':
					_putchar(va_arg(var, int));
					counter++;
					break;
				case 's':
					buff = va_arg(var, char *);
					if (buff) /* IF not null */
					{
						size = _strlen(buff);
						write(1, buff, size);
						counter += size;
					}
					break;
				case '%':
					_putchar('%');
					counter++;
					break;
				default:
					break;
			}
			i++; /* To jump over to the conversion char */
		}
		i++; /* Jump over to the next character */
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
