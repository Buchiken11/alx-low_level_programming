#include "main.h"
/**
 * positive_or_negative-function print a number and checks if it is +-
 *
 * Return: 0.
 */
void positive_or_negative(int i)

{
	i = 0;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is negative\n", i);
}
