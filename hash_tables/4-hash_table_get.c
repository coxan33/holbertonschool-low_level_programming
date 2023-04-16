#include "hash_tables.h"

/**
 * hash_table_get - that retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: is the key
 *
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pointer;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	pointer = ht->array[index];
	for (; pointer; pointer = pointer->next)
		if (strcmp(pointer->key, key) == 0)
			return ((char *)pointer->value);
	return (NULL);
}
