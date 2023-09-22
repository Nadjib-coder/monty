#include "monty.h"

/**
 * execute_file - a function to execute Monty bytecode from a file
 * @filename: the name of the file.
 * Return: Nothing.
 */
void execute_file(char *filename)
{
	FILE *file = fopen(filename, "r");
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", filename);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, file) != -1)
	{
		char *opcode;
		int found = 0;
		size_t i;

		line_number++;
		opcode = strtok(line, " \t\n");
		if (opcode == NULL || opcode[0] == '#')
			continue;
		for (i = 0; i < sizeof(opcodes) / sizeof(instruction_t); i++)
		{
			if (strcmp(opcode, opcodes[i].opcode) == 0)
			{
				opcodes[i].f(&stack, line_number);
				found = 1;
				break;
			}
		}
		if (!found)
			handle_error("L%d: unknown instruction %s", line_number, opcode);
	}
	fclose(file);
	if (line)
		free(line);
}

