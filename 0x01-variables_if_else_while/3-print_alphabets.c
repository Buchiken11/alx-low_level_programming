#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char alpha;
	char Up;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (Up = 'A'; Up <= 'Z'; Up++)
	{
		putchar(Up);
	}
	putchar('\n');
		return (0);
}


