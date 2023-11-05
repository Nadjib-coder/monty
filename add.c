#include "monty.h"

/**
 * add - a function that adds the top two elements of the stack.
 * @stack: a double pointer to the head of the stack.
 * @line_number: the line number in the file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	(*stack)->n += tmp->n;
	free(tmp);
	(*stack)->prev = NULL;
}

