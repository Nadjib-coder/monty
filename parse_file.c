#include "monty.h"

/**
 * parse_file - a funtion to open and parse Monty
 * ByteCode file line by line
 * @filename: the name of the monty bytecode file.
 * @stack: the stack.
 * Return: Nothing.
 */
void parse_file(const char *filename, stack_t **stack)
{
	char line[MAX_LINE_LENGTH];
	FILE *file = fopen(filename, "r");
	unsigned int line_number = 0;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", filename);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file))
	{
		line_number++;
		execute_instr(stack, line, line_number);
	}
	fclose(file);
}

