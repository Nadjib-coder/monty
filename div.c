#include "monty.h"

/**
 * div_op - a function that divides the second
 * top element by the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void div_op(stack_t **stack, unsigned int line_number)
{
	int a = (*stack)->n;
	int b = (*stack)->next->n;
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = b / a;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

