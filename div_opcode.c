#include "monty.h"

/**
 * _div - divides the two top element by the top element
 * @stack: double pointer to the stack
 * @line_number: current line number in the file
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int result;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: Unable to div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = temp->next->n / temp->n;
	temp->next->n = result;
	*stack = temp->next;
	free(temp);
}
