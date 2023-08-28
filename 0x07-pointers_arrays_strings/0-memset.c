#include "main.h"

/**
 * _memset-funtions fills the memory with bytes
 * @*s: the pointer variable
 * @b: the second variable
 * @n: the third variable
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
