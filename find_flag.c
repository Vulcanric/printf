#include "main.h"

/**
 * find_flag - Finds the flag option in the format string
 * @format: The format string to examine
 * @current_ind: The current index where the '%' char is found
 * Return: flags if founded, else 0;
 */
int find_flag(const char *format, int *current_ind)
{
	int j;
	int i = *current_ind + 1;
	char flags[] = "+ #";
	char num_rep[] = "123";

	/* Examine two char after the percent '%' char */
	for (; format[i] != format[*current_ind + 3] || format[i];)
	{
		for (j = 0; flags[j]; j++)
		{
			if (format[i] == flags[j])
				break;
		}

		if (flags[j] == '\0') /* IF flag is not found ...*/
			return (0);

		if (num_rep[j] == 2) /* To ignore space */
		{
			i++; /* Go to the next option */
			/* and update current index to be the next option */
			*current_ind += 1;
		}

		else
		{
			*current_ind += 1;
			return (num_rep[j]);
		}
	}
	return (0);
}
