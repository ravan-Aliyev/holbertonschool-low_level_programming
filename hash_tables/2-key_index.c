#include "hash_tables.h"
/**
 * key_index - find index for key value
 * @key: key.
 * @size: size of hash table.
 *
 * Return: Key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
