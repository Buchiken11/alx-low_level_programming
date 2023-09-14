#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers-function prints numbers of the entered arguments
 * @seperator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;

	va_list args;
	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(args, int));
		{
			if (p != n - 1 && separator && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
