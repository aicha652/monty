#include "monty.h"
/**
 * div_stack - function that divides the second top element
 * of the stack by the top element of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void div_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *temp;
	int count = 0, div;

	(void)line_number;
	current = *stack;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = (*stack)->next->n / (*stack)->n;
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = temp->next;
	(*stack)->n = div;
	free(temp);
}
