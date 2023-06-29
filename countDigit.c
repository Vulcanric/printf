#include "main.h"

/**
 * countDigit - Counts the number of digits that makes up a number
 * @n: The number to count its digits
 * Return: Number of digits that make up a number
 */
int countDigit(int n)
{
	if (n < 10)
		return (1);
	else if (n > 9)
		return (1 + countDigit(n / 10));

	return (0);
}
