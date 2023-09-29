#include "main.h"

/**
 * binary_to_uint-function converts binary to unsigned int values
 * @b: b os the pointer to the unsigned in string;
 * Return: return the uns number converted or zero
 * if there are more unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_print = 0;
	int d;

	if (!b)
	{
		return (0);
	}
	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		num_print = 2 * num_print + (b[d] - '0');
	}
	return (num_print);
}
