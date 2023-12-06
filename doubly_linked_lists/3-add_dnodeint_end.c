#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Add new element to end of the list.
 * @head: head of the list.
 * @n: number.
 *
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	cur = *head;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new;
	new-prev = cur;

	return (cur);
}
