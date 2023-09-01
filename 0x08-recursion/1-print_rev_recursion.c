#include "main.h"

/**
 * _print_rev_recursion-function prints the string in reverse
 * @s: a pointer variable to the sting
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
