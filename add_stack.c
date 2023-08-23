#include "monty.h"
/**
 * add_stack - function that
 * adds the top two elements of the stack.
 * @stack: stack
 * @line_number: line number in the file
 */
void add_stack(stack_t **stack, unsigned int line_number)
{
	int count = 0, sum = 0;
	stack_t *tmp, *link;

	link = *stack;
	while (link != NULL)
	{
		count++;
		link = link->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = sum;
	(*stack)->prev = NULL;
	free(tmp);
}
