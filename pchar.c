#include "monty.h"

/**
 * pchar - a function that prints the
 * char at the top of the stack.
 * @stack: a double pointer to the head of the stack.
 * @line_number: a line number in the file.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	putchar(value);
	putchar('\n');
}

