#include "lists.h"
/**
 * get_dnodeint_at_index - Find nth node of list.
 * @head: head of list.
 * @index: index for the find.
 *
 * Return: Node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int n = 0;

	for (cur = head; cur != NULL; cur = cur->next)
	{
		if (n == index)
			return (cur);
		n++;
	}

	return (NULL);
}
