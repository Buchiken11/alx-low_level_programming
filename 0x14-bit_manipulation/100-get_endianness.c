#include "main.h"

/**
 * get_endianness - checks if a proccessor is having big
 * or least endianness
 * Return: 0 for big, 1 for least endianness
 */

int get_endianness(void)
{
	unsigned int d = 1;
	char *p = (char *) &d;

	return (*p);
}
