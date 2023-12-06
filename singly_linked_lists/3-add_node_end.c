#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add new list element.
 * @head: head of list.
 * @str: string.
 *
 * Return: addressof the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->len = strlen(str);
	new->str = strdup(str);

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
