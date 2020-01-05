#include "monty.h"


/**
* main - core of program
* @argc: count of args
* @argv: args
* Return: EXIT_SUCCESS | EXIT_FAILURE
*/
int main(int argc, char *argv[])
{
	FILE *focus_to_file = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (argv[1])
		focus_to_file = fopen(argv[1], "r");
	if (focus_to_file == NULL)
	{
		fprintf(stderr, "Error Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	try_rx(focus_to_file);
	return (EXIT_SUCCESS);
}
