#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-function read text file and prints it to STDOUT.
 * @filename: name oftext file being read
 * @letters: number of characters to be read
 * Return: wri_te- the number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wri_te;
	ssize_t p;
	char *file;
	ssize_t op_en;

	fd = open(filename, O_RDONLY);
	if (op_en == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	p = read(op_en, file, letters);
	wri_te = write(STDOUT_FILENO, file, p);

	free(file);
	close(op_en);
	return (wri_te);
}
