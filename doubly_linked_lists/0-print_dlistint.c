#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - Prints all eleemnts of list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t s = 0;

	for (curr = h; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->n);
		s++;
	}

	return (s);
}
