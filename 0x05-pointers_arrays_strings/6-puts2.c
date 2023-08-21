#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int inc = 0;
	int t = 0;
	char *y = str;
	int f;

	while (*y != '\0')
	{
		y++;
		inc++;
	}
	t = inc - 1;
	for (f = 0 ; f <= t ; f++)
	{
		if (f % 2 == 0)
		{
		_putchar(str[f]);
	}
	}
	_putchar('\n');
}
