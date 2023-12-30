#include "monty.h"

/**
 * mod - a function that computes the rest of
 * the division of the second top element by the top element.
 * @stack: a double pointer to the head of the stack.
 * @line_number: a line number in the file.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int a, b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;

	(*stack)->next->n = b % a;

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

