#include "monty.h"

/**
 * div_k - .
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void div_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
 * mul_k - .
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void mul_k(stack_t **stack, unsigned int line_number)
{
	stack_t *t_s = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	t_s->next->n = (t_s->next->n) * (t_s->n);
	pop_k(&(*stack), 1);
}

/**
 * mod_k - .
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void mod_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

