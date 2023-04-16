#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * @size: Size of array
 *
 * Return: A pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pointer;

	pointer = malloc(sizeof(hash_table_t));
	if (pointer == NULL)
		return (NULL);

	pointer->size = size;
	pointer->array = malloc(sizeof(hash_node_t *) * size);

	if (pointer->array == NULL)
	{
		free(pointer);
		return (NULL);
	}
	return (pointer);
}

