#include "monty.h"

/**
 * swap_k - swaps the top two elements of the stack.
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void swap_k(stack_t **stack, unsigned int line_number)
{
	stack_t *t_s = *stack;

	if (*stack == NULL || *stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_s(*stack);
		exit(EXIT_FAILURE);
	}	
	*stack = *stack->next;
	*stack->prev = NULL;
	if (*stack->next != NULL)
		*stack->next->prev = t_s;
	t_s->next = *stack->next;
	*stack->next = t_s;
	t_s->prev = *stack;
}


/**
 * add_k - adds the top two elements of the stack.
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void add_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}


/**
 * nop_k - doesn’t do anything.
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void nop_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
