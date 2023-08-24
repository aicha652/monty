#include "monty.h"
/**
 * print_stack - function that prints
 * all the values on the stack
 * @stack: stack
 * @line_number: line number in the file
 * Return: void function
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
