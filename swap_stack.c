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
	stack_t *current, *temp1, *temp2;
	int count = 0;

	current = *stack;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp1 = *stack;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	temp2->prev = NULL;
	temp1->prev = temp2;
}
