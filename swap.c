#include "monty.h"

/**
 * swap - a function that  swaps the top two elements of the stack.
 * @stack: the stack.
 * @line_number: the number of the line that we found this
 * opcode.
 * Retrun: Nothing.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

