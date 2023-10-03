#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer-function allocates 1024 bytes to a buffer
 * @file: The name of the file the buffer is allocating
 * chars to
 * Return: A pointer to the newly-allocated buffer
 */

char *create_buffer(char *file)
{
        char *bu_ffer;

        bu_ffer = malloc(sizeof(char) * 1024);
        if (bu_ffer == NULL)
        {
                dprintf(STDERR_FILENO,

                        "Error: Can't write to %s\n", file);

                exit(99);
        }
        return (bu_ffer);
}

/**
 * close_file-function closes file descriptors.
 * @op_en: The file descriptor to be closed.
 */

void close_file(int op_en)
{
        int c;

        c = close(op_en);
        if (c == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close op_en %d\n", op_en);
                exit(100);
        }
}


/**
 * main-function copies the contents of a file to
 * another file.
 * @argc: the number of arguments in the program.
 * @argv: An array of pointers to the vector arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect exit code
 */

int main(int argc, char *argv[])
{
        int from, to, r, w;
        char *bu_ffer;

        if (argc != 3)
        {

                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }
        bu_ffer = create_buffer(argv[2]);
        from = open(argv[1], O_RDONLY);
        r = read(from, bu_ffer, 1024);
        to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        do {
                if (from == -1 || r == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't read from file %s\n", argv[1]);
                        free(bu_ffer);
                        exit(98);

                }
                w = write(to, buffer, r);
                if (to == -1 || w == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't write to %s\n", argv[2]);
                        free(bu_ffer);
                        exit(99);
                }
                r = read(from, bu_ffer, 1024);
                to = open(argv[2], O_WRONLY | O_APPEND);

        }
	while (r > 0);

        free(bu_ffer);
        close_file(from);
        close_file(to);
        return (0);
}
