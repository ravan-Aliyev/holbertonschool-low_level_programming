#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_print - print hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int count = 0;

	if (ht == NULL)
		exit(98);

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				count++;
				ht->array[i] = ht->array[i]->next;
			}
		}

	}
	putchar('}');
	putchar('\n');
}
