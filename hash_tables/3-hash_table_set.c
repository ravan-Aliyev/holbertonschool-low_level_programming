#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Set element to hash table.
 * @ht: our hash table.
 * @key: key.
 * @value: value.
 *
 * Return: 1 succes -1 fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (key == NULL || value == NULL || new == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		if (strcmp(ht->array[index]->key, new->key) == 0)
			ht->array[index]->value = strdup(value);
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}

	return (1);
}
