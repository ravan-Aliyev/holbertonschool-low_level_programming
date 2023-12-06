#include "lists.h"
#include <stdlib.hi>
/**
 * free_list - free lists
 * @head: head of the list.
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *aux;

	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
}
