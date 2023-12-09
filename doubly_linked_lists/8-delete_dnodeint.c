#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete list element
 * @head: head of the list.
 * @index: index of the list element.
 *
 * Return: 1 if success -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	cur = *head;

	if (index == 0)
	{
		*head = cur->next;
		if (cur->next != NULL)
			cur->next->prev = NULL;
		free(cur);
		return (-1);
	}

	while (i < index)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
		i++;
	}
	cur->next->prev = cur->prev;
	if (cur->prev != NULL)
		cur->prev->next = cur->next;
	free(cur);
	return (1);
}
