#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked-function creates a dynamic memory allocation
 * @b: b is the size of parameter
 * Return: void pointer ptrma.
 */

void *malloc_checked(unsigned int b)
{
	void *ptrma;

	ptrma = malloc(b);
	if (ptrma == NULL)
	{
		exit(98);
	}
	return (ptrma);

}
