#include "main.h"

/**
 * clear_bit-function sets the vslue of bitd to 0 a
 * certain index.
 * @n: pointer to the number of string in bit
 * @index: ther are the number of bits starring from 0
 * Return: 1 if success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
