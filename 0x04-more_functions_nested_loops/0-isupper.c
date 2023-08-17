#include "main.h"
/**
 * _isupper-checks for an uppercase and returns 1 if true
 * @c: checks if c is uppercase
 * Return (1)
 */
int _isupper(int c)
{
	c = 'A';
	if (c >= 'A' && c <='Z')
		return (1);
	else
		return (0);
}
