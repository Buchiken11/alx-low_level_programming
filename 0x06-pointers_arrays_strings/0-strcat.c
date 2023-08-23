#include "main.h"
/**
 * _strcat - Concatenate two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	/*Move the pointer to the end of the destination string*/
	while (*dest != '\0')
		dest++;
	/*Append the source string to the destination*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/*Add a null terminator to the combined string*/
	*dest = '\0';
	return result;
}
