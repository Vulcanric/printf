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

		if (flags[j] == '\0')
			return (0);

		if (flags[j] == ' ') /* To ignore space */
		{
			*current_ind += 1; /* and update current index to be the next option */
			i++; /* Go to the next option */
		}

		else
		{/* IF the next character is a ' ' char */
			if (format[i + 1] == flags[1])
				*current_ind += 1; /* Increment the index twice to be on the ' ' char */
			*current_ind += 1;
			return (num_rep[j]);
		}
	}
	return (0);
}
