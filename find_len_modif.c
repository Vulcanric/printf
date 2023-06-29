#include "main.h"

/**
 * find_len_modif - Finds the length modifier option in the format string
 * @format: Format string to examine
 * @current_ind: Current index where '%' is found
 * Return: length modifier found, if it is founded, else 0 otherwise
 */
int find_len_modif(char const *format, int *current_ind)
{
	int i = *current_ind + 1, ch = 0, j;
	char len_ch[2] = "lh";

	for (; format[i]; i++)
	{
		for (j = 0; len_ch[j]; j++)
		{
			if (format[i] == len_ch[j])
			{
				*current_ind += 1;
				ch = len_ch[j];
				return (ch);
			}
		}
		if (len_ch[j] == '\0')
			break;
	}
	return (0);
}
