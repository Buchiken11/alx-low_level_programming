#include "main.h"
/**
 * main-Entry point A function that prints alpabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
		_putchar('\n');
	}
}
