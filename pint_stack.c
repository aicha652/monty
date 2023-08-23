#include "monty.h"
/**
 * pint_stack - function that  prints the
 * value at the top of the stack
 * @stack :stack
 * line_number: line number in the file
 * Return: void
 */
void pint_stack(stack_t **stack, unsigned int line_number)
{
	/*if (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
	}*/
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
