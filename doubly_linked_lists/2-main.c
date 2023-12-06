#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t _print_dlistint_backward(const dlistint_t *h)
{
        const dlistint_t *curr;
        size_t s = 0;

        for (curr = h; curr != NULL; curr = curr->prev)
        {
                printf("%d\n", curr->n);
                s++;
        }

        return (s);
}
int main(void)
{
	dlistint_t *head;
	int ints[2] = {
		0,
		9
	};
	dlistint_t *ptr;
	int i;
	size_t n;

	head = NULL;
	for (i = 0; i < 2; ++i)
	{
		ptr = add_dnodeint(&head, ints[i]);
		if (!ptr)
		{
			printf("Failed\n");
			return (1);
		}
	}
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	n = _print_dlistint_backward(head);
	printf("-> %lu elements\n", n);
	return (0);
}
