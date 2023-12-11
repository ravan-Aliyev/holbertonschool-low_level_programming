#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - Create hash table.
 * @size: size of hash table.
 *
 * Return: Pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	hash_node_t *arr = malloc(size);

	if (!hash || !arr)
		return (NULL);

	hash->size = size;
	hash->array = &arr; 

	return (hash);
}
