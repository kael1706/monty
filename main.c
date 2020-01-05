#include "monty.h"

char **value_item = NULL;
/**
* main - 
* @argc: 
* @argv: 
* Return:
*/
int main(int argc, char *argv[])
{	
	FILE *focus_to_file;

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
	can_read(focus_to_file);
	return (EXIT_SUCCESS);
}
