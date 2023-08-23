#include <stdio.h>

/**
 * _strncpy - Copy a string up to n characters
 * @dest: Destination buffer
 * @src: Source string
 * @n: Number of characters to copy
 *
 * Return: Pointer to destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p;
	
	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
		dest[p] = '\0';
	p++;
	return dest;
}
