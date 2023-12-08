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
	unsigned int i = 0;
	dlistint_t *cur;
	dlistint_t *new_l = malloc(sizeof(dlistint_t));

	if (new_l == NULL)
		return (NULL);

	new_l->n = n;

	for (cur = *h; cur != NULL; cur = cur->next)
	{
		if (i == idx)
		{
			new_l->next = cur;
			cur->prev->next = new_l;

			return (new_l);
		}
		i++;
	}

	return (NULL);
}
