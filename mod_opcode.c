#include "monty.h"

/**
 * _mod - The modulus of the second top element with the top.
 * @stack: pointer to the stack
 * @line_number: line number of the opcode
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int a, b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: Unable to open, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = b % a;
	pop_opcode(stack, line_number);
}
