#include "monty.h"
/**
 * swap_stack - function that swaps
 * the top two elements of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void swap_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;
	int count = 0;

	while (*stack != NULL)
	{
		count++;
		*stack = (*stack)->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp1 = *stack;
		temp2 = temp1->next;
		temp1->n = temp2->n;
		temp2->n = temp1->n;
	}
}
