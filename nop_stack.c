#include "monty.h"
/**
 * nop_stack - fucntion that doesn’t do anything
 * @stack: stack
 * @line_number: line number in the file
 * Return: void
 */
void nop_stack(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;
}
