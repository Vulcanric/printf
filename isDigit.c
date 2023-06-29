#include "main.h"

/**
 * isDigit - Checks for a digit
 * @c: The character to examine
 * Return: 1 if c is digit, else 0
 */
int isDigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
