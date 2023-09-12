#include <stdio.h>

/**
 * main-function prints the name of file
 *
 * Return 0 (SUCCESS)
 */

int main (void)
{
	char *program_name;

	program_name = __FILE__;
	{
	printf("%s", program_name);
	}
	printf("\n");
	return (0);
}
