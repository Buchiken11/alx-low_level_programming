#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int inc = 0;
	int or;
	
	while (*s != '\0')
	{
		inc++;
		s++;
	}
	s--;
	for (or = inc; or > 0; or--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
