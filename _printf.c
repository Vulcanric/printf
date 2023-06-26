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
	int i = 0, counter = 0;
	char *buff, ch;
	size_t buffsize;
	va_list var;

	va_start(var, format);
	while (format[i]) /* Iterating through the characters of format */
	{
		if (format[i] == '%') /* IF a '%' character is found ...*/
		{
			switch (format[i + 1]) /* Examine the next character*/
			{
				case 'c':
					ch = va_arg(var, int);
					write(1, &ch, 1);
					break;
				case 's':
					buff = va_arg(var, char *);
					buffsize = _strlen(buff);
					write(1, buff, buffsize);
					counter += buffsize - 1;
					break;
				case '%':
					ch = '%';
					write(1, &ch, 1);
					break;
				default:
					break;
			}
			counter++;
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
		i++;
	}
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
