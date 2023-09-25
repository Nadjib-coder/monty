#include "monty.h"

/**
 * execute_instr - a function that execute the  instruction.
 * @instr: the instruction.
 * @line_number: the line when the instruction found for
 * error handling.
 * Return: Nothing.
 */
void execute_instr(char *instr, unsigned int line_number)
{
	char *opcode, *arg;
	stack_t *stack = NULL;

	opcode = strtok(instr, " \t\n");
	if (opcode)
	{
		arg = strtok(NULL, " \t\n");
		if (strcmp(opcode, "push") == 0)
		{
			if (!arg)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			push(&stack, atoi(arg));
		}
		else if (strcmp(opcode, "pop") == 0)
		{
			pop(&stack, line_number);
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}
}
