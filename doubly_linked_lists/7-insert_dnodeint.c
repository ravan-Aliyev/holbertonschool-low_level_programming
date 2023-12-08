#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Insert new element at the index of list.
 * @h: head value of list.
 * @idx: index.
 * @n: value.
 *
 * Return: Address of the node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *cur;
	dlistint_t *new_l = malloc(sizeof(dlistint_t));

	if (new_l == NULL)
		return (NULL);

	new_l->n = n;
	new_l->next = NULL;
	new_l->prev = NULL;

	if (*h == NULL || idx == 0)
	{
		new_l->next = *h;
		if (*h != NULL)
			(*h)->prev = new_l;

		*h = new_l;

		return (new_l);
	}

	cur = *h;
	for (i = 0; cur != NULL && i < idx - 1; i++)
		cur = cur->next;

	new_l->next = cur->next;
	new_l->prev = cur;
	if (cur->next != NULL)
		cur->next->prev = new_l;
	cur->next = new_l;

	return (new_l);
}
