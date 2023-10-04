#include "main.h"

/**
 * append_text_to_file-function appends text at the end of a file.
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to the string to br added
 * to the end of the file.
 * Return: -1 if the function fails or filename is NULL
 * If the file does not exist the user lacks write permissions
 * Otherwise, return - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op_en;
	int wri_te;
	int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; count++)
	}
	op_en = open(filename, O_WRONLY | O_APPEND);
	wri_te = write(op_en, text_content, count);

	if (op_en == -1 || wri_te == -1)
		return (-1);

	close(op_en);
	return (1);
}
