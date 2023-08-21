#include "main.h"
/**
 * swap_int-function swaps the address and
 * value of two variable.
 *@a: the first variable
 *@b: second variable
 * Return; 0.
 */
void swap_int(int *a, int *b)
{
int p;

	p = *a;
	*a = *b;
	*b = p;
}
