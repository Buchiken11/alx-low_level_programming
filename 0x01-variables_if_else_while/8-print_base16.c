#include <stdio.h>
/**
 * main-Entry point A function that prints bsse 16 numbers in lower case
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		for (num = 97; num <= 103; num++)
		putchar(num);
		putchar(num);
	}
		putchar('\n');
		return (0);
}

