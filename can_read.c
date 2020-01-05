#include "monty.h"

/**
* can_read -
* Return:
*/
int can_read(FILE *ftf)
{
	char *txt = NULL;
	size_t size_buffer = 0;
	int nLine = 0;
	stack_t *stack_head;
	char *word;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	while (getline(&txt, &size_buffer, ftf) > 0)
	{
		nLine++;
		printf("reading new line\n");
		word= strtok(txt, " \t\n");
		printf("here");
		f = find_op(word, nLine);
		*value_item = strtok(NULL, " \t\n");
		f(&stack_head, nLine);
	}

	return (EXIT_SUCCESS);
}
