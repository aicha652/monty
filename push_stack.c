#include "monty.h"
/**
 * push_stack - function that pushes
 * an element to the stack
 * @stack: the stack
 * @line_number: the element to be pushed
 * Return: void function
 */
void push_stack(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \t\n");
	stack_t *new;

	if (arg == NULL || !isdigit(*arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = line_number;
	new->prev = NULL;
	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}
}
