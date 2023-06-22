#include "monty.h"

/**
 * fill_an_array - fill an array with elements
 * @a: the given array
 * @element: the given element
 * @len: the length of the array
 *
 * Return: pointer to filled array
 */
void *fill_an_array(void *a, int element, unsigned int len)
{
	char *p = a;
	unsigned int i = 0;

	while (i < len)
	{
		*p = element;
		p++;
		i++;
	}
	return (a);
}

/**
 * _realloc - Function that reallocates memory block
 * @ptr: pointer to the previous memory
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		push_error(11);
	}
	res = malloc(new_size);
	if (res == NULL)
		push_error(11);
	if (ptr == NULL)
	{
		fill_an_array(res, '\0', new_size);
		free(ptr);
	}
	else
	{
		memcpy(res, ptr, old_size);
		free(ptr);
	}
	return (res);
}

void free_data(void)
{
	free(data.line);
	data.line = NULL;
	free(data.args);
	data.args = NULL;
	fclose(data.fp);
}
/**
 * free_dlistint - frees a linked list
 * @stack: a pointer to the linked list
 *
 * Return: void
 */

void free_dlistint(stack_t *stack)
{
	stack_t *current;

	while (stack)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
