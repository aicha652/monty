#include "monty.h"
/**
 * pop_stack - function that removes
 * the top element of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *link;

	if (*stack != NULL)
	{
		link = *stack;
		*stack = (*stack)->next;
		if (*stack != NULL)
			(*stack)->prev = NULL;
		free(link);
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
