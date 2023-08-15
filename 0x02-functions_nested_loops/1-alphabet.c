#include "main.h"
/**
 * main- print_alphabet- prints that alpabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');
}
