#include "monty.h"

/**
 * pall - a function to print all elements on the stack
 * @stack: a stack.
 * @line_number: the line number
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}