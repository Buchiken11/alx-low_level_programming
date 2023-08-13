#include <stdio.h>
/**
 * main-Entry point A function that prints bsse 16 numbers in lower case
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	char num, alpha;

	for (num = 48; num <= 57; num++)
	{
		for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(num);
		putchar(alpha);
	}
		return (0);
}

