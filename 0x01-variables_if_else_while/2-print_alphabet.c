#include <stdio.h>
/**
 * main-Entry point A function that prints alphabe
 * 
 * Return: Always (0) Success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar('\n');
	}
	return (0);
}
