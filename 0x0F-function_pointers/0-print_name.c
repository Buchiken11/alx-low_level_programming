#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name-function prints the name of a person
 * @name: a pointer the stores the name string
 * @f: a pointer that points to the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
