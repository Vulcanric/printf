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
	char *buff;
	size_t buffsize;
	va_list var;

	va_start(var, format);

	if (format) /* IF format is not NULL */
	{
		while (format[i]) /* Iterating through the characters of format */
		{
			/* Allocating memory for buffer */
			buff = malloc(sizeof(char));
			if (buff == NULL) /* Handling malloc return */
				return -1;

			*buff = format[i];
			if (format[i] == '%') /* IF a '%' character is found ...*/
			{
				switch (format[i + 1]) /* Examine the next character*/
				{
					case 'c':
						*buff = va_arg(var, int);
						break;
					case 's':
						_strcpy(buff, va_arg(var, char *));
						break;
					case '%':
						*buff = '%';
						break;
					default:
						break;
				}
				i++; /* To jump over the conversion char */
			}
			buffsize = _strlen(buff);
			write(1, buff, buffsize);
			i++;
			counter += buffsize;
			free(buff);
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

/**
 * _strcpy - Copies the content of a string into another string
 * @dest: destination string of the copied string
 * @src: source string of the copied string
 * Return: destination string having a copy of source string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
		i++;

	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
