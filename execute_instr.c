#include "monty.h"

/**
 * execute_instr - a function that execute the  instruction.
 * @instr: the instruction.
 * @line_number: the line when the instruction found for
 * error handling.
 * @stack: the stack.
 * Return: Nothing.
 */
void execute_instr(stack_t **stack, char *instr, unsigned int line_number)
{
	char *opcode, *arg;

	if (instr[0] == "#")
		return;
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
			push(stack, atoi(arg));
		}
		else if (strcmp(opcode, "pall") == 0)
			pall(stack, line_number);
		else if (strcmp(opcode, "pop") == 0)
			pop(stack, line_number);
		else if (strcmp(opcode, "pint") == 0)
			pint(stack, line_number);
		else if (strcmp(opcode, "swap") == 0)
			swap(stack, line_number);
		else if (strcmp(opcode, "add") == 0)
			add(stack, line_number);
		else if (strcmp(opcode, "nop") == 0)
			nop(stack, line_number);
		else if (strcmp(opcode, "div") == 0)
			div_op(stack, line_number);
		else if (strcmp(opcode, "mul") == 0)
			mul(stack, line_number);
		else if (strcmp(opcode, "mod") == 0)
			mod(stack, line_number);
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}
}

