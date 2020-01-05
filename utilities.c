#include "monty.h"

/**
 * find_op - manage operations according to the command
 * @command: command of monty file
 * @line_number: position command
 * Return: void
 */
void (*find_op(char *command, unsigned int line_number))(stack_t **stack,
	unsigned int line_number)
{
	int pos;
	instruction_t get_op[] = {
		{"push", push_k},
		{"pall", pall_k},
		{"pint", pint_k},
		{"pop", pop_k},
		{"swap", swap_k},
		{"add", add_k},
		{"nop", nop_k},
		{NULL, NULL}
	};
	for (pos = 0; get_op[pos].opcode; pos++)
	{
		if (strcmp(command, get_op[pos].opcode) == 0)
			return (get_op[pos].f);
	}
	fprintf(stderr, "L%d: unknown instruction %s\n",
		line_number,
		command);
	exit(EXIT_FAILURE);
}
