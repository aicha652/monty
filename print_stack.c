#include "monty.h"
/**
 * print_stack - function that prints
 * all the values on the stack
 * @stack: stack
 * Return: void function
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	while (*stack != NULL)
	{
		printf("%d\n",(*stack)->n);
		*stack = (*stack)->next;
	}
}
