#include "main.h"

/**
 * set_bit-function sets the value of bits to 1 at certain index
 * @n: number of values of bits number
 * @index: the index number.
 * Return: 1 if successful otherwise return (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	{
		return (1);
	}
}
