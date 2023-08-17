#include "main.h"
/**
 * _isdigit-function checkes for a digit throgh 0-9
 * @c: checks if c is a digit
 * Return: 1 on Success otherwise return 0.
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
