#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-exexutes a function given as parameter to 
 * @array: pointer to array
 * @size: size of array
 * @action: function pointers
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
