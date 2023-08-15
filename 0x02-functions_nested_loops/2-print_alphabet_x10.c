#include "main.h"

/**
 * print_alphabet_x10-function prints alphabet in lower case x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num;
	char alpha;

	num = 0;
	{
	while (num <= 9)
	{
		alpha = 'a';
	while (alpha <= 'z')
		{
		_putchar(alpha);
		alpha++;
		}
		_putchar('\n');
		num++;
	}
	}
}
