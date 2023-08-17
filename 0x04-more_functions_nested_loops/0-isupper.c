#include "main.h"

/**
 * _isupper-function checks for an uppercase letter
 * @c: checks if c is uppercase and returns 1
 * Return 1. (Success)
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
