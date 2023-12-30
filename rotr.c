#include "monty.h"

/**
 * rotr - a funciotn that rotates the stack to the bottom.
 * @stack: a double pointer to the head of the stack.
 * @line_number: a line number in the file.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *temp = *stack;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = *stack;
		(*stack)->prev = temp;
		*stack = temp->next;
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}
}

