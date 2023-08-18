#include "main.h"
/**
 * print_line-function prints line characters
 * @n: n is the variabe to test
 * Return 0.
 */
void print_line(int n)
{
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
