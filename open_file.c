#include "monty.h"

/**
 * open_file - a function that open a file
 * @filename: the name of the file.
 * Return: a file descriptor if success.
 */
int open_file(const char *filename)
{
	int fd;

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
	{
		perror("Error: Can't open file <%s>\n", filename);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

