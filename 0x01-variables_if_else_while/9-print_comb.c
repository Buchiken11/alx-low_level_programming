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
		if (f != 58)
		putchar(f);
		putchar(44);
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
