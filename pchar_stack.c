#include "monty.h"
/**
 * pchar_stack - function that prints the char
 * at the top of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void pchar_stack(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n > 255)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
