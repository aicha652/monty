#include "monty.h"
/**
 * main - main function
 * @argc: size of arguments
 * @argv: array of arguments
 * Return: success or failure
 */
int main(int argc, char *argv[])
{
	FILE *fptr = NULL;
	char *line = NULL, *opcode = NULL;
	size_t sz = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &sz, fptr) != -1)
	{
		line_number++;
		opcode = strtok(line, "\n\t\r ");
		if (opcode != NULL && opcode[0] != '#')
		{
			funct_opcode(&stack, line_number, opcode);
		}
	}
	free(line);
	free_stack(stack);
	fclose(fptr);
	exit(EXIT_SUCCESS);
}
