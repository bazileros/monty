#include "monty.h"
/**
 * _push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _push(stack_t **head, unsigned int counter)
{
	int n, indexVar = 0, errorCheck = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			indexVar++;
		for (; bus.arg[indexVar] != '\0'; indexVar++)
		{
			if (bus.arg[indexVar] > 57 || bus.arg[indexVar] < 48)
				errorCheck = 1;
    }
		
    if (errorCheck == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
