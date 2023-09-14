#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings-functions prints strings
 * @separator: pointer to the string to be printed
 * @n: number of the strings passed to the function
 * @...: number of arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	char *Ptr;

	va_list args;
	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		Ptr = va_arg(args, char *);
		{
			if (Ptr == NULL)
			{
				printf("(nill)");
			}
			else
			{
				printf("%s", Ptr);
			}
			if (p != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
