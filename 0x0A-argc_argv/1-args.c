#include <stdio.h>
#include "main.h"

/**
 * @argc: counter argument.
 * @argv: vector variable
 * Return: 0.
 */

int main(int argc, char* argv[])
{
	(void)argv;
	printf("%d\n", argc-1);
	return 0;
}
