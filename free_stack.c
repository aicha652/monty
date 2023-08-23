#include "monty.h"
/**
 * free_stack - function that frees a stack
 * @stack: stack
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *link;

	while (stack != NULL)
	{
		link = stack;
		stack = stack->next;
		free(link);
	}
}
