#include "lists.h"
/**
 * dlistint_len - Find length of linked list.
 * @h: head of list.
 *
 * Return: Number of elements of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
