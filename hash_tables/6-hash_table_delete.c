#include "hash_tables.h"

/**
 * hash_table_delete - delete the HT.
 *
 * @ht: HT
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *pointer;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		pointer = ht->array[index];
		while (pointer)
		{
			free(pointer->key);
			free(pointer->value);
			free(pointer);
			pointer = pointer->next;
		}
	}
	free(ht->array);
	free(ht);
}
