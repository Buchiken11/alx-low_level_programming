#include "main.h"
/**
 * print_diagonal-function prints diagonal lines
 *@n: the integer that checkes the confition
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;
		int j;
		for (p = 0; p <= n; p++)
			{
			for (j = 0; j <= n; j++)
			{
				if (j == p)
				_putchar('\\');
				else if (j < p)
					_putchar(' ');
			}
			_putchar('\n');
			}
	}
}
