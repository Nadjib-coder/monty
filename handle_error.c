#include "monty.h"

/**
 * handle_error - a function to handle errors
 * @message:the message we want to print.
 * @line_number: the line where the error encoutred.
 * Return: exit with status EXIT_FAILURE.
 */
void handle_error(const char *message, unsigned int line_number)
{
	fprintf(stderr, message, line_number);
	fprintf(stderr, "\n");
	free_stack();
	exit(EXIT_FAILURE);
}

