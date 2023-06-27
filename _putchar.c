#include "main.h"

/**
 * _putchar - Write the character c to stdout
 * @c: the character to write out
 *
 * Return: On success 1,
 * On error -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
