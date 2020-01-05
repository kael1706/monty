#include "monty.h"

char **value_item = NULL;
/**
* main - core of program
* @argc: count of args
* @argv: args
* Return: EXIT_SUCCESS | EXIT_FAILURE
*/
int main(int argc, char *argv[])
{
	FILE *ftf = NULL;
	
	char *txt = NULL;
	char *word = NULL;
	size_t size_buffer = 0;
	int nLine = 0;
	stack_t *stack_head = NULL;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	int nch = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (argv[1])
		ftf = fopen(argv[1], "r");
	if (ftf == NULL)
	{
		fprintf(stderr, "Error Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while ((nch = getline(&txt, &size_buffer, ftf)) != -1)
	{
		nLine++;
		printf("characters: %d\n", nch);
		printf("reading new line\n");
		printf("line: %s", txt);
		word = strtok(txt, " \t\n");
		printf("%s ", word);
		if (word != NULL && word[0] != '#')
		{
			f = find_op(word, nLine);
			if (f)
				f(&stack_head, nLine);
		}
		/*dont forget free of stack_head*/
	}

	/*try_rx(focus_to_file);*/
	return (EXIT_SUCCESS);
}
