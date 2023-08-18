#include "main.h"
/**
 * print_square-function prints hash in 2x2, 10x10
 * @n
 *
 * Return:0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
