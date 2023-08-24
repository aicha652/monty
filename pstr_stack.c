#include "monty.h"
/**
 * pstr_stack - function that prints the string
 * starting at the top of the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void pstr_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;
	if (*stack == NULL)
		printf("\n");
	tmp = *stack;
	while (tmp != NULL && tmp->n != 0 && tmp->n <= 255)
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
