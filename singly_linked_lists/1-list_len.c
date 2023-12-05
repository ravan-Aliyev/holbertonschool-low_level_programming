#include "lists.h"
#include <stddef.h>
/**
 * list_len - Find length of linked list.
 * @h: head of linked list
 *
 * Return: length of list.
 */
size_t list_len(const list_t *h)
{
	const list_t *curr;
	size_t i = 0;

	for (curr = h; curr != NULL; curr = curr->next)
	{
		i++;
	}

	return (i);
}
