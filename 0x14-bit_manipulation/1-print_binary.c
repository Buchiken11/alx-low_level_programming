#include "main.h"

/**
 * print_binary-function prints numbers in binary form
 * @n: numbers to be printed in the form of binary.
 * Return: nothing/void
 */

void print_binary(unsigned long int n)
{
	unsigned long int next;
	int p;
	int num;

	num = 0;
	for (p = 63; p >= 0; p--)
	{
		next = n >> p;
		if (next & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
