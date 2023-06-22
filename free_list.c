#include "monty.h"

/**
 * free_list - frees a stack_t list
 * @stack: pointer to the top of the stack
 */
void free_list(stack_t *stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
