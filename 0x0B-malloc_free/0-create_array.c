#include <stdlib.h>
#include "main.h"

/**
 * create_array-fuction creates an array of characters 
 * and initializes it to c.
 * @size: size of unsigned itegers
 * @sizema: size of array member
 * @c: variable
 * @ptrf: pointer to be returned
 * Return 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ptrf;
	unsigned int sizema;

	ptrf = malloc(size * sizeof (char));
	for (sizema = 0; sizema < size; sizema++)
	{
		ptrf[sizema] = c;
	}
	return (ptrf);
}