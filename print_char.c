#include "monty.h"

/**
 * print_char - prints the character at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number:The line number of the opcode in the Monty file
 */
void print_char(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't print, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;
	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't print, out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", value);
}
