#include "hash_tables.h"

/**
 * hash_table_set - Set a hash table
 *
 * @ht:  is the hash table you want to add or update the key/value to
 * @key: The key
 * @value: is the value associated with the key
 *
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	struct hash_node_s *pointer;
	unsigned long int index = 0;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	pointer = ht->array[index];

	if (pointer && strcmp(pointer->key, key) == 0)
	{
		free(pointer->value);
		pointer->value = strdup(value);
		return (1);
	}
	pointer = malloc(sizeof(hash_node_t));
	if (pointer == NULL)
		return (0);
	pointer->key = strdup(key);
	pointer->value = strdup(value);
	pointer->next = ht->array[index];
	ht->array[index] = pointer;
	return (1);


}
