#include "lists.h"
/**
 * sum_dlistint - find sum of list elements
 * @head: head of the list
 *
 * Return: Sum of the elements.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}

	return (0);
}
