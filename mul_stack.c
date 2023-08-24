#include "monty.h"
/**
 * mul_stack - function that multiplies the second top
 * element of the stack with the top element of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void mul_stack(stack_t **stack, unsigned int line_number)
{
	int count = 0, mul;
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mul = (*stack)->n * (*stack)->next->n;
	tmp = *stack;
	*stack = tmp->next;
	(*stack)->n = mul;
	(*stack)->prev = NULL;
	free(tmp);
}
