#include "monty.h"

/**
 * push_k -
 * @stack: 
 * @line_number:
 * Return: void
 */
void push_k(stack_t **stack, unsigned int line_number)
{
	stack_t *n_n = malloc(sizeof(stack_t));
	stack_t *c_n = *stack;
	printf("funcion push_k ejecutada\n");
	if (n_n == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
	if (value_item[1] == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(n_n);
		exit(EXIT_FAILURE);
	}
	n_n->n = atoi(*value_item);
	n_n->prev = NULL;
	if (c_n)
	{
		n_n->next = c_n;
		c_n->prev = n_n;
	}
	c_n = n_n;
}

/**
 * pall_k -
 * @stack: 
 * @line_number: 
 * Return: void
 */
void pall_k(stack_t **stack, unsigned int line_number)
{
	stack_t *c_n = *stack;
	(void) line_number;

	while (c_n)
	{
		/*printf("%d\n", c_n->n);*/
		c_n = c_n->next;
	}
}

void pint_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

void pop_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

void swap_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

void add_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

void nop_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
