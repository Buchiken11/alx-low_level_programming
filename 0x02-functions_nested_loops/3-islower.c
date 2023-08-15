#include "main.h"
/**i
 * _islower-function prints lowecase alphabet
 *
 * Return: 1 on success
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
