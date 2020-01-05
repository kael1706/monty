#include "monty.h"

/**
 * try_rx - try read and execute a monty file
 * @ftf: focus to file
 * Return: EXIT_SUCCESS | EXIT_FAILURE
 */
int try_rx(FILE *ftf)
{
	char *txt = NULL;
	size_t size_buffer = 0;
	int nLine = 0;
	stack_t *stack_head;
	char *word = NULL;
	int nch = 0;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;

	while ((nch = getline(&txt, &size_buffer, ftf)) > 0)
	{
		nLine++;
		/*printf("characters: %d\n", nch);
		printf("reading new line\n");
		printf("line: %s", txt);*/
		/*printf("%s", word);*/
		word = strtok(txt, " \t\n");
		if (word != NULL && word[0] != '#')
		{
			printf("here");
			f = find_op(word, nLine);
			*value_item = strtok(NULL, " \t\n");
			f(&stack_head, nLine);
		}
		/*dont forget free of stack_head*/
	}

	return (EXIT_SUCCESS);
}
