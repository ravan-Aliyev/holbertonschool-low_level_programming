#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints lists.
 * @h: head of linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *curr;
	size_t i = 0;

	for (curr = h; curr != NULL; curr = curr->next)
	{
		i++;
		if (curr->str == NULL)
		{
			printf("[0] (nil)\n");
			continue;
		}
		printf("[%d] %s\n", curr->len, curr->str);
	}

	return (i);
}
