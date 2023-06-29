#include "main.h"

/**
 * printBuffer - Prints a buffer
 * @buff: Buffer to print
 * Return: Nothing
 */
int printBuffer(char *buff)
{
	int char_printed = 0;
	int i = 0;

	while (buff[i])
	{
		char_printed += write(1, &buff[i], 1);
		i++;
	}

	return (char_printed);
}
