#ifndef _MONTY_H_
#define _MONTY_H_

/*
 *stdio.h: fopen(), FILE, getline()
 *string.h: strtok(), strchr()
 *stdlib.h: EXIT_SUCCESS, EXIT_FAILURE.
 *ctype.h: isdigit(), unsigned char
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void (*find_op(char *command, unsigned int line_number))
	(stack_t **stack, unsigned int line_number);
void push_k(stack_t **stack, unsigned int line_number);
void pall_k(stack_t **stack, unsigned int line_number);
void pop_k(stack_t **stack, unsigned int line_number);
void pint_k(stack_t **stack, unsigned int line_number);
void swap_k(stack_t **stack, unsigned int line_number);
void add_k(stack_t **stack, unsigned int line_number);
void nop_k(stack_t **stack, unsigned int line_number);

void free_s(stack_t *s_h);

int try_rx(FILE *ftf);
#endif
