#include <stdio.h>
#include "main.h"

/**
 * main-prints the name of the file containing the code
 * @argc: agument count
 * @argv: vector argument prints the number of aguments
 * in the command line
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
