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
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s", line_number, opcode);
	exit(EXIT_FAILURE);
}
