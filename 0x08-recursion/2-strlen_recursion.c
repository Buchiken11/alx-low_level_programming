#include "main.h"

/**
 * _strlen_recursion-function prints the length of a string
 * @s: pointer to the string
 * @n: variable to pass the string function
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
	n +=_strlen_recursion(s + 1);
	}
		return (n);
}
