#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - freeing list.
 * @head: head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	dlistint_t *aux;

	while (cur != NULL)
	{
		aux = cur;
		cur = cur->next;
		free(aux);
	}
	head = NULL;
}
