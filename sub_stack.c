#include "monty.h"
/**
 * sub_stack - function that subtracts the top element
 * of the stack from the second top element of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void function
 */
void sub_stack(stack_t **stack, unsigned int line_number)
{
	int count = 0, sub;
	stack_t *current, *temp;

	(void)line_number;
	current = *stack;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = (*stack)->n - (*stack)->next->n;
	temp = *stack;
	*stack = temp->next;
	(*stack)->n = abs(sub);
	free(temp);
}
