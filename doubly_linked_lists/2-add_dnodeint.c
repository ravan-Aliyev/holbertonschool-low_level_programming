#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint - add new node begginig of the list.
 * @head: head of the list.
 * @n: number.
 *
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
