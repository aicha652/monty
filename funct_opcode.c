#include "monty.h"
/**
 * funct_opcode - function to handle the opcode
 * @stack: stack
 * @line_number: line_number
 * @opcode: the opcode
 * Return: void
 */
void funct_opcode(stack_t **stack, unsigned int line_number, char *opcode)
{
	int i = 0;

	instruction_t instruction[] = {
		{"push", push_stack},
		{"pall", print_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stack},
		{"nop", nop_stack},
		{"sub", sub_stack},
		{"div", div_stack},
		{"mul", mul_stack},
		{"mod", mod_stack},
		{"pchar", pchar_stack},
		{"pstr", pstr_stack},
		{NULL, NULL}
	};

	while (instruction[i].opcode != NULL)
	{
		if (strcmp(instruction[i].opcode, opcode) == 0)
		{
			instruction[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
