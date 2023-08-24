#include "monty.h"
/**
 * mod_stack - function that computes the rest of
 * the division of the second top element of
 * the stack by the top element of the stack.
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void mod_stack(stack_t **stack, unsigned int line_number)
{
	int count = 0, mod;
	stack_t *current, *tmp;

	(void)line_number;
	current = *stack;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod = (*stack)->next->n % (*stack)->n;
	tmp = *stack;
	*stack = tmp->next;
	(*stack)->n = mod;
	(*stack)->prev = NULL;
	free(tmp);
}
