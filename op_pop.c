#include "monty.h"

/**
 * pop_opcode - removes the top element of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 **/
void pop_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(glob.line);
		free_list(*stack);
		exit(EXIT_FAILURE);
	}
	/*Set temp to point to the next node in the stack*/
	temp = (*stack)->next;
	/*Free the memory allocated for the current top node of the stack*/
	free(*stack);
	/*Update the head pointer to point to the new top node.*/
	*stack = temp;

	if (*stack != NULL)
		(*stack)->prev = NULL;
}
