#include "main.h"

/**
 * create_file-function creates and/or truncate a file
 * @filename: A pointer to the name of the file to be created
 * @text_content: A pointer to a string where file is written
 * Return: If the function fails 1
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{

	int op_en;
	int wri_te;
	int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	op_en = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wri_te = write(op_en, text_content, count);

	if (op_en == -1 || wri_te == -1)

		return (-1);
	close(op_en);
	return (1);
}
