#include <stdio.h>
/**
 * main-Entry point A function that prints numbes, comma and space
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	int f;

	for (f = 48; f <= 57; f++)
	{
		putchar(f);
	}
	if (f != 9)
	{
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
	
