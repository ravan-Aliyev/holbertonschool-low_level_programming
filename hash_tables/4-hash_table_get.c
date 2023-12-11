#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Find element according the key.
 * @ht: hash table.
 * @key: key value.
 *
 * Return:  the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	return (NULL);
}
