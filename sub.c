#include "monty.h"

/**
 * sub - a functin that subtracts the top element
 * from the second top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int a = (*stack)->n, b = (*stack)->next->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = b - a;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

