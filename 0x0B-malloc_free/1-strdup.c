#include <stdlib.h>
#include "main.h"

/**
 * _strdup-function allocates memory for a duplicated string
 * @str: pointer to the string
 * Return: pointer
 */

char *_strdup(char *str)

{
	char *buchi;
	int n = 0;
	int i = 0;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	buchi = malloc(n * sizeof(char) + 1);
	if (buchi == 0)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i <= n; i++)
	{
		buchi[i] = str[i];
	}
	return (buchi);
}
