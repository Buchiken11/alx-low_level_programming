#include <stdio.h>
/**
 * main-Entry point A function that prints alphabe
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char alpha = 'a';

	while ( alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		putchar('\n');
	}
	return (0);
}
