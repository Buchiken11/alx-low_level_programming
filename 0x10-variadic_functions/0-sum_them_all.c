#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all-function returns the sum of all it's parameter
 * @n: first agument
 * @...: number of arguments
 * Return: Always 0 (SUCCESS)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int p;
	unsigned int sum = 0;

	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);
	for (p = 0; p < n; p++)
	{
		sum += va_arg(args, int);
	}
va_end(args);

return (sum);
}
