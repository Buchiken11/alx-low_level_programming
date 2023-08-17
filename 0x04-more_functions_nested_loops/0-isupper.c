#include "main.h"

/**
 * _isupper-checks for an uppercase and returns 1 if true
 * @c: checks if int c is uppercase
 * Return 1. (Success)
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
