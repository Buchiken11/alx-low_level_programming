#include "main.h"

/**
 * get_bin-function returns the value of binary at a specific
 * index.
 * @n: this is the index number of bits
 * @index: this is the index starting feom 0
 * Return: the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int getn_bit;

	if (index > 63)
	{
		return (-1);
	}
	getn_bit = (n >> index) & 1;
	{
		return (getn_bit);
	}

}
