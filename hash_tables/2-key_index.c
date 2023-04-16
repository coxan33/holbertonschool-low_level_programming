#include "hash_tables.h"

/**
 * key_index - Index of a key
 * @key: The Key
 * @size: Size of array
 *
 * Return: Index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
