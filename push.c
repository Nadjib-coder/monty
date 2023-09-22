#include "monty.h"

/**
 * push - a function to push an element onto the stack
 * @stack: the stack
 * @line_number: the line where the error find
 * Return: Nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *token;
	int value;
	stack_t *new_node;

	token = strtok(NULL, " ");
	if (token == NULL)
	{
		handle_error("L%d: usage: push integer", line_number);
	}
	value = atoi(token);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		handle_error("Error: malloc failed", line_number);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

