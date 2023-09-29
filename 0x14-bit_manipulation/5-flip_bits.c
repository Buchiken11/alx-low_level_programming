#include "main.h"

/**
 * flip_bits-function returns the number of bits
 * you would need to flip to get from one number to the other
 * @n: number of flip 1
 * @m: number of flip 2.
 * Retur: 0 if Successful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int minus = n ^ m;
	unsigned long int next;
	int d, num_count;

	num_count = 0;
	for (d = 63; d >= 0; d--)
	{
		next = minus >> d;
		if (next & 1)
		{
			num_count++;
		}
	}
	return (num_count);
}
