#include "monty.h"

/**
 * free_stack - a function to free the stack
 * Return: Nothing.
 */
void free_stack(void)
{
	stack_t *current = stack;

	while (current != NULL)
	{
		stack_t *temp = current;

		current = current->next;
		free(temp);
	}
}

