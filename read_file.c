#include "monty.h"

/**
 * read_file - a function that read the content of file.
 * @fd: a file descriptor.
 * Return: the number of bytes reads.
 */
ssize_t read_file(FILE *fd)
{
	int fd;
	char buffer[1];
	ssize_t bytes_read;

	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		perror("Error reading file");
		exit(EXIT_FAILURE);
	}
	return (bytes_read);
}

