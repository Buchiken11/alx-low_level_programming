#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index-function searches for an integer
 * @array: pointer to array elements
 * @size: size of the array
 * @cmp: function pointers to the array
 * Return: Always 0 (SUCCESS)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;
	int res;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		res = cmp(array[p]);
		if (res != 0)
		{
			return (p);
		}
	}
	return (-1);
}
