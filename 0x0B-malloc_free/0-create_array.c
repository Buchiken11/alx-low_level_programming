#include <stdlib.h>
#include "main.h"

/**
 * create_array-fuction creates an array of characters
 * and initializes it to c.
 * @size: size of unsigned itegers
 * @c: variable c
 * Return: ptrf
 */

char *create_array(unsigned int size, char c)
{
	char *ptrf;
	unsigned int sizema;

	if (size == 0)
	{
		return (NULL);
	}

	ptrf = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	for (sizema = 0; sizema < size; sizema++)
	{
		ptrf[sizema] = c;
	}
	return (ptrf);
}
