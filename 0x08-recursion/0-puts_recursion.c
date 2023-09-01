#include "main.h"

/**
 * _puts_recursion-function prints a string
 * @s: a pointer to the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
