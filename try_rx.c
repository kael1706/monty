#include "monty.h"

/**
 * try_rx - try read and execute a monty file
 * @ftf: focus to file
 * Return: EXIT_SUCCESS | EXIT_FAILURE
 */
int try_rx(FILE *ftf)
{
	char *txt = NULL;
	char *word = NULL;
	size_t size_buffer = 0;
	int nLine = 0;
	stack_t *stack_head = NULL;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	int nch = 0;

	while ((nch = getline(&txt, &size_buffer, ftf)) != -1)
	{
		nLine++;
		word = strtok(txt, " \t\n");
		if (word != NULL && word[0] != '#')
		{
			f = find_op(word, nLine);
			if (f)
				f(&stack_head, nLine);
		}
		/*dont forget free of stack_head*/
	}
	free_s(stack_head);
	stack_head = NULL;
	free(txt);
	fclose(ftf);
	return (EXIT_SUCCESS);
}
