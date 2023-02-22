#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; 1++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
