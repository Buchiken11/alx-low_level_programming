#include <stdio.h>

/**
 * main-function prints the name of file
 *
 * Return: Always 0 (SUCCESS)
 */

int main (void)
{
	char *program_name;

	program_name = __FILE__;
	{
	printf("%s\n", program_name);
	}
	return (0);
}
