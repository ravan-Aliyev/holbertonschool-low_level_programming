#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Add new linked list.
 * @head: head of linked list.
 * @str: string.
 *
 * Return: Address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	curr = *head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;

	return (curr);
}
