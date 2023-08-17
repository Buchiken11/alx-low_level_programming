#include "main.h"
/**
 * print_most_numbers-functions prints numbers from 0t0 9
 * except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int p;

	p = '0';
	while (p <= '9')
	{
		if (p != '2' && p != '4')
		{
			_putchar(p);
		}
		{
			p++;
		}
	}
			_putchar('\n');
}
