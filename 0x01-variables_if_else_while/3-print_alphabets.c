#include <stdio.h>
/**
 * main-Entry point A function that prints alpabet in lower an upper case with putchar
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	char alpha;
	char upper;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
		putchar('\n');
		return (0);
}

