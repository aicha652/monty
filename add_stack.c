#include "monty.h"
/**
 * add_stack - function that
 * adds the top two elements of the stack.
 * @stack: stack
 * @line_number: line number in the file
 */
void add_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n += (*stack)->next->n;
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = tmp->n;
	(*stack)->prev = NULL;
	free(tmp);
}
