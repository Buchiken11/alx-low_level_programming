#include "main.h"

/**
 * append_text_to_file - this code appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int my;
	int mletters;
	int mim;

	if (!filename)
		return (-1);

	my = open(filename, O_WRONLY | O_APPEND);

	if (my == -1)
		return (-1);

	if (text_content)
	{
		for (mletters = 0; text_content[mletters]; mletters++)
			;

		mim = write(my, text_content, mletters);

		if (mim == -1)
			return (-1);
	}

	close(my);

	return (1);
}
