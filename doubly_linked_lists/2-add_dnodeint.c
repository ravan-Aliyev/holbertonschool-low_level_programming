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
	new->next = *head;
	new->prev = *head;
	*head = new;

	return (new);
}
