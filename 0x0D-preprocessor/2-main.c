#include <stdio.h>

int main (void)
{
	char *program_name;
	program_name = __FILE__;
	{
	printf("%s", program_name);
	printf("\n");
	}
	return (0);
}

