#include <stdio.h>
#include "main.h"

/**
 * main-function print all arguments recieved from the terminal
 * @argc: arguments count
 * @argv: vector count
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
		return (0);
}
