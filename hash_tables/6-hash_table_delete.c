#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - Delete table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cur;
	hash_node_t *aux;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			cur = ht->array[i];
			while (cur != NULL)
			{
				aux = cur;
				free(aux->key);
				free(aux->value);
				free(aux);
				cur = cur->next;
			}
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
