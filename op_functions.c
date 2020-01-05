#include "monty.h"

/**
 * push_k - pushes an element to the stack.
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void push_k(stack_t **stack, unsigned int line_number)
{
	stack_t *n_n = malloc(sizeof(stack_t));
	stack_t *c_n = *stack;
	char *prm = NULL;

	prm = strtok(NULL, " \t\n");
	printf("%s\n\n", prm);
	if (n_n == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (prm == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(n_n);
		exit(EXIT_FAILURE);
	}
	n_n->n = atoi(prm);
	n_n->prev = NULL;
	n_n->next = NULL;
	if (c_n)
	{
		n_n->next = c_n;
		c_n->prev = n_n;
	}
	*stack = n_n;
}

/**
 * pall_k - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: head of type stack_t
 * @line_number: command position
 * Return: void
 */
void pall_k(stack_t **stack, unsigned int line_number)
{
	stack_t *c_n = *stack;
	(void) line_number;
	
	printf("i am in functionn pall\n");
	if (c_n == NULL)
	{
		printf("current node is null\n");
	}
	while (c_n)
	{
		printf("inside");
		printf("%d\n", c_n->n);
		c_n = c_n->next;
	}
}
/**
 * pint_k - prints the value at the top of the stack, followed by a new line
 * @stack: head of type stack_t
 * @line_number: command position
 */
void pint_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
 * pop_k - removes the top element of the stack.
 * @stack: head of type stack_t
 * @line_number: command position
 */
void pop_k(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
