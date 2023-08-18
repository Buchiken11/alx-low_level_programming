#include "main.h"
/**
 * more_numbers-functions 10 times number from 
 * 0-14 in 10 lines
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
 int i, j;

 for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
