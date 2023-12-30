#include "monty.h"

/**
 * rotl - a function that rotates the stack to the top.
 * @stack: a double pointer to the head of the stack.
 * @line_number: a line number in the file.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		temp->next->next = NULL;
		temp->next->prev = temp;
	}
}

