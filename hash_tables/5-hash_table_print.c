#include "hash_tables.h"

/**
 * hash_table_print - Print all HT
 *
 * @ht: The HT
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *pointer;
	int n = 0;

	if (ht == NULL)
		;

	else
	{
		printf("{");
		for (index = 0; ht && index < ht->size; index++)
		{
			pointer = ht->array[index];
			while (pointer)
			{
				if (n != 0)
					printf(", ");
				printf("'%s': '%s'", pointer->key, pointer->value);
				pointer = pointer->next;
				n = 1;
			}
		}
		printf("}\n");
	}
}
