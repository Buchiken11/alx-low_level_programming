#include <stdio.h>
#include <stdlib.h>

/**
 * main-function prints opcodes of it's own
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int byte, p;
	char *Ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	Ptr = (char *)main;
	for (p = 0; p < byte; p++)
	{
		if (p == byte - 1)
		{
			printf("%02hhx\n", Ptr[p]);
			break;
		}
		printf("%02hhx ", Ptr[p]);
	}
	return (0);
}
