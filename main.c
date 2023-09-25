#include "monty.h"

stack_t *stack = NULL;

/**
 * main - The monty program.
 * @argc: a pointer to the number of arguments.
 * @argv: a pointer to an arryay of arguments.
 * Return: 0 (Success), otherwise (failuir).
 */
int main(int argc, const char *argv[])
{
	const char *filename;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	parse_file(filename);

	return (0);
}

