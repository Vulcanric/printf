#include "main.h"
#include <stdio.h>

/**
 *  * main - Check the code
 *   * Return: Nothing
 *    */
int main(void)
{
	int len = 0, len2;
        char c = 'B';
        char str[5] = "abcd";

	len = _printf("Bright's name starts with the letter %c.\nOther characters are %s\n", c, str);
	printf("%d\n", len);

	len = _printf("Letters of the str[5] are %c%c%c%c\nAll the string are %s\n", str[0], str[1], str[2], str[3], str);
	printf("%d\n", len);

	len = _printf("%s\ns1234\n", "printf");
	printf("%d\n", len);

	len2 = printf("Check this out: %c%s %c %s%s\n", 'e', "ric", '\t', "john", ' ', 4);
	printf("%d\n", len2);
	_printf(NULL);
       return (0);
}
