#include <stdio.h>
#include "main.h"
/**
 * main-function prints number argument passed to the terminal
 *@argc: counter argument.
 *@argv: vector variable count
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	(void)argv;/*argv*/
	{
	printf("%d\n", argc-1);
	return 0;
	}
}
