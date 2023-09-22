#include "monty.h"

/**
 * main - The monty program.
 * @argc: a pointer to the number of arguments.
 * @argv: a pointer to an arryay of arguments.
 * Retuen: 0 (Success), otherwise (failuir).
 */
int main(int *argc, int *argv[])
{
	FILE *fd;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open_file(argv[1]);
	bytes_read = read_file(fd);

	return (0);
}

