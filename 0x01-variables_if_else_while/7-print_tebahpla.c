#include <stdio.h>
/**
 * main-Entry point Afunction that prints alpabet reverse
 *
 * Return: Always 0. (Succeds)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

